#ifndef ENUMS_H
#define ENUMS_H

#include "Common.h"

enum LogType
{
	LogType_Error = 0x0,
	LogType_Assert = 0x1,
	LogType_Warning = 0x2,
	LogType_Log = 0x3,
	LogType_Exception = 0x4,
	LogType_Debug = 0x5,
	LogType_NumLevels = 0x6,
};

enum BuildTargetPlatform
{
	kBuildNoTargetPlatform = 0xFFFFFFFE,
	kBuildAnyPlayerData = 0xFFFFFFFF,
	kBuildValidPlayer = 0x1,
	kBuildStandaloneOSXPPC = 0x3,
	kBuildStandaloneOSXIntel = 0x4,
	kBuildStandaloneOSXIntel64 = 0x1B,
	kBuildStandaloneOSXUniversal = 0x2,
	kBuildStandaloneWinPlayer = 0x5,
	kBuildWebPlayerLZMA = 0x6,
	kBuildWebPlayerLZMAStreamed = 0x7,
	kBuildWii = 0x8,
	kBuild_iPhone = 0x9,
	kBuildPS3 = 0xA,
	kBuildXBOX360 = 0xB,
	kBuild_Android = 0xD,
	kBuildWinGLESEmu = 0xE,
	kBuildNaCl = 0x10,
	kBuildStandaloneLinux = 0x11,
	kBuildFlash = 0x12,
	kBuildStandaloneWin64Player = 0x13,
	kBuildWebGL = 0x14,
	kBuildMetroPlayerX86 = 0x15,
	kBuildMetroPlayerX64 = 0x16,
	kBuildMetroPlayerARM = 0x17,
	kBuildStandaloneLinux64 = 0x18,
	kBuildStandaloneLinuxUniversal = 0x19,
	kBuildWP8Player = 0x1A,
	kBuildBB10 = 0x1C,
	kBuildTizen = 0x1D,
	kBuildPlayerTypeCount = 0x1E,
};

enum RuntimePlatform
{
	OSXEditor = 0x0,
	OSXPlayer = 0x1,
	WindowsPlayer = 0x2,
	OSXWebPlayer = 0x3,
	OSXDashboardPlayer = 0x4,
	WindowsWebPlayer = 0x5,
	WiiPlayer = 0x6,
	WindowsEditor = 0x7,
	iPhonePlayer = 0x8,
	PS3Player = 0x9,
	XenonPlayer = 0xA,
	AndroidPlayer = 0xB,
	NaClWebPlayer = 0xC,
	LinuxPlayer = 0xD,
	LinuxWebPlayer = 0xE,
	FlashPlayer = 0xF,
	LinuxEditor = 0x10,
	WebGLPlayer = 0x11,
	MetroPlayerX86 = 0x12,
	MetroPlayerX64 = 0x13,
	MetroPlayerARM = 0x14,
	WP8Player = 0x15,
	BB10Player = 0x16,
	TizenPlayer = 0x17,
	RuntimePlatformCount = 0x18,
};

enum DeviceType
{
	kDeviceTypeUnknown = 0x0,
	kDeviceTypeHandheld = 0x1,
	kDeviceTypeConsole = 0x2,
	kDeviceTypeDesktop = 0x3,
	kDeviceTypeCount = 0x4,
};

enum MemLabelIdentifier
{
	kMemDefaultId = 0x0,
	kMemPermanentId = 0x1,
	kMemNewDeleteId = 0x2,
	kMemMallocFreeId = 0x3,
	kMemThreadId = 0x4,
	kMemPVSId = 0x5,
	kMemManagerId = 0x6,
	kMemDynamicGeometryId = 0x7,
	kMemVertexDataId = 0x8,
	kMemImmediateGeometryId = 0x9,
	kMemGeometryId = 0xA,
	kMemBatchedGeometryId = 0xB,
	kMemParticlesId = 0xC,
	kMemTextureId = 0xD,
	kMemShaderId = 0xE,
	kMemTextureCacheId = 0xF,
	kMemGfxDeviceId = 0x10,
	kMemGfxThreadId = 0x11,
	kMemAnimationId = 0x12,
	kMemAudioId = 0x13,
	kMemAudioDataId = 0x14,
	kMemAudioProcessingId = 0x15,
	kMemFMODId = 0x16,
	kMemFontId = 0x17,
	kMemPhysicsId = 0x18,
	kMemSerializationId = 0x19,
	kMemIOId = 0x1A,
	kMemIO2Id = 0x1B,
	kMemThreadStackId = 0x1C,
	kMemTextAssetId = 0x1D,
	kMemGarbageCollectorId = 0x1E,
	kMemGLibId = 0x1F,
	kMemGLibImageId = 0x20,
	kMemMonoId = 0x21,
	kMemMonoCodeId = 0x22,
	kMemBaseObjectId = 0x23,
	kMemResourceId = 0x24,
	kMemRendererId = 0x25,
	kMemTransformId = 0x26,
	kMemFileId = 0x27,
	kMemTempOverflowId = 0x28,
	kMemNetworkId = 0x29,
	kMemWebCamId = 0x2A,
	kMemProfilerId = 0x2B,
	kMemMemoryProfilerId = 0x2C,
	kMemMemoryProfilerStringId = 0x2D,
	kMemCullingId = 0x2E,
	kMemSkinningId = 0x2F,
	kMemTerrainId = 0x30,
	kMemShadowId = 0x31,
	kMemSTLId = 0x32,
	kMemStringId = 0x33,
	kMemStaticStringId = 0x34,
	kMemDynamicArrayId = 0x35,
	kMemUTF16StringId = 0x36,
	kMemUtilityId = 0x37,
	kMemCurlId = 0x38,
	kMemPoolAllocId = 0x39,
	kMemNavigationId = 0x3A,
	kMemAssetServerCacheId = 0x3B,
	kMemTypeTreeId = 0x3C,
	kMemScriptManagerId = 0x3D,
	kMemSubstanceId = 0x3E,
	kMemSpritesId = 0x3F,
	kMemClusterRendererId = 0x40,
	kMemEditorGuiId = 0x41,
	kMemEditorUtilityId = 0x42,
	kMemVersionControlId = 0x43,
	kMemUndoBufferId = 0x44,
	kMemUndoId = 0x45,
	kMemAssetDatabaseId = 0x46,
	kMemPreviewImageId = 0x47,
	kMemAssetImporterId = 0x48,
	kMemFBXImporterId = 0x49,
	kMemTempAllocId = 0x4A,
	kMemWiiDefault1Id = 0x4B,
	kMemWiiDefault2Id = 0x4C,
	kMemWiiRVLAux1Id = 0x4D,
	kMemWiiRVLAux2Id = 0x4E,
	kMemWiiRenderTextureId = 0x4F,
	kMemWiiStrapReminderId = 0x50,
	kMemWiiHBMId = 0x51,
	kMemWiiMovieId = 0x52,
	kMemWiiInputId = 0x53,
	kMemWiiNandId = 0x54,
	kMemWiiVIId = 0x55,
	kMemWiiSkinningId = 0x56,
	kMemWiiPThreadsId = 0x57,
	kMemPS3VideoMemoryId = 0x58,
	kMemPS3RingBuffersId = 0x59,
	kMemPS3RSXBuffersId = 0x5A,
	kMemPS3DelayedReleaseId = 0x5B,
	kMemWinRTTLSId = 0x5C,
	kMemLabelCount = 0x5D,
};

