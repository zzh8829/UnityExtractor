#ifndef STRUCTS_H
#define STRUCTS_H

#include "Common.h"
#include "Vector3f.h"
#include "IO/BinaryReader.h"

struct Vector4f
{
	float x;
	float y;
	float z;
	float w;
};

struct Matrix4x4f
{
	float m_Data[16];
};

struct Matrix3x3f
{
	float m_Data[9];
};

struct Quaternionf
{
	float x;
	float y;
	float z;
	float w;
};

struct MeshBlendShape
{
	std::string name;
	uint32_t firstVertex;
	uint32_t vertexCount;
	Vector3f aabbMinDelta;
	Vector3f aabbMaxDelta;
	int8_t hasNormals;
	int8_t hasTangents;
};

struct MeshBlendShapeVertex
{
	Vector3f vertex;
	Vector3f normal;
	Vector3f tangent;
	int32_t index;
};

namespace Unity_4_3_2f1
{

struct BlendShapeVertex
{
	Vector3f vertex;
	Vector3f normal;
	Vector3f tangent;
	uint32_t index;
};

struct BlendShape
{
	uint32_t firstVertex;
	uint32_t vertexCount;
	uint8_t hasNormals;
	uint8_t hasTangents;

	void Transfer(BinaryReader* reader)
	{
		reader->ReadObject(&firstVertex);
		reader->ReadObject(&vertexCount);
		reader->ReadObject(&hasNormals);
		reader->ReadObject(&hasTangents);
		reader->Align();
	}
};

struct BlendShapeChannel
{
	std::string name;
	uint32_t nameHash;
	int32_t frameIndex;
	int32_t frameCount;

	void Transfer(BinaryReader* reader)
	{
		reader->ReadObject(&name);
		reader->ReadObject(&nameHash);
		reader->ReadObject(&frameIndex);
		reader->ReadObject(&frameCount);
	}
};

struct BlendShapeData
{
	std::vector<BlendShapeVertex> vertices;
	std::vector<BlendShape> shapes;
	std::vector<BlendShapeChannel> channels;
	std::vector<float> fullWeights;
};
};

#endif // STRUCTS_H
