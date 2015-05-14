#ifndef STREAMREADER_H
#define STREAMREADER_H

#include "Common.h"

class StreamReader
{
public:
	StreamReader(std::istream &stream)
		:m_Stream(stream)
	{
	}
	
	virtual ~StreamReader()
	{
	}
	
	template<typename T>
	void Read(T *object)
	{
		Read(object,sizeof(T));
	}
	
	template<typename T>
	void Read(T *object, size_t len)
	{
		m_Stream.read(reinterpret_cast<char*>(object),len);
	}
	
	void SetPosition(size_t pos)
	{
		m_Stream.seekg(pos);
	}
	
	size_t GetPosition()
	{
		return m_Stream.tellg();
	}
	
	std::istream &GetStream() 
	{
		return m_Stream;
	}
	
	void Align(size_t alignment = 4)
	{
		int pos = GetPosition();
		if(pos % alignment)
			SetPosition( pos + alignment - pos%alignment );
	}
	
protected:
	std::istream &m_Stream;
};

#endif
