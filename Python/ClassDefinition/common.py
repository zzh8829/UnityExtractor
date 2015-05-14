version = "common"

classes = {
	"Vector3f": [
		("float", "x"),
		("float", "y"),
		("float", "z"),
	],
	"Matrix4x4f": [
		("float[16]", "m_Data"),
	],
	"AABB": [
		("Vector3f", "m_Center"),
		("Vector3f", "m_Extent"),
	],
	"MinMaxAABB": [
		("Vector3f", "m_Min"),
		("Vector3f", "m_Max"),
	],
	"NamedObject": [
		("string", "m_Name")
	],
}