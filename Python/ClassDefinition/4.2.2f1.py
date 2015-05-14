version = "4.2.2f1"
classes = {
	"Mesh": [
		("NamedObject", "baseclass"),
		("SubMesh[]", "m_SubMeshes"),
		("MeshBlendShape[]", "m_Shapes"),
		("MeshBlendShapeVertex[]", "m_ShapeVertices"),
	    ("char", "m_MeshCompression"),
		("char", "m_StreamCompression"),
		("bool", "m_IsReadable"),
		("bool", "m_KeepVertices"),
		("bool", "m_KeepIndices"),
		("align",),
		("uint8_t[]", "m_IndexBuffer"),
		("align",),
		("BoneInfluence[]", "m_Skin"),
		("Matrix4x4f[]", "m_Bindpose"),
		("VertexData","m_VertexData"),
		('align',),

	],
    "SubMesh": [
	    ("uint32_t", "firstByte"),
		("uint32_t", "indexCount"),
		("uint32_t", "topology"), #GfxPrimitiveType
		("uint32_t", "firstVertex"),
		("uint32_t", "vertexCount"),
		("AABB", "localAABB"),
    ],
    "MeshBlendShape": [
	    ("string","name"),
		("uint32_t","firstVertex"),
		("uint32_t","vertexCount"),
		("Vector3f","aabbMinDelta"),
		("Vector3f","aabbMaxDelta"),
		("bool","hasNormals"),
		("bool ","hasTangents"),
    ],
    "MeshBlendShapeVertex": [
	    ("Vector3f","vertex"),
		("Vector3f","normal"),
		("Vector3f","tangent"),
		("int32_t","index"),
    ],
    "BoneInfluence": [
		("float[4]","weight"),
		("int32_t[4]","boneIndex"),
    ],
    "VertexData": [
	    ("uint32_t","m_CurrentChannels"),
		("uint32_t","m_VertexCount"),
	    ("ChannelInfo[]","m_Channels"),
		("StreamInfo[]","m_Streams"),
		("char[]","m_Data"),
        #("uint32_t","m_DataSize"),
		#("uint32_t","m_VertexSize"),
		#
		#
    ],
    "ChannelInfo": [
	    ("char","stream"),
		("char","offset"),
		("char","format"),
		("char","dimension"),
    ],
    "StreamInfo": [
	    ("uint32_t","channelMask"),
		("uint32_t","offset"),
		("char","stride"),
		("char","dividerOp"),
		("uint16_t","frequency"),
    ],
}