enum TransferMetaFlags
{
	kNoTransferFlags = 0x0,
	kHideInEditorMask = 0x1,
	kNotEditableMask = 0x10,
	kStrongPPtrMask = 0x40,
	kEditorDisplaysCheckBoxMask = 0x100,
	kSimpleEditorMask = 0x800,
	kDebugPropertyMask = 0x1000,
	kAlignBytesFlag = 0x4000,
	kAnyChildUsesAlignBytesFlag = 0x8000,
	kIgnoreWithInspectorUndoMask = 0x10000,
	kIgnoreInMetaFiles = 0x80000,
	kTransferAsArrayEntryNameInMetaFiles = 0x100000,
	kTransferUsingFlowMappingStyle = 0x200000,
	kGenerateBitwiseDifferences = 0x400000,
	kDontAnimate = 0x800000,
};

enum TextureDimension
{
	kTexDimUnknown = 0xFFFFFFFF,
	kTexDimNone = 0x0,
	kTexDimDeprecated1D = 0x1,
	kTexDim2D = 0x2,
	kTexDim3D = 0x3,
	kTexDimCUBE = 0x4,
	kTexDimAny = 0x5,
	kTexDimCount = 0x6,
	kTexDimForce32Bit = 0x7FFFFFFF,
};

enum TextureFormat
{
	kTexFormatAlpha8 = 0x1,
	kTexFormatARGB4444 = 0x2,
	kTexFormatRGB24 = 0x3,
	kTexFormatRGBA32 = 0x4,
	kTexFormatARGB32 = 0x5,
	kTexFormatARGBFloat = 0x6,
	kTexFormatRGB565 = 0x7,
	kTexFormatBGR24 = 0x8,
	kTexFormatAlphaLum16 = 0x9,
	kTexFormatDXT1 = 0xA,
	kTexFormatDXT3 = 0xB,
	kTexFormatDXT5 = 0xC,
	kTexFormatRGBA4444 = 0xD,
	kTexFormatPCCount = 0xE,
	kTexReserved1 = 0xE,
	kTexReserved2 = 0xF,
	kTexReserved3 = 0x10,
	kTexReserved4 = 0x11,
	kTexReserved5 = 0x12,
	kTexReserved6 = 0x13,
	kTexReserved11 = 0x1C,
	kTexReserved12 = 0x1D,
	kTexFormatPVRTC_RGB2 = 0x1E,
	kTexFormatPVRTC_RGBA2 = 0x1F,
	kTexFormatPVRTC_RGB4 = 0x20,
	kTexFormatPVRTC_RGBA4 = 0x21,
	kTexFormatETC_RGB4 = 0x22,
	kTexFormatATC_RGB4 = 0x23,
	kTexFormatATC_RGBA8 = 0x24,
	kTexFormatBGRA32 = 0x25,
	kTexFormatFlashATF_RGB_DXT1 = 0x26,
	kTexFormatFlashATF_RGBA_JPG = 0x27,
	kTexFormatFlashATF_RGB_JPG = 0x28,
	kTexFormatEAC_R = 0x29,
	kTexFormatEAC_R_SIGNED = 0x2A,
	kTexFormatEAC_RG = 0x2B,
	kTexFormatEAC_RG_SIGNED = 0x2C,
	kTexFormatETC2_RGB = 0x2D,
	kTexFormatETC2_RGBA1 = 0x2E,
	kTexFormatETC2_RGBA8 = 0x2F,
	kTexFormatASTC_RGB_4x4 = 0x30,
	kTexFormatASTC_RGB_5x5 = 0x31,
	kTexFormatASTC_RGB_6x6 = 0x32,
	kTexFormatASTC_RGB_8x8 = 0x33,
	kTexFormatASTC_RGB_10x10 = 0x34,
	kTexFormatASTC_RGB_12x12 = 0x35,
	kTexFormatASTC_RGBA_4x4 = 0x36,
	kTexFormatASTC_RGBA_5x5 = 0x37,
	kTexFormatASTC_RGBA_6x6 = 0x38,
	kTexFormatASTC_RGBA_8x8 = 0x39,
	kTexFormatASTC_RGBA_10x10 = 0x3A,
	kTexFormatASTC_RGBA_12x12 = 0x3B,
	kTexFormatTotalCount = 0x3C,
};

