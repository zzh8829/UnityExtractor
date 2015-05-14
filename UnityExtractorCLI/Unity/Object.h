#ifndef UNITYOBJECT_H
#define UNITYOBJECT_H

#include "Common.h"
#include "Enums.h"
#include "IO/BinaryReader.h"

class Object
{
public:
	int32_t m_InstanceID;
	int32_t _bf8;
	//EventEntry *m_EventIndex;
	uint32_t mMonoReference;
	//MonoObject *m_ScriptingObjectPointer;

	virtual ~Object(){}

	// virtual void *__vecDelDtor(unsigned int);
	// virtual bool MainThreadCleanup();
	// virtual void AwakeFromLoad(AwakeFromLoadMode);
	// virtual void AwakeFromLoadThreaded();
	// virtual void CheckConsistency();
	// virtual void Reset();
	// virtual void SmartReset();
	// virtual const char *GetName();
	// virtual void SetName(const char *);
	// virtual bool ShouldIgnoreInGarbageDependencyTracking();
	// virtual void SetHideFlags(int);
	// virtual int32_t GetRuntimeMemorySize();
	virtual ClassIDType GetClassIDVirtualInternal()=0;
	// virtual bool GetNeedsPerObjectTypeTree();
	// virtual void VirtualRedirectTransfer(StreamedBinaryWrite<1> *);
	// virtual void VirtualRedirectTransfer(SafeBinaryRead *);
	// virtual void VirtualRedirectTransfer(StreamedBinaryRead<1> *);
	// virtual void VirtualRedirectTransfer(ProxyTransfer *);
	// virtual void VirtualRedirectTransfer(RemapPPtrTransfer *);
	// virtual void VirtualRedirectTransfer(StreamedBinaryRead<0> *);
	// virtual void VirtualRedirectTransfer(StreamedBinaryWrite<0> *);

	virtual void VirtualRedirectTransfer(BinaryReader*)=0;
	//virtual void VirtualRedirectTransfer(TextWriter*)=0;
};

#endif // UNITYOBJECT_H
