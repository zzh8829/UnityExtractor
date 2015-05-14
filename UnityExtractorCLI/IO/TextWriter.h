#ifndef TEXTWRITER_H
#define TEXTWRITER_H

#include "Common.h"
#include "StreamWriter.h"
#include "Unity/Structs.h"

#if 0

class TextWriter : public StreamWriter
{
public:
	static char kNewLine;
	static char kSpace;

	TextWriter(std::ostream &stream)
		:StreamWriter(stream)
	{
	}

	template<typename T>
	void Write(T *object)
	{
		m_Stream << *object;
		//WriteHex((uint32_t)object);
	}

	template<typename T>
	void Write(std::vector<T> *vec);

	void WriteChar(char c)
	{
		m_Stream << c;
	}

	void WriteInt(int n)
	{
		m_Stream << n;
	}

	void WriteHex(int n)
	{
		std::ios::fmtflags flag(m_Stream.flags());
		m_Stream << std::hex << n;
		m_Stream.flags(flag);
	}

	void WriteString(std::string str)
	{
		m_Stream << str;
	}

	void WriteLine();

	template<typename T>
	void WriteLine(T *object);

	template<typename T>
	void WriteSpace(T *object);
};

template<>
inline void TextWriter::Write<Vector3f>(Vector3f *object)
{
	WriteString("[Vector3f]: ");
	WriteSpace(&object->x);
	WriteSpace(&object->y);
	WriteLine(&object->z);
}

template<>
inline void TextWriter::Write<Object>(Object *object)
{
	WriteString("[Object]: " + EnumToString<ClassIDType>(object->GetClassIDVirtualInternal()));
}

template<>
inline void TextWriter::Write<NamedObject>(NamedObject *object)
{
	WriteString("[NamedObject]: " + object->m_Name);
}

template<>
inline void TextWriter::Write<Mesh>(Mesh *object)
{
	WriteString("[Mesh]:\n");
	WriteLine((NamedObject*)object);
	WriteLine(&object->m_SubMeshes);
}

template<>
inline void TextWriter::Write<SubMesh>(SubMesh *object)
{
	WriteString("[SubMesh]:\n");
	WriteSpace(&object->firstByte);
	WriteSpace(&object->indexCount);
	WriteSpace(&object->topology);
	WriteSpace(&object->firstVertex);
	WriteLine(&object->vertexCount);
	WriteSpace(&object->localAABB.m_Center);
	WriteLine(&object->localAABB.m_Extent);
}

inline void TextWriter::WriteLine()
{
	WriteChar(kNewLine);
}

template<typename T>
inline void TextWriter::WriteLine(T *object)
{
	Write(object);
	WriteLine();
}

template<typename T>
inline void TextWriter::WriteSpace(T *object)
{
	Write(object);
	WriteChar(kSpace);
}

template<typename T>
inline void TextWriter::Write(std::vector<T> *vec)
{
	WriteString("[vector<T>]: " + std::to_string(vec->size()));
	for(int i=0;i!=vec->size();i++)
	{
		if(i!=vec->size()-1)
			WriteLine();
		Write(&((*vec)[i]));
	}
}

#endif

#endif // TEXTWRITER_H
