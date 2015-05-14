#ifndef UNITYUTIL_H
#define UNITYUTIL_H

#include "Common.h"
#include "Unity/Enums.h"
#include "Unity/Object.h"
#include "Unity/NamedObject.h"
#include "Unity/Mesh.h"

class UnityUtil
{
public:
	UnityUtil();

	template<typename T>
	static Object *CreateObject(T id);

	template<typename Transfer>
	static void TransferObject(Object *object,Transfer *transfer);

};

template<typename T>
Object *UnityUtil::CreateObject(T id)
{
	switch(static_cast<ClassIDType>(id))
	{
	// case CLASS_Undefined:
	// case CLASS_Object:
	// case CLASS_GameObject:
	// case CLASS_Component:
	// case CLASS_LevelGameManager:
	// case CLASS_Transform:
	// case CLASS_TimeManager:
	// case CLASS_GlobalGameManager:
	// case CLASS_Behaviour:
	// case CLASS_GameManager:
	// case CLASS_AudioManager:
	// case CLASS_ParticleAnimator:
	// case CLASS_InputManager:
	// case CLASS_EllipsoidParticleEmitter:
	// case CLASS_Pipeline:
	// case CLASS_EditorExtension:
	// case CLASS_Physics2DSettings:
	// case CLASS_Camera:
	// case CLASS_Material:
	// case CLASS_MeshRenderer:
	// case CLASS_Renderer:
	// case CLASS_ParticleRenderer:
	// case CLASS_Texture:
	// case CLASS_Texture2D:
	// case CLASS_SceneSettings:
	// case CLASS_GraphicsSettings:
	// case CLASS_MeshFilter:
	// case CLASS_OcclusionPortal:
	case CLASS_Mesh:
		return new Mesh;
	// case CLASS_Skybox:
	// case CLASS_QualitySettings:
	// case CLASS_Shader:
	// case CLASS_TextAsset:
	// case CLASS_Rigidbody2D:
	// case CLASS_Physics2DManager:
	// case CLASS_Collider2D:
	// case CLASS_Rigidbody:
	// case CLASS_PhysicsManager:
	// case CLASS_Collider:
	// case CLASS_Joint:
	// case CLASS_CircleCollider2D:
	// case CLASS_HingeJoint:
	// case CLASS_PolygonCollider2D:
	// case CLASS_BoxCollider2D:
	// case CLASS_PhysicsMaterial2D:
	// case CLASS_MeshCollider:
	// case CLASS_BoxCollider:
	// case CLASS_SpriteCollider2D:
	// case CLASS_EdgeCollider2D:
	// case CLASS_PolygonColliderBase2D:
	// case CLASS_ComputeShader:
	// case CLASS_AnimationClip:
	// case CLASS_ConstantForce:
	// case CLASS_WorldParticleCollider:
	// case CLASS_TagManager:
	// case CLASS_AudioListener:
	// case CLASS_AudioSource:
	// case CLASS_AudioClip:
	// case CLASS_RenderTexture:
	// case CLASS_MeshParticleEmitter:
	// case CLASS_ParticleEmitter:
	// case CLASS_Cubemap:
	// case CLASS_Avatar:
	// case CLASS_AnimatorController:
	// case CLASS_GUILayer:
	// case CLASS_RuntimeAnimatorController:
	// case CLASS_ScriptMapper:
	// case CLASS_Animator:
	// case CLASS_TrailRenderer:
	// case CLASS_DelayedCallManager:
	// case CLASS_TextMesh:
	// case CLASS_RenderSettings:
	// case CLASS_Light:
	// case CLASS_CGProgram:
	// case CLASS_BaseAnimationTrack:
	// case CLASS_Animation:
	// case CLASS_MonoBehaviour:
	// case CLASS_MonoScript:
	// case CLASS_MonoManager:
	// case CLASS_Texture3D:
	// case CLASS_NewAnimationTrack:
	// case CLASS_Projector:
	// case CLASS_LineRenderer:
	// case CLASS_Flare:
	// case CLASS_Halo:
	// case CLASS_LensFlare:
	// case CLASS_FlareLayer:
	// case CLASS_HaloLayer:
	// case CLASS_NavMeshLayers:
	// case CLASS_HaloManager:
	// case CLASS_Font:
	// case CLASS_PlayerSettings:
	case CLASS_NamedObject:
		return new NamedObject;
	// case CLASS_GUITexture:
	// case CLASS_GUIText:
	// case CLASS_GUIElement:
	// case CLASS_PhysicMaterial:
	// case CLASS_SphereCollider:
	// case CLASS_CapsuleCollider:
	// case CLASS_SkinnedMeshRenderer:
	// case CLASS_FixedJoint:
	// case CLASS_RaycastCollider:
	// case CLASS_BuildSettings:
	// case CLASS_AssetBundle:
	// case CLASS_CharacterController:
	// case CLASS_CharacterJoint:
	// case CLASS_SpringJoint:
	// case CLASS_WheelCollider:
	// case CLASS_ResourceManager:
	// case CLASS_NetworkView:
	// case CLASS_NetworkManager:
	// case CLASS_PreloadData:
	// case CLASS_MovieTexture:
	// case CLASS_ConfigurableJoint:
	// case CLASS_TerrainCollider:
	// case CLASS_MasterServerInterface:
	// case CLASS_TerrainData:
	// case CLASS_LightmapSettings:
	// case CLASS_WebCamTexture:
	// case CLASS_EditorSettings:
	// case CLASS_InteractiveCloth:
	// case CLASS_ClothRenderer:
	// case CLASS_EditorUserSettings:
	// case CLASS_SkinnedCloth:
	// case CLASS_AudioReverbFilter:
	// case CLASS_AudioHighPassFilter:
	// case CLASS_AudioChorusFilter:
	// case CLASS_AudioReverbZone:
	// case CLASS_AudioEchoFilter:
	// case CLASS_AudioLowPassFilter:
	// case CLASS_AudioDistortionFilter:
	// case CLASS_AudioBehaviour:
	// case CLASS_AudioFilter:
	// case CLASS_WindZone:
	// case CLASS_Cloth:
	// case CLASS_SubstanceArchive:
	// case CLASS_ProceduralMaterial:
	// case CLASS_ProceduralTexture:
	// case CLASS_OffMeshLink:
	// case CLASS_OcclusionArea:
	// case CLASS_Tree:
	// case CLASS_NavMesh:
	// case CLASS_NavMeshAgent:
	// case CLASS_NavMeshSettings:
	// case CLASS_LightProbes:
	// case CLASS_ParticleSystem:
	// case CLASS_ParticleSystemRenderer:
	// case CLASS_LODGroup:
	// case CLASS_BlendTree:
	// case CLASS_Motion:
	// case CLASS_NavMeshObstacle:
	// case CLASS_TerrainInstance:
	// case CLASS_SpriteRenderer:
	// case CLASS_Sprite:
	// case CLASS_CachedSpriteAtlas:
	// case CLASS_LightProbeGroup:
	// case CLASS_AnimatorOverrideController:
	// case CLASS_Joint2D:
	// case CLASS_SpringJoint2D:
	// case CLASS_DistanceJoint2D:
	// case CLASS_HingeJoint2D:
	// case CLASS_SliderJoint2D:
	// case kLargestRuntimeClassID:
	// case CLASS_SmallestEditorClassID:
	// case CLASS_Prefab:
	// case CLASS_EditorExtensionImpl:
	// case CLASS_AssetImporter:
	// case CLASS_AssetDatabase:
	// case CLASS_Mesh3DSImporter:
	// case CLASS_TextureImporter:
	// case CLASS_ShaderImporter:
	// case CLASS_ComputeShaderImporter:
	// case CLASS_AvatarMask:
	// case CLASS_AudioImporter:
	// case CLASS_HierarchyState:
	// case CLASS_GUIDSerializer:
	// case CLASS_AssetMetaData:
	// case CLASS_DefaultAsset:
	// case CLASS_DefaultImporter:
	// case CLASS_TextScriptImporter:
	// case CLASS_SceneAsset:
	// case CLASS_NativeFormatImporter:
	// case CLASS_MonoImporter:
	// case CLASS_AssetServerCache:
	// case CLASS_LibraryAssetImporter:
	// case CLASS_ModelImporter:
	// case CLASS_FBXImporter:
	// case CLASS_TrueTypeFontImporter:
	// case CLASS_MovieImporter:
	// case CLASS_EditorBuildSettings:
	// case CLASS_DDSImporter:
	// case CLASS_InspectorExpandedState:
	// case CLASS_AnnotationManager:
	// case CLASS_MonoAssemblyImporter:
	// case CLASS_EditorUserBuildSettings:
	// case CLASS_PVRImporter:
	// case CLASS_Transition:
	// case CLASS_State:
	// case CLASS_HumanTemplate:
	// case CLASS_StateMachine:
	// case CLASS_PreviewAssetType:
	// case CLASS_SubstanceImporter:
	// case kLargestEditorClassID:
	// //case kClassIdOutOfHierarchy:
	// case CLASS_int:
	// case CLASS_bool:
	// case CLASS_float:
	// case CLASS_MonoObject:
	// case CLASS_Collision:
	// case CLASS_Vector3f:
	// case CLASS_RootMotionData:
	// case CLASS_Collision2D:
	default:
		return nullptr;
	}
}

