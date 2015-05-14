#include "BinaryReader.h"

void BinaryReader::ReadCString(std::string *str)
{
	str->clear();
	char c;
	while(true)
	{
		Read(&c);
		if(!c)
			break;
		*str += c;
	}
}

void BinaryReader::ReadString(std::string *str)
{
	str->clear();
	int len;
	Read(&len);
	str->resize(len);
	StreamReader::Read(&(*str)[0],len);
}