enum RenderTextureFormat
{
	kRTFormatARGB32 = 0x0,
	kRTFormatDepth = 0x1,
	kRTFormatARGBHalf = 0x2,
	kRTFormatShadowMap = 0x3,
	kRTFormatRGB565 = 0x4,
	kRTFormatARGB4444 = 0x5,
	kRTFormatARGB1555 = 0x6,
	kRTFormatDefault = 0x7,
	kRTFormatA2R10G10B10 = 0x8,
	kRTFormatDefaultHDR = 0x9,
	kRTFormatARGB64 = 0xA,
	kRTFormatARGBFloat = 0xB,
	kRTFormatRGFloat = 0xC,
	kRTFormatRGHalf = 0xD,
	kRTFormatRFloat = 0xE,
	kRTFormatRHalf = 0xF,
	kRTFormatR8 = 0x10,
	kRTFormatARGBInt = 0x11,
	kRTFormatRGInt = 0x12,
	kRTFormatRInt = 0x13,
	kRTFormatBGRA32 = 0x14,
	kRTFormatCount = 0x15,
};

enum DepthBufferFormat
{
	kDepthFormatNone = 0x0,
	kDepthFormat16 = 0x1,
	kDepthFormat24 = 0x2,
	kDepthFormatCount = 0x3,
};

enum ShaderType
{
	kShaderNone = 0x0,
	kShaderVertex = 0x1,
	kShaderFragment = 0x2,
	kShaderGeometry = 0x3,
	kShaderHull = 0x4,
	kShaderDomain = 0x5,
	kShaderTypeCount = 0x6,
};

