#include "vector3.h"

Vector3::Vector3(float X, float Y, float Z) : Point( X, Y, Z)
{
}

Vector3::~Vector3()
{
}

Vector3 Vector3::operator + (Vector3 &p)
{
	Vector3 outV;
	outV.setX(getX() + p.getX());
	outV.setY(getY() + p.getY());
	outV.setZ(getZ() + p.getZ());
	
	return outV;
}

Vector3 Vector3::operator - (Vector3 &p)
{
	Vector3 outV;
	outV.setX(getX() - p.getX());
	outV.setY(getY() - p.getY());
	outV.setZ(getZ() - p.getZ());
	
	return outV;
}

Vector3 Vector3::operator * (float scale)
{
	Vector3 outV;
	outV.setX(getX() * scale);
	outV.setY(getY() * scale);
	outV.setZ(getZ() * scale);
	
	return outV;
}

Vector3 operator * (const float &scale, Vector3 &v)
{
	Vector3 outV;
	outV.setX(v.getX() * scale);
	outV.setY(v.getY() * scale);
	outV.setZ(v.getZ() * scale);
	
	return outV;
}




