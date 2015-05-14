#include "Type.h"

void TypeTree::Transfer(BinaryReader *reader)
{
	reader->Read(&m_Type);
	reader->Read(&m_Name);
	reader->Read(&m_ByteSize);
	reader->Read(&m_Index);
	reader->Read(&m_IsArray);
	reader->Read(&m_Version);
	reader->Read(&m_MetaFlag);

	reader->ReadSTLContainer(&m_Children);
}