enum ClassIDType
{
	CLASS_Undefined = 0xFFFFFFFF,
	CLASS_Object = 0x0,
	CLASS_GameObject = 0x1,
	CLASS_Component = 0x2,
	CLASS_LevelGameManager = 0x3,
	CLASS_Transform = 0x4,
	CLASS_TimeManager = 0x5,
	CLASS_GlobalGameManager = 0x6,
	CLASS_Behaviour = 0x8,
	CLASS_GameManager = 0x9,
	CLASS_AudioManager = 0xB,
	CLASS_ParticleAnimator = 0xC,
	CLASS_InputManager = 0xD,
	CLASS_EllipsoidParticleEmitter = 0xF,
	CLASS_Pipeline = 0x11,
	CLASS_EditorExtension = 0x12,
	CLASS_Physics2DSettings = 0x13,
	CLASS_Camera = 0x14,
	CLASS_Material = 0x15,
	CLASS_MeshRenderer = 0x17,
	CLASS_Renderer = 0x19,
	CLASS_ParticleRenderer = 0x1A,
	CLASS_Texture = 0x1B,
	CLASS_Texture2D = 0x1C,
	CLASS_SceneSettings = 0x1D,
	CLASS_GraphicsSettings = 0x1E,
	CLASS_MeshFilter = 0x21,
	CLASS_OcclusionPortal = 0x29,
	CLASS_Mesh = 0x2B,
	CLASS_Skybox = 0x2D,
	CLASS_QualitySettings = 0x2F,
	CLASS_Shader = 0x30,
	CLASS_TextAsset = 0x31,
	CLASS_Rigidbody2D = 0x32,
	CLASS_Physics2DManager = 0x33,
	CLASS_Collider2D = 0x35,
	CLASS_Rigidbody = 0x36,
	CLASS_PhysicsManager = 0x37,
	CLASS_Collider = 0x38,
	CLASS_Joint = 0x39,
	CLASS_CircleCollider2D = 0x3A,
	CLASS_HingeJoint = 0x3B,
	CLASS_PolygonCollider2D = 0x3C,
	CLASS_BoxCollider2D = 0x3D,
	CLASS_PhysicsMaterial2D = 0x3E,
	CLASS_MeshCollider = 0x40,
	CLASS_BoxCollider = 0x41,
	CLASS_SpriteCollider2D = 0x42,
	CLASS_EdgeCollider2D = 0x44,
	CLASS_PolygonColliderBase2D = 0x45,
	CLASS_ComputeShader = 0x48,
	CLASS_AnimationClip = 0x4A,
	CLASS_ConstantForce = 0x4B,
	CLASS_WorldParticleCollider = 0x4C,
	CLASS_TagManager = 0x4E,
	CLASS_AudioListener = 0x51,
	CLASS_AudioSource = 0x52,
	CLASS_AudioClip = 0x53,
	CLASS_RenderTexture = 0x54,
	CLASS_MeshParticleEmitter = 0x57,
	CLASS_ParticleEmitter = 0x58,
	CLASS_Cubemap = 0x59,
	CLASS_Avatar = 0x5A,
	CLASS_AnimatorController = 0x5B,
	CLASS_GUILayer = 0x5C,
	CLASS_RuntimeAnimatorController = 0x5D,
	CLASS_ScriptMapper = 0x5E,
	CLASS_Animator = 0x5F,
	CLASS_TrailRenderer = 0x60,
	CLASS_DelayedCallManager = 0x62,
	CLASS_TextMesh = 0x66,
	CLASS_RenderSettings = 0x68,
	CLASS_Light = 0x6C,
	CLASS_CGProgram = 0x6D,
	CLASS_BaseAnimationTrack = 0x6E,
	CLASS_Animation = 0x6F,
	CLASS_MonoBehaviour = 0x72,
	CLASS_MonoScript = 0x73,
	CLASS_MonoManager = 0x74,
	CLASS_Texture3D = 0x75,
	CLASS_NewAnimationTrack = 0x76,
	CLASS_Projector = 0x77,
	CLASS_LineRenderer = 0x78,
	CLASS_Flare = 0x79,
	CLASS_Halo = 0x7A,
	CLASS_LensFlare = 0x7B,
	CLASS_FlareLayer = 0x7C,
	CLASS_HaloLayer = 0x7D,
	CLASS_NavMeshLayers = 0x7E,
	CLASS_HaloManager = 0x7F,
	CLASS_Font = 0x80,
	CLASS_PlayerSettings = 0x81,
	CLASS_NamedObject = 0x82,
	CLASS_GUITexture = 0x83,
	CLASS_GUIText = 0x84,
	CLASS_GUIElement = 0x85,
	CLASS_PhysicMaterial = 0x86,
	CLASS_SphereCollider = 0x87,
	CLASS_CapsuleCollider = 0x88,
	CLASS_SkinnedMeshRenderer = 0x89,
	CLASS_FixedJoint = 0x8A,
	CLASS_RaycastCollider = 0x8C,
	CLASS_BuildSettings = 0x8D,
	CLASS_AssetBundle = 0x8E,
	CLASS_CharacterController = 0x8F,
	CLASS_CharacterJoint = 0x90,
	CLASS_SpringJoint = 0x91,
	CLASS_WheelCollider = 0x92,
	CLASS_ResourceManager = 0x93,
	CLASS_NetworkView = 0x94,
	CLASS_NetworkManager = 0x95,
	CLASS_PreloadData = 0x96,
	CLASS_MovieTexture = 0x98,
	CLASS_ConfigurableJoint = 0x99,
	CLASS_TerrainCollider = 0x9A,
	CLASS_MasterServerInterface = 0x9B,
	CLASS_TerrainData = 0x9C,
	CLASS_LightmapSettings = 0x9D,
	CLASS_WebCamTexture = 0x9E,
	CLASS_EditorSettings = 0x9F,
	CLASS_InteractiveCloth = 0xA0,
	CLASS_ClothRenderer = 0xA1,
	CLASS_EditorUserSettings = 0xA2,
	CLASS_SkinnedCloth = 0xA3,
	CLASS_AudioReverbFilter = 0xA4,
	CLASS_AudioHighPassFilter = 0xA5,
	CLASS_AudioChorusFilter = 0xA6,
	CLASS_AudioReverbZone = 0xA7,
	CLASS_AudioEchoFilter = 0xA8,
	CLASS_AudioLowPassFilter = 0xA9,
	CLASS_AudioDistortionFilter = 0xAA,
	CLASS_AudioBehaviour = 0xB4,
	CLASS_AudioFilter = 0xB5,
	CLASS_WindZone = 0xB6,
	CLASS_Cloth = 0xB7,
	CLASS_SubstanceArchive = 0xB8,
	CLASS_ProceduralMaterial = 0xB9,
	CLASS_ProceduralTexture = 0xBA,
	CLASS_OffMeshLink = 0xBF,
	CLASS_OcclusionArea = 0xC0,
	CLASS_Tree = 0xC1,
	CLASS_NavMesh = 0xC2,
	CLASS_NavMeshAgent = 0xC3,
	CLASS_NavMeshSettings = 0xC4,
	CLASS_LightProbes = 0xC5,
	CLASS_ParticleSystem = 0xC6,
	CLASS_ParticleSystemRenderer = 0xC7,
	CLASS_LODGroup = 0xCD,
	CLASS_BlendTree = 0xCE,
	CLASS_Motion = 0xCF,
	CLASS_NavMeshObstacle = 0xD0,
	CLASS_TerrainInstance = 0xD2,
	CLASS_SpriteRenderer = 0xD4,
	CLASS_Sprite = 0xD5,
	CLASS_CachedSpriteAtlas = 0xD6,
	CLASS_LightProbeGroup = 0xDC,
	CLASS_AnimatorOverrideController = 0xDD,
	CLASS_Joint2D = 0xE6,
	CLASS_SpringJoint2D = 0xE7,
	CLASS_DistanceJoint2D = 0xE8,
	CLASS_HingeJoint2D = 0xE9,
	CLASS_SliderJoint2D = 0xEA,
	kLargestRuntimeClassID = 0xEB,
	CLASS_SmallestEditorClassID = 0x3E8,
	CLASS_Prefab = 0x3E9,
	CLASS_EditorExtensionImpl = 0x3EA,
	CLASS_AssetImporter = 0x3EB,
	CLASS_AssetDatabase = 0x3EC,
	CLASS_Mesh3DSImporter = 0x3ED,
	CLASS_TextureImporter = 0x3EE,
	CLASS_ShaderImporter = 0x3EF,
	CLASS_ComputeShaderImporter = 0x3F0,
	CLASS_AvatarMask = 0x3F3,
	CLASS_AudioImporter = 0x3FC,
	CLASS_HierarchyState = 0x402,
	CLASS_GUIDSerializer = 0x403,
	CLASS_AssetMetaData = 0x404,
	CLASS_DefaultAsset = 0x405,
	CLASS_DefaultImporter = 0x406,
	CLASS_TextScriptImporter = 0x407,
	CLASS_SceneAsset = 0x408,
	CLASS_NativeFormatImporter = 0x40A,
	CLASS_MonoImporter = 0x40B,
	CLASS_AssetServerCache = 0x40D,
	CLASS_LibraryAssetImporter = 0x40E,
	CLASS_ModelImporter = 0x410,
	CLASS_FBXImporter = 0x411,
	CLASS_TrueTypeFontImporter = 0x412,
	CLASS_MovieImporter = 0x414,
	CLASS_EditorBuildSettings = 0x415,
	CLASS_DDSImporter = 0x416,
	CLASS_InspectorExpandedState = 0x418,
	CLASS_AnnotationManager = 0x419,
	CLASS_MonoAssemblyImporter = 0x41A,
	CLASS_EditorUserBuildSettings = 0x41B,
	CLASS_PVRImporter = 0x41C,
	CLASS_Transition = 0x44D,
	CLASS_State = 0x44E,
	CLASS_HumanTemplate = 0x451,
	CLASS_StateMachine = 0x453,
	CLASS_PreviewAssetType = 0x454,
	CLASS_SubstanceImporter = 0x458,
	kLargestEditorClassID = 0x459,
	kClassIdOutOfHierarchy = 0x186A0,
	CLASS_int = 0x186A0,
	CLASS_bool = 0x186A1,
	CLASS_float = 0x186A2,
	CLASS_MonoObject = 0x186A3,
	CLASS_Collision = 0x186A4,
	CLASS_Vector3f = 0x186A5,
	CLASS_RootMotionData = 0x186A6,
	CLASS_Collision2D = 0x186A7,
};

enum MonoTypeEnum
{
	MONO_TYPE_END = 0x0,
	MONO_TYPE_VOID = 0x1,
	MONO_TYPE_BOOLEAN = 0x2,
	MONO_TYPE_CHAR = 0x3,
	MONO_TYPE_I1 = 0x4,
	MONO_TYPE_U1 = 0x5,
	MONO_TYPE_I2 = 0x6,
	MONO_TYPE_U2 = 0x7,
	MONO_TYPE_I4 = 0x8,
	MONO_TYPE_U4 = 0x9,
	MONO_TYPE_I8 = 0xA,
	MONO_TYPE_U8 = 0xB,
	MONO_TYPE_R4 = 0xC,
	MONO_TYPE_R8 = 0xD,
	MONO_TYPE_STRING = 0xE,
	MONO_TYPE_PTR = 0xF,
	MONO_TYPE_BYREF = 0x10,
	MONO_TYPE_VALUETYPE = 0x11,
	MONO_TYPE_CLASS = 0x12,
	MONO_TYPE_VAR = 0x13,
	MONO_TYPE_ARRAY = 0x14,
	MONO_TYPE_GENERICINST = 0x15,
	MONO_TYPE_TYPEDBYREF = 0x16,
	MONO_TYPE_I = 0x18,
	MONO_TYPE_U = 0x19,
	MONO_TYPE_FNPTR = 0x1B,
	MONO_TYPE_OBJECT = 0x1C,
	MONO_TYPE_SZARRAY = 0x1D,
	MONO_TYPE_MVAR = 0x1E,
	MONO_TYPE_CMOD_REQD = 0x1F,
	MONO_TYPE_CMOD_OPT = 0x20,
	MONO_TYPE_INTERNAL = 0x21,
	MONO_TYPE_MODIFIER = 0x40,
	MONO_TYPE_SENTINEL = 0x41,
	MONO_TYPE_PINNED = 0x45,
};

enum RendererType
{
	kRendererUnknown = 0x0,
	kRendererMesh = 0x1,
	kRendererSkinnedMesh = 0x2,
	kRendererCloth = 0x3,
	kRendererSprite = 0x4,
	kRendererParticle = 0x5,
	kRendererTrail = 0x6,
	kRendererLine = 0x7,
	kRendererParticleSystem = 0x8,
	kRendererIntermediate = 0x9,
	kRendererTypeCount = 0xA,
};

enum GfxPrimitiveType
{
	kPrimitiveTriangles = 0x0,
	kPrimitiveTriangleStripDeprecated = 0x1,
	kPrimitiveQuads = 0x2,
	kPrimitiveLines = 0x3,
	kPrimitiveLineStrip = 0x4,
	kPrimitivePoints = 0x5,
	kPrimitiveTypeCount = 0x6,
	kPrimitiveForce32Bitint32_t = 0x7FFFFFFF,
};

template<typename Enum>
struct EnumToStringImpl
{
	static std::string ToString(Enum e)
	{
		return "Not Implemented";
	}
};

