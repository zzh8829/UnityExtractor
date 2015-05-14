#ifndef AABB_H
#define AABB_H

#include "Vector3f.h"

struct AABB
{
	Vector3f m_Center;
	Vector3f m_Extent;
};

struct MinMaxAABB
{
	Vector3f m_Min;
	Vector3f m_Max;
};

#endif // AABB_H
