#include "UnityExtractor.h"
#include "UnityUtil.h"
#include "Unity/Unity.h"
#include "IO/BinaryReader.h"
#include "IO/TextWriter.h"
using namespace std;

UnityExtractor::UnityExtractor(std::string filename)
	:file(new ifstream(filename.c_str(),ios::binary)),reader(*file)
{
}

UnityExtractor::UnityExtractor(std::istream &stream)
	:reader(stream)
{

}

UnityExtractor::~UnityExtractor()
{
	if(file)
	{
		file->close();
		delete file;
	}
}

void UnityExtractor::Process()
{
	reader.Read(&header);
	header.SwapEndianess();

	data = new SerializedFile;

	string unityVersion;
	reader.Read(&unityVersion);
	reader.Read(&data->m_TargetPlatform);

	int typeCount;
	reader.Read(&typeCount);
	for(int i=0;i!=typeCount;i++)
	{
		int classID;
		reader.Read(&classID);
		if(classID == 1012)
			classID = 1011;
		TypeTree *typeTree = new TypeTree;
		typeTree->Transfer(&reader);
		//data->m_Type[classID].SetOldType(typeTree);
	}

	int flag;
	reader.Read(&flag);
	int objectCount;
	reader.Read(&objectCount);
	for(int i=0;i!=objectCount;i++)
	{
		int fileID; // WEIRD: should be objectID, Unity named it fileID
		reader.Read(&fileID);
		if(flag)
			reader.Read(&fileID);

		SerializedFile::ObjectInfo objectInfo;
		reader.Read(&objectInfo);

		if(objectInfo.typeID == 1012)
			objectInfo.typeID = 1011;

		if(objectInfo.classID == 1012)
			objectInfo.classID = 1011;

		data->m_Object[fileID] = objectInfo;
	}

	int referenceCount;
	reader.Read(&referenceCount);
	for(int i=0;i!=referenceCount;i++)
	{
		FileIdentifier fi;
		string something;
		reader.Read(&something); // TODO: not sure what is this;
		reader.Read(&fi.guid);
		reader.Read(&fi.type);
		reader.Read(&fi.pathName);

		data->m_Externals.push_back(fi);
	}
}

void UnityExtractor::ReadObject(int fileID)
{
	if(data->m_Object.count(fileID))
	{
		cout << "Read: " << fileID << endl;
		SerializedFile::ObjectInfo info = data->m_Object[fileID];


#if 0
		// Dump Binary
		reader.SetPosition(header.m_DataOffset + info.byteStart);
		ofstream dump(to_string(fileID) + ".bin",ios::binary);
		copy_n(istreambuf_iterator<char>(reader.GetStream()),
			   info.byteSize,
			   ostreambuf_iterator<char>(dump)
		);
		dump.close();
#endif

		Object *object = UnityUtil::CreateObject(info.classID);

		reader.SetPosition(header.m_DataOffset + info.byteStart);

		ifstream is(to_string(fileID) + ".bin",ios::binary);
		BinaryReader br(is);

		UnityUtil::TransferObject(object,&br);

		Mesh *mesh = dynamic_cast<Mesh*>(object);
		
		//TextWriter tw(cout);
		//UnityUtil::WriteObject(object,tw);
	}
}

void UnityExtractor::Extract()
{
	string cwd;
	cwd.resize(FILENAME_MAX);
	getcwd(&cwd[0],cwd.size());
	Extract(cwd);
}

void UnityExtractor::Extract(std::string path)
{
	cout << "Extract to: " << path << endl;
}

void UnityExtractor::Print(ostream &out)
{
	out << "Header" << endl;
	out << header << endl;

	out << "Objects[" << data->m_Object.size() << "]" << endl;
	for(auto &pair:data->m_Object)
	{
		out << "ID[" << pair.first << "]" << endl;

		if(pair.second.classID == CLASS_Mesh)
		{
			out << "Name: ";
			reader.SetPosition(header.m_DataOffset + pair.second.byteStart);
			string name;
			reader.ReadString(&name);
			out << name << endl;
		}

		out << pair.second << endl;
	}

	out << "External References[" << data->m_Externals.size() << "]" << endl;
	for(auto &ref:data->m_Externals)
	{
		out << ref << endl;
	}
}
