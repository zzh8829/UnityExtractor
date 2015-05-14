#include "SerializedFile.h"

using namespace std;

ostream &operator<<(std::ostream &out, const FileIdentifier::GUIDPlaceHolder &guid)
{
	ios::fmtflags flag(out.flags());
	for(int i=0;i!=4;i++)
	{
		out << hex << setfill('0') << setw(4) << guid.data[i] << " ";
	}
	out.flags(flag);
	return out;
}

ostream &operator<<(std::ostream &out, const FileIdentifier &fi)
{

	out << "type: " << fi.type << endl;
	out << "pathName: " << fi.pathName << endl;
	out << "guid: " << fi.guid << endl;

	return out;
}

ostream &operator<<(ostream &out, const SerializedFileHeader &header)
{
	out << "m_MetadataSize: " << header.m_MetadataSize << endl;
	out << "m_FileSize: " << header.m_FileSize << endl;
	out << "m_Version: " << header.m_Version << endl;
	out << "m_DataOffset: " << header.m_DataOffset << endl;
	out << "m_Endianess: " << header.m_Endianess << endl;

	return out;
}

ostream &operator<<(ostream &out, const SerializedFile::ObjectInfo &info)
{
	out << "byteStart: " << info.byteStart << endl;
	out << "byteSize: " << info.byteSize << endl;
	out << "typeID: " << info.typeID << endl;
	out << "classID: " << EnumToString<ClassIDType>((ClassIDType)info.classID) << endl;
	out << "isDestroyed: " << info.isDestroyed << endl;

	return out;
}
