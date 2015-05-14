#include "NamedObject.h"

ClassIDType NamedObject::GetClassIDVirtualInternal()
{
	return CLASS_NamedObject;
}

void NamedObject::VirtualRedirectTransfer(BinaryReader *reader)
{
	Transfer(reader);
}

void NamedObject::Transfer(BinaryReader *reader)
{
	reader->ReadObject(&m_Name);
}
