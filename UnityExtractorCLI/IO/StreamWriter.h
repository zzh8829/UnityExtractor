#ifndef STREAMWRITER_H
#define STREAMWRITER_H

#include "Common.h"

class StreamWriter
{
public:
	StreamWriter(std::ostream &stream):
		m_Stream(stream)
	{
	}
	
	virtual ~StreamWriter()
	{
	}
	
	template<typename T>
	void Write(T *object)
	{
		m_Stream << (uint32_t)object;
	}
	
	void SetPosition(size_t pos)
	{
		m_Stream.seekp(pos);
	}
	
	size_t GetPosition()
	{
		return m_Stream.tellp();
	}
	
	void Align(size_t alignment = 4)
	{
		int pos = GetPosition();
		if(pos % alignment)
			SetPosition( pos + alignment - pos%alignment );
	}
	
protected:
	std::ostream &m_Stream;
};

#endif
