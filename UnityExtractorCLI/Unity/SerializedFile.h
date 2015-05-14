#ifndef SERIALIZEDFILE_H
#define SERIALIZEDFILE_H

#include "Common.h"
#include "Enums.h"
#include "Type.h"

struct FileIdentifier
{
	struct GUIDPlaceHolder
	{
		uint32_t data[4];

		friend std::ostream &operator<<(std::ostream &out, const GUIDPlaceHolder &guid);
	};

	std::string pathName;
	int32_t type;
	GUIDPlaceHolder guid;

	friend std::ostream &operator<<(std::ostream &out, const FileIdentifier &fi);
};

struct SerializedFileHeader
{
	uint32_t m_MetadataSize;
	uint32_t m_FileSize;
	uint32_t m_Version;
	uint32_t m_DataOffset;
	int8_t m_Endianess;
	int8_t m_Reserved[3];

	void SwapEndianess()
	{
		m_MetadataSize = bswap32(m_MetadataSize);
		m_FileSize = bswap32(m_FileSize);
		m_Version = bswap32(m_Version);
		m_DataOffset = bswap32(m_DataOffset);
	}

	friend std::ostream &operator<<(std::ostream &out, const SerializedFileHeader &header);
};

struct SerializedFile
{
	struct ObjectInfo
	{
		int32_t byteStart;
		int32_t byteSize;
		int32_t typeID;
		int16_t classID;
		uint16_t isDestroyed;

		friend std::ostream &operator<< (std::ostream &out, const ObjectInfo &info);
	};

	uint32_t m_ReadOffset;
	std::map<int,Type,std::less<int>,std::allocator<std::pair<int const ,Type> > > m_Type;
	//vector_map<std::pair<int,ObjectInfo> , std::less<int> , std::allocator<std::pair<int,ObjectInfo> > > m_Object;
	std::map<int,ObjectInfo> m_Object; // vector_map = sorted_vector which is essentially a (multi-)set
									   // which can be reduced to (multi-)map<int,object>
	char m_FileEndianess;
	bool m_IsDirty;
	bool m_MemoryStream;
	bool m_CachedFileStream;
	bool m_HasErrors;
	uint32_t m_Options;
	uint32_t m_TargetPlatform;
	int m_SubTarget;
	uint32_t m_WriteDataOffset;
	std::vector<FileIdentifier> m_Externals;
	//CacheReaderBase *m_ReadFile;
	//ResourceImageGroup m_ResourceImageGroup;
	std::string m_DebugPath;
};

#endif // SERIALIZEDFILE_H
