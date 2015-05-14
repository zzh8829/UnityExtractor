#ifndef BINARYREADER_H
#define BINARYREADER_H

#include "Common.h"
#include "StreamReader.h"

class BinaryReader: public StreamReader
{
public:
	BinaryReader(std::istream &stream):
		StreamReader(stream)
	{
	}

	template<typename T>
	void Read(T *object)
	{
		StreamReader::Read(object);
	}

	void ReadCString(std::string *str);
	void ReadString(std::string *str);

	template<typename T>
	void ReadObject(T *object);

	template<typename Container>
	void ReadSTLContainer(Container* container);

private:

	template<typename T>
	class has_transfer
	{
		template<typename C>
		static std::true_type check(decltype(&C::Transfer));
		template<typename C>
		static std::false_type check(...);

	public:
		enum { value = std::is_same<
			   decltype(check<T>(nullptr)),std::true_type>::value };
	};

	template<typename T>
	typename std::enable_if<has_transfer<T>::value>::type
	ReadObjectImpl(T *object)
	{
		object->Transfer(this);
	}

	template<typename T>
	typename std::enable_if<!has_transfer<T>::value>::type
	ReadObjectImpl(T *object)
	{
		Read(object);
	}

};

template<>
inline void BinaryReader::Read(std::string *str)
{
	ReadCString(str);
}

template<typename T>
inline void BinaryReader::ReadObject(T *object)
{
	ReadObjectImpl(object);
}

template<>
inline void BinaryReader::ReadObject(std::string *str)
{
	ReadString(str);
	Align();
}

template<typename Container>
inline void BinaryReader::ReadSTLContainer(Container* container)
{
	typedef typename Container::value_type T;
	container->clear();
	int len;
	Read(&len);
	for(int i=0;i!=len;i++)
	{
		T obj;
		ReadObject(&obj);
		container->push_back(obj);
	}
}

#endif // BINARYREADER_H
