#ifndef _VECTOR3_H
#define _VECTOR3_H

#include "point.h"

class Vector3 : public Point
{
public:
	Vector3(float X = 0, float Y = 0, float Z = 0); 
	~Vector3();
	
	Vector3 operator + (Vector3 &p);
	Vector3 operator - (Vector3 &p);
	Vector3 operator * (float scale);
};

#endif
