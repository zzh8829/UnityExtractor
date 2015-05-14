#ifndef SUBMESH_H
#define SUBMESH_H

#include "Common.h"
#include "Enums.h"
#include "AABB.h"
#include "IO/BinaryReader.h"

class SubMesh
{
public:
	uint32_t firstByte;
	uint32_t indexCount;
	GfxPrimitiveType topology;
	uint32_t firstVertex;
	uint32_t vertexCount;
	AABB localAABB;
};

#endif // SUBMESH_H
