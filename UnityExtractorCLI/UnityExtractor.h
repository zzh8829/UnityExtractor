#ifndef UNITYEXTRACTOR_H
#define UNITYEXTRACTOR_H

#include "Common.h"
#include "Unity/Unity.h"
#include "IO/BinaryReader.h"

class UnityExtractor
{
public:
	UnityExtractor(std::string filename);
	UnityExtractor(std::istream &stream);
	virtual ~UnityExtractor();

	void Process();
	void ReadObject(int fileID);
	void Extract();
	void Extract(std::string path);
	void Print(std::ostream &out);

private:
	SerializedFile *data = nullptr;
	SerializedFileHeader header;
	std::ifstream *file = nullptr;
	BinaryReader reader;
};

#endif // UNITYEXTRACTOR_H
