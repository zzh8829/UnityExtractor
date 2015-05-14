#ifndef TYPE_H
#define TYPE_H

#include "Object.h"

struct TypeDescriptor
{
	uint32_t hash;
	void *spare;
	char *name;
};

struct TypeTree
{
	std::list<TypeTree> m_Children;
	TypeTree *m_Father;
	std::string m_Type;
	std::string m_Name;
	int m_ByteSize;
	int m_Index;
	int m_IsArray;
	int m_Version;
	TransferMetaFlags m_MetaFlag;
	int m_ByteOffset;
	void *m_DirectPtr;

	void Transfer(BinaryReader *reader);
};

struct Type
{
	TypeTree *m_OldType;
	TypeTree *m_NewType;
	bool m_Equals;
};

#endif // TYPE_H
