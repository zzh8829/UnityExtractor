#include "Mesh.h"
using namespace std;

ClassIDType Mesh::GetClassIDVirtualInternal()
{
	return CLASS_Mesh;
}

void Mesh::VirtualRedirectTransfer(BinaryReader *reader)
{
	Transfer(reader);
}

void Mesh::Transfer(BinaryReader *reader)
{
	NamedObject::Transfer(reader);

	cout << m_Name << endl;

	reader->ReadSTLContainer(&m_SubMeshes);
	reader->ReadSTLContainer(&m_Shapes);
	reader->Align();
	reader->ReadSTLContainer(&m_ShapeVertices);
	reader->ReadObject(&m_MeshCompression);
	reader->ReadObject(&m_StreamCompression);
	reader->ReadObject(&m_IsReadable);
	reader->ReadObject(&m_KeepVertices);
	reader->ReadObject(&m_KeepIndices);
	reader->Align();

	if(!m_MeshCompression)
	{
		cout << "Un Compressed" << endl;
		reader->ReadSTLContainer(&m_IndexBuffer);
		reader->Align();
		reader->ReadSTLContainer(&m_Skin);
		reader->ReadSTLContainer(&m_Bindpose);
		reader->ReadObject(&m_VertexData);
	}
	else
	{
		cout << "Compressed" << endl;
	}

	//reader->ReadSTLContainer(&m_Shapes.channels);
	//reader->ReadSTLContainer(&m_Shapes.fullWeights);
	//reader->ReadSTLContainer(&m_Bindpose) ;
	//reader->ReadSTLContainer(&m_BonePathHashs);

#if 0
	reader->ReadObject(&m_RootBonePathHash);

	reader->Align();

	reader->Align();
#endif

	cout << m_SubMeshes.size() << endl;
	cout << m_SubMeshes[0].firstByte << " ";
	cout << m_SubMeshes[0].indexCount << " ";
	cout << m_SubMeshes[0].firstVertex << " ";
	cout << m_SubMeshes[0].vertexCount << endl;
	cout << m_SubMeshes[1].firstByte << " ";
	cout << m_SubMeshes[1].indexCount << " ";
	cout << m_SubMeshes[1].firstVertex << " ";
	cout << m_SubMeshes[1].vertexCount << endl;
	cout << m_SubMeshes[2].firstByte << " ";
	cout << m_SubMeshes[2].indexCount << " ";
	cout << m_SubMeshes[2].firstVertex << " ";
	cout << m_SubMeshes[2].vertexCount << endl;
	//cout << m_Shapes.channels.size() << endl;
}
