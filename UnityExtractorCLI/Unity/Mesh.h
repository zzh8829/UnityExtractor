#ifndef MESH_H
#define MESH_H

#include "Common.h"
#include "Enums.h"
#include "NamedObject.h"
#include "SubMesh.h"
#include "Structs.h"
#include "AABB.h"

class Mesh : public NamedObject
{
public:
	VertexData m_VertexData;
	int8_t m_MeshCompression;
	int8_t m_StreamCompression;
	int8_t m_IsReadable;
	int8_t m_KeepVertices;
	int8_t m_KeepIndices;
	uint32_t m_InternalMeshID;
	int32_t m_MeshUsageFlags;
	std::vector<uint8_t> m_IndexBuffer;
	std::vector<SubMesh> m_SubMeshes;
	std::vector<Matrix4x4f> m_Bindpose;
	std::vector<MeshBlendShape> m_Shapes;
	std::vector<MeshBlendShapeVertex> m_ShapeVertices;
	std::vector<MinMaxAABB> m_CachedBonesAABB;
	std::vector<BoneInfluence> m_Skin;
	//std::vector<BoneInfluence2> m_CachedSkin2;
	std::vector<int32_t> m_CachedSkin1;
	int32_t m_MaxBoneIndex;
	AABB m_LocalAABB;
	//CollisionMeshData m_CollisionMesh;
	std::list<Object*> m_ObjectUsers; // List<ListNode<Object>>
	//std::list<IntermediateUsers*> m_IntermediateUsers;
	uint32_t m_CurrentCPUFence;
	int8_t m_WaitOnCPUFence;
	//PPtr<Object> m_Owner;
	//VBO *m_VBO;
	uint32_t m_ChannelsInVBO;
	int8_t m_VerticesDirty;
	int8_t m_IndicesDirty;
	int8_t m_IsDynamic;
	int8_t m_HideFromRuntimeStats;
	int8_t m_VertexColorsSwizzled;

	virtual ClassIDType GetClassIDVirtualInternal();

	virtual void VirtualRedirectTransfer(BinaryReader *reader);
	//virtual void VirtualRedirectTransfer(TextWriter *writer);

	void Transfer(BinaryReader* reader);
};

#endif // MESH_H
