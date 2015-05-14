#ifndef UNITYNAMEDOBJECT_H
#define UNITYNAMEDOBJECT_H

#include "Object.h"

class NamedObject : public Object
{
public:
	std::string m_Name;

	virtual ~NamedObject(){}

	virtual ClassIDType GetClassIDVirtualInternal();

	virtual void VirtualRedirectTransfer(BinaryReader *reader);
	//virtual void VirtualRedirectTransfer(TextWriter *writer);

	void Transfer(BinaryReader *reader);
};

#endif // UNITYNAMEDOBJECT_H