template<>
struct EnumToStringImpl<ClassIDType>
{
   static std::string ToString(ClassIDType e)
   {
	   switch(e)
	   {
		   case CLASS_Undefined: return "CLASS_Undefined";
		   case CLASS_Object: return "CLASS_Object";
		   case CLASS_GameObject: return "CLASS_GameObject";
		   case CLASS_Component: return "CLASS_Component";
		   case CLASS_LevelGameManager: return "CLASS_LevelGameManager";
		   case CLASS_Transform: return "CLASS_Transform";
		   case CLASS_TimeManager: return "CLASS_TimeManager";
		   case CLASS_GlobalGameManager: return "CLASS_GlobalGameManager";
		   case CLASS_Behaviour: return "CLASS_Behaviour";
		   case CLASS_GameManager: return "CLASS_GameManager";
		   case CLASS_AudioManager: return "CLASS_AudioManager";
		   case CLASS_ParticleAnimator: return "CLASS_ParticleAnimator";
		   case CLASS_InputManager: return "CLASS_InputManager";
		   case CLASS_EllipsoidParticleEmitter: return "CLASS_EllipsoidParticleEmitter";
		   case CLASS_Pipeline: return "CLASS_Pipeline";
		   case CLASS_EditorExtension: return "CLASS_EditorExtension";
		   case CLASS_Physics2DSettings: return "CLASS_Physics2DSettings";
		   case CLASS_Camera: return "CLASS_Camera";
		   case CLASS_Material: return "CLASS_Material";
		   case CLASS_MeshRenderer: return "CLASS_MeshRenderer";
		   case CLASS_Renderer: return "CLASS_Renderer";
		   case CLASS_ParticleRenderer: return "CLASS_ParticleRenderer";
		   case CLASS_Texture: return "CLASS_Texture";
		   case CLASS_Texture2D: return "CLASS_Texture2D";
		   case CLASS_SceneSettings: return "CLASS_SceneSettings";
		   case CLASS_GraphicsSettings: return "CLASS_GraphicsSettings";
		   case CLASS_MeshFilter: return "CLASS_MeshFilter";
		   case CLASS_OcclusionPortal: return "CLASS_OcclusionPortal";
		   case CLASS_Mesh: return "CLASS_Mesh";
		   case CLASS_Skybox: return "CLASS_Skybox";
		   case CLASS_QualitySettings: return "CLASS_QualitySettings";
		   case CLASS_Shader: return "CLASS_Shader";
		   case CLASS_TextAsset: return "CLASS_TextAsset";
		   case CLASS_Rigidbody2D: return "CLASS_Rigidbody2D";
		   case CLASS_Physics2DManager: return "CLASS_Physics2DManager";
		   case CLASS_Collider2D: return "CLASS_Collider2D";
		   case CLASS_Rigidbody: return "CLASS_Rigidbody";
		   case CLASS_PhysicsManager: return "CLASS_PhysicsManager";
		   case CLASS_Collider: return "CLASS_Collider";
		   case CLASS_Joint: return "CLASS_Joint";
		   case CLASS_CircleCollider2D: return "CLASS_CircleCollider2D";
		   case CLASS_HingeJoint: return "CLASS_HingeJoint";
		   case CLASS_PolygonCollider2D: return "CLASS_PolygonCollider2D";
		   case CLASS_BoxCollider2D: return "CLASS_BoxCollider2D";
		   case CLASS_PhysicsMaterial2D: return "CLASS_PhysicsMaterial2D";
		   case CLASS_MeshCollider: return "CLASS_MeshCollider";
		   case CLASS_BoxCollider: return "CLASS_BoxCollider";
		   case CLASS_SpriteCollider2D: return "CLASS_SpriteCollider2D";
		   case CLASS_EdgeCollider2D: return "CLASS_EdgeCollider2D";
		   case CLASS_PolygonColliderBase2D: return "CLASS_PolygonColliderBase2D";
		   case CLASS_ComputeShader: return "CLASS_ComputeShader";
		   case CLASS_AnimationClip: return "CLASS_AnimationClip";
		   case CLASS_ConstantForce: return "CLASS_ConstantForce";
		   case CLASS_WorldParticleCollider: return "CLASS_WorldParticleCollider";
		   case CLASS_TagManager: return "CLASS_TagManager";
		   case CLASS_AudioListener: return "CLASS_AudioListener";
		   case CLASS_AudioSource: return "CLASS_AudioSource";
		   case CLASS_AudioClip: return "CLASS_AudioClip";
		   case CLASS_RenderTexture: return "CLASS_RenderTexture";
		   case CLASS_MeshParticleEmitter: return "CLASS_MeshParticleEmitter";
		   case CLASS_ParticleEmitter: return "CLASS_ParticleEmitter";
		   case CLASS_Cubemap: return "CLASS_Cubemap";
		   case CLASS_Avatar: return "CLASS_Avatar";
		   case CLASS_AnimatorController: return "CLASS_AnimatorController";
		   case CLASS_GUILayer: return "CLASS_GUILayer";
		   case CLASS_RuntimeAnimatorController: return "CLASS_RuntimeAnimatorController";
		   case CLASS_ScriptMapper: return "CLASS_ScriptMapper";
		   case CLASS_Animator: return "CLASS_Animator";
		   case CLASS_TrailRenderer: return "CLASS_TrailRenderer";
		   case CLASS_DelayedCallManager: return "CLASS_DelayedCallManager";
		   case CLASS_TextMesh: return "CLASS_TextMesh";
		   case CLASS_RenderSettings: return "CLASS_RenderSettings";
		   case CLASS_Light: return "CLASS_Light";
		   case CLASS_CGProgram: return "CLASS_CGProgram";
		   case CLASS_BaseAnimationTrack: return "CLASS_BaseAnimationTrack";
		   case CLASS_Animation: return "CLASS_Animation";
		   case CLASS_MonoBehaviour: return "CLASS_MonoBehaviour";
		   case CLASS_MonoScript: return "CLASS_MonoScript";
		   case CLASS_MonoManager: return "CLASS_MonoManager";
		   case CLASS_Texture3D: return "CLASS_Texture3D";
		   case CLASS_NewAnimationTrack: return "CLASS_NewAnimationTrack";
		   case CLASS_Projector: return "CLASS_Projector";
		   case CLASS_LineRenderer: return "CLASS_LineRenderer";
		   case CLASS_Flare: return "CLASS_Flare";
		   case CLASS_Halo: return "CLASS_Halo";
		   case CLASS_LensFlare: return "CLASS_LensFlare";
		   case CLASS_FlareLayer: return "CLASS_FlareLayer";
		   case CLASS_HaloLayer: return "CLASS_HaloLayer";
		   case CLASS_NavMeshLayers: return "CLASS_NavMeshLayers";
		   case CLASS_HaloManager: return "CLASS_HaloManager";
		   case CLASS_Font: return "CLASS_Font";
		   case CLASS_PlayerSettings: return "CLASS_PlayerSettings";
		   case CLASS_NamedObject: return "CLASS_NamedObject";
		   case CLASS_GUITexture: return "CLASS_GUITexture";
		   case CLASS_GUIText: return "CLASS_GUIText";
		   case CLASS_GUIElement: return "CLASS_GUIElement";
		   case CLASS_PhysicMaterial: return "CLASS_PhysicMaterial";
		   case CLASS_SphereCollider: return "CLASS_SphereCollider";
		   case CLASS_CapsuleCollider: return "CLASS_CapsuleCollider";
		   case CLASS_SkinnedMeshRenderer: return "CLASS_SkinnedMeshRenderer";
		   case CLASS_FixedJoint: return "CLASS_FixedJoint";
		   case CLASS_RaycastCollider: return "CLASS_RaycastCollider";
		   case CLASS_BuildSettings: return "CLASS_BuildSettings";
		   case CLASS_AssetBundle: return "CLASS_AssetBundle";
		   case CLASS_CharacterController: return "CLASS_CharacterController";
		   case CLASS_CharacterJoint: return "CLASS_CharacterJoint";
		   case CLASS_SpringJoint: return "CLASS_SpringJoint";
		   case CLASS_WheelCollider: return "CLASS_WheelCollider";
		   case CLASS_ResourceManager: return "CLASS_ResourceManager";
		   case CLASS_NetworkView: return "CLASS_NetworkView";
		   case CLASS_NetworkManager: return "CLASS_NetworkManager";
		   case CLASS_PreloadData: return "CLASS_PreloadData";
		   case CLASS_MovieTexture: return "CLASS_MovieTexture";
		   case CLASS_ConfigurableJoint: return "CLASS_ConfigurableJoint";
		   case CLASS_TerrainCollider: return "CLASS_TerrainCollider";
		   case CLASS_MasterServerInterface: return "CLASS_MasterServerInterface";
		   case CLASS_TerrainData: return "CLASS_TerrainData";
		   case CLASS_LightmapSettings: return "CLASS_LightmapSettings";
		   case CLASS_WebCamTexture: return "CLASS_WebCamTexture";
		   case CLASS_EditorSettings: return "CLASS_EditorSettings";
		   case CLASS_InteractiveCloth: return "CLASS_InteractiveCloth";
		   case CLASS_ClothRenderer: return "CLASS_ClothRenderer";
		   case CLASS_EditorUserSettings: return "CLASS_EditorUserSettings";
		   case CLASS_SkinnedCloth: return "CLASS_SkinnedCloth";
		   case CLASS_AudioReverbFilter: return "CLASS_AudioReverbFilter";
		   case CLASS_AudioHighPassFilter: return "CLASS_AudioHighPassFilter";
		   case CLASS_AudioChorusFilter: return "CLASS_AudioChorusFilter";
		   case CLASS_AudioReverbZone: return "CLASS_AudioReverbZone";
		   case CLASS_AudioEchoFilter: return "CLASS_AudioEchoFilter";
		   case CLASS_AudioLowPassFilter: return "CLASS_AudioLowPassFilter";
		   case CLASS_AudioDistortionFilter: return "CLASS_AudioDistortionFilter";
		   case CLASS_AudioBehaviour: return "CLASS_AudioBehaviour";
		   case CLASS_AudioFilter: return "CLASS_AudioFilter";
		   case CLASS_WindZone: return "CLASS_WindZone";
		   case CLASS_Cloth: return "CLASS_Cloth";
		   case CLASS_SubstanceArchive: return "CLASS_SubstanceArchive";
		   case CLASS_ProceduralMaterial: return "CLASS_ProceduralMaterial";
		   case CLASS_ProceduralTexture: return "CLASS_ProceduralTexture";
		   case CLASS_OffMeshLink: return "CLASS_OffMeshLink";
		   case CLASS_OcclusionArea: return "CLASS_OcclusionArea";
		   case CLASS_Tree: return "CLASS_Tree";
		   case CLASS_NavMesh: return "CLASS_NavMesh";
		   case CLASS_NavMeshAgent: return "CLASS_NavMeshAgent";
		   case CLASS_NavMeshSettings: return "CLASS_NavMeshSettings";
		   case CLASS_LightProbes: return "CLASS_LightProbes";
		   case CLASS_ParticleSystem: return "CLASS_ParticleSystem";
		   case CLASS_ParticleSystemRenderer: return "CLASS_ParticleSystemRenderer";
		   case CLASS_LODGroup: return "CLASS_LODGroup";
		   case CLASS_BlendTree: return "CLASS_BlendTree";
		   case CLASS_Motion: return "CLASS_Motion";
		   case CLASS_NavMeshObstacle: return "CLASS_NavMeshObstacle";
		   case CLASS_TerrainInstance: return "CLASS_TerrainInstance";
		   case CLASS_SpriteRenderer: return "CLASS_SpriteRenderer";
		   case CLASS_Sprite: return "CLASS_Sprite";
		   case CLASS_CachedSpriteAtlas: return "CLASS_CachedSpriteAtlas";
		   case CLASS_LightProbeGroup: return "CLASS_LightProbeGroup";
		   case CLASS_AnimatorOverrideController: return "CLASS_AnimatorOverrideController";
		   case CLASS_Joint2D: return "CLASS_Joint2D";
		   case CLASS_SpringJoint2D: return "CLASS_SpringJoint2D";
		   case CLASS_DistanceJoint2D: return "CLASS_DistanceJoint2D";
		   case CLASS_HingeJoint2D: return "CLASS_HingeJoint2D";
		   case CLASS_SliderJoint2D: return "CLASS_SliderJoint2D";
		   case kLargestRuntimeClassID: return "kLargestRuntimeClassID";
		   case CLASS_SmallestEditorClassID: return "CLASS_SmallestEditorClassID";
		   case CLASS_Prefab: return "CLASS_Prefab";
		   case CLASS_EditorExtensionImpl: return "CLASS_EditorExtensionImpl";
		   case CLASS_AssetImporter: return "CLASS_AssetImporter";
		   case CLASS_AssetDatabase: return "CLASS_AssetDatabase";
		   case CLASS_Mesh3DSImporter: return "CLASS_Mesh3DSImporter";
		   case CLASS_TextureImporter: return "CLASS_TextureImporter";
		   case CLASS_ShaderImporter: return "CLASS_ShaderImporter";
		   case CLASS_ComputeShaderImporter: return "CLASS_ComputeShaderImporter";
		   case CLASS_AvatarMask: return "CLASS_AvatarMask";
		   case CLASS_AudioImporter: return "CLASS_AudioImporter";
		   case CLASS_HierarchyState: return "CLASS_HierarchyState";
		   case CLASS_GUIDSerializer: return "CLASS_GUIDSerializer";
		   case CLASS_AssetMetaData: return "CLASS_AssetMetaData";
		   case CLASS_DefaultAsset: return "CLASS_DefaultAsset";
		   case CLASS_DefaultImporter: return "CLASS_DefaultImporter";
		   case CLASS_TextScriptImporter: return "CLASS_TextScriptImporter";
		   case CLASS_SceneAsset: return "CLASS_SceneAsset";
		   case CLASS_NativeFormatImporter: return "CLASS_NativeFormatImporter";
		   case CLASS_MonoImporter: return "CLASS_MonoImporter";
		   case CLASS_AssetServerCache: return "CLASS_AssetServerCache";
		   case CLASS_LibraryAssetImporter: return "CLASS_LibraryAssetImporter";
		   case CLASS_ModelImporter: return "CLASS_ModelImporter";
		   case CLASS_FBXImporter: return "CLASS_FBXImporter";
		   case CLASS_TrueTypeFontImporter: return "CLASS_TrueTypeFontImporter";
		   case CLASS_MovieImporter: return "CLASS_MovieImporter";
		   case CLASS_EditorBuildSettings: return "CLASS_EditorBuildSettings";
		   case CLASS_DDSImporter: return "CLASS_DDSImporter";
		   case CLASS_InspectorExpandedState: return "CLASS_InspectorExpandedState";
		   case CLASS_AnnotationManager: return "CLASS_AnnotationManager";
		   case CLASS_MonoAssemblyImporter: return "CLASS_MonoAssemblyImporter";
		   case CLASS_EditorUserBuildSettings: return "CLASS_EditorUserBuildSettings";
		   case CLASS_PVRImporter: return "CLASS_PVRImporter";
		   case CLASS_Transition: return "CLASS_Transition";
		   case CLASS_State: return "CLASS_State";
		   case CLASS_HumanTemplate: return "CLASS_HumanTemplate";
		   case CLASS_StateMachine: return "CLASS_StateMachine";
		   case CLASS_PreviewAssetType: return "CLASS_PreviewAssetType";
		   case CLASS_SubstanceImporter: return "CLASS_SubstanceImporter";
		   case kLargestEditorClassID: return "kLargestEditorClassID";
		   //case kClassIdOutOfHierarchy: return "kClassIdOutOfHierarchy";
		   case CLASS_int: return "CLASS_int";
		   case CLASS_bool: return "CLASS_bool";
		   case CLASS_float: return "CLASS_float";
		   case CLASS_MonoObject: return "CLASS_MonoObject";
		   case CLASS_Collision: return "CLASS_Collision";
		   case CLASS_Vector3f: return "CLASS_Vector3f";
		   case CLASS_RootMotionData: return "CLASS_RootMotionData";
		   case CLASS_Collision2D: return "CLASS_Collision2D";
		   }
		   return "Unknown";
	   }
};

template<typename Enum>
std::string EnumToString(Enum e)
{
	return EnumToStringImpl<Enum>::ToString(e);
}

#endif // ENUMS_H