template<typename Transfer>
void UnityUtil::TransferObject(Object *object,Transfer *transfer)
{
	switch(object->GetClassIDVirtualInternal())
	{
	// case CLASS_Undefined:
	// case CLASS_Object:
	// case CLASS_GameObject:
	// case CLASS_Component:
	// case CLASS_LevelGameManager:
	// case CLASS_Transform:
	// case CLASS_TimeManager:
	// case CLASS_GlobalGameManager:
	// case CLASS_Behaviour:
	// case CLASS_GameManager:
	// case CLASS_AudioManager:
	// case CLASS_ParticleAnimator:
	// case CLASS_InputManager:
	// case CLASS_EllipsoidParticleEmitter:
	// case CLASS_Pipeline:
	// case CLASS_EditorExtension:
	// case CLASS_Physics2DSettings:
	// case CLASS_Camera:
	// case CLASS_Material:
	// case CLASS_MeshRenderer:
	// case CLASS_Renderer:
	// case CLASS_ParticleRenderer:
	// case CLASS_Texture:
	// case CLASS_Texture2D:
	// case CLASS_SceneSettings:
	// case CLASS_GraphicsSettings:
	// case CLASS_MeshFilter:
	// case CLASS_OcclusionPortal:
	case CLASS_Mesh:
		return dynamic_cast<Mesh*>(object)->VirtualRedirectTransfer(transfer);
	// case CLASS_Skybox:
	// case CLASS_QualitySettings:
	// case CLASS_Shader:
	// case CLASS_TextAsset:
	// case CLASS_Rigidbody2D:
	// case CLASS_Physics2DManager:
	// case CLASS_Collider2D:
	// case CLASS_Rigidbody:
	// case CLASS_PhysicsManager:
	// case CLASS_Collider:
	// case CLASS_Joint:
	// case CLASS_CircleCollider2D:
	// case CLASS_HingeJoint:
	// case CLASS_PolygonCollider2D:
	// case CLASS_BoxCollider2D:
	// case CLASS_PhysicsMaterial2D:
	// case CLASS_MeshCollider:
	// case CLASS_BoxCollider:
	// case CLASS_SpriteCollider2D:
	// case CLASS_EdgeCollider2D:
	// case CLASS_PolygonColliderBase2D:
	// case CLASS_ComputeShader:
	// case CLASS_AnimationClip:
	// case CLASS_ConstantForce:
	// case CLASS_WorldParticleCollider:
	// case CLASS_TagManager:
	// case CLASS_AudioListener:
	// case CLASS_AudioSource:
	// case CLASS_AudioClip:
	// case CLASS_RenderTexture:
	// case CLASS_MeshParticleEmitter:
	// case CLASS_ParticleEmitter:
	// case CLASS_Cubemap:
	// case CLASS_Avatar:
	// case CLASS_AnimatorController:
	// case CLASS_GUILayer:
	// case CLASS_RuntimeAnimatorController:
	// case CLASS_ScriptMapper:
	// case CLASS_Animator:
	// case CLASS_TrailRenderer:
	// case CLASS_DelayedCallManager:
	// case CLASS_TextMesh:
	// case CLASS_RenderSettings:
	// case CLASS_Light:
	// case CLASS_CGProgram:
	// case CLASS_BaseAnimationTrack:
	// case CLASS_Animation:
	// case CLASS_MonoBehaviour:
	// case CLASS_MonoScript:
	// case CLASS_MonoManager:
	// case CLASS_Texture3D:
	// case CLASS_NewAnimationTrack:
	// case CLASS_Projector:
	// case CLASS_LineRenderer:
	// case CLASS_Flare:
	// case CLASS_Halo:
	// case CLASS_LensFlare:
	// case CLASS_FlareLayer:
	// case CLASS_HaloLayer:
	// case CLASS_NavMeshLayers:
	// case CLASS_HaloManager:
	// case CLASS_Font:
	// case CLASS_PlayerSettings:
	case CLASS_NamedObject:
		return dynamic_cast<NamedObject*>(object)->VirtualRedirectTransfer(transfer);
	// case CLASS_GUITexture:
	// case CLASS_GUIText:
	// case CLASS_GUIElement:
	// case CLASS_PhysicMaterial:
	// case CLASS_SphereCollider:
	// case CLASS_CapsuleCollider:
	// case CLASS_SkinnedMeshRenderer:
	// case CLASS_FixedJoint:
	// case CLASS_RaycastCollider:
	// case CLASS_BuildSettings:
	// case CLASS_AssetBundle:
	// case CLASS_CharacterController:
	// case CLASS_CharacterJoint:
	// case CLASS_SpringJoint:
	// case CLASS_WheelCollider:
	// case CLASS_ResourceManager:
	// case CLASS_NetworkView:
	// case CLASS_NetworkManager:
	// case CLASS_PreloadData:
	// case CLASS_MovieTexture:
	// case CLASS_ConfigurableJoint:
	// case CLASS_TerrainCollider:
	// case CLASS_MasterServerInterface:
	// case CLASS_TerrainData:
	// case CLASS_LightmapSettings:
	// case CLASS_WebCamTexture:
	// case CLASS_EditorSettings:
	// case CLASS_InteractiveCloth:
	// case CLASS_ClothRenderer:
	// case CLASS_EditorUserSettings:
	// case CLASS_SkinnedCloth:
	// case CLASS_AudioReverbFilter:
	// case CLASS_AudioHighPassFilter:
	// case CLASS_AudioChorusFilter:
	// case CLASS_AudioReverbZone:
	// case CLASS_AudioEchoFilter:
	// case CLASS_AudioLowPassFilter:
	// case CLASS_AudioDistortionFilter:
	// case CLASS_AudioBehaviour:
	// case CLASS_AudioFilter:
	// case CLASS_WindZone:
	// case CLASS_Cloth:
	// case CLASS_SubstanceArchive:
	// case CLASS_ProceduralMaterial:
	// case CLASS_ProceduralTexture:
	// case CLASS_OffMeshLink:
	// case CLASS_OcclusionArea:
	// case CLASS_Tree:
	// case CLASS_NavMesh:
	// case CLASS_NavMeshAgent:
	// case CLASS_NavMeshSettings:
	// case CLASS_LightProbes:
	// case CLASS_ParticleSystem:
	// case CLASS_ParticleSystemRenderer:
	// case CLASS_LODGroup:
	// case CLASS_BlendTree:
	// case CLASS_Motion:
	// case CLASS_NavMeshObstacle:
	// case CLASS_TerrainInstance:
	// case CLASS_SpriteRenderer:
	// case CLASS_Sprite:
	// case CLASS_CachedSpriteAtlas:
	// case CLASS_LightProbeGroup:
	// case CLASS_AnimatorOverrideController:
	// case CLASS_Joint2D:
	// case CLASS_SpringJoint2D:
	// case CLASS_DistanceJoint2D:
	// case CLASS_HingeJoint2D:
	// case CLASS_SliderJoint2D:
	// case kLargestRuntimeClassID:
	// case CLASS_SmallestEditorClassID:
	// case CLASS_Prefab:
	// case CLASS_EditorExtensionImpl:
	// case CLASS_AssetImporter:
	// case CLASS_AssetDatabase:
	// case CLASS_Mesh3DSImporter:
	// case CLASS_TextureImporter:
	// case CLASS_ShaderImporter:
	// case CLASS_ComputeShaderImporter:
	// case CLASS_AvatarMask:
	// case CLASS_AudioImporter:
	// case CLASS_HierarchyState:
	// case CLASS_GUIDSerializer:
	// case CLASS_AssetMetaData:
	// case CLASS_DefaultAsset:
	// case CLASS_DefaultImporter:
	// case CLASS_TextScriptImporter:
	// case CLASS_SceneAsset:
	// case CLASS_NativeFormatImporter:
	// case CLASS_MonoImporter:
	// case CLASS_AssetServerCache:
	// case CLASS_LibraryAssetImporter:
	// case CLASS_ModelImporter:
	// case CLASS_FBXImporter:
	// case CLASS_TrueTypeFontImporter:
	// case CLASS_MovieImporter:
	// case CLASS_EditorBuildSettings:
	// case CLASS_DDSImporter:
	// case CLASS_InspectorExpandedState:
	// case CLASS_AnnotationManager:
	// case CLASS_MonoAssemblyImporter:
	// case CLASS_EditorUserBuildSettings:
	// case CLASS_PVRImporter:
	// case CLASS_Transition:
	// case CLASS_State:
	// case CLASS_HumanTemplate:
	// case CLASS_StateMachine:
	// case CLASS_PreviewAssetType:
	// case CLASS_SubstanceImporter:
	// case kLargestEditorClassID:
	// //case kClassIdOutOfHierarchy:
	// case CLASS_int:
	// case CLASS_bool:
	// case CLASS_float:
	// case CLASS_MonoObject:
	// case CLASS_Collision:
	// case CLASS_Vector3f:
	// case CLASS_RootMotionData:
	// case CLASS_Collision2D:
	default:
		return;
	}
}

#endif // UNITYHELPER_H
