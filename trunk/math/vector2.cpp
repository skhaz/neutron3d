#include "vector2.h"

Vector2::Vector2(float X, float Y) : Point( X, Y)
{
}

Vector2::~Vector2()
{
}

Vector2 Vector2::operator + (Vector2 &p)
{
	Vector2 outV;
	outV.setX(getX() + p.getX());
	outV.setY(getY() + p.getY());
	
	return outV;
}

Vector2 Vector2::operator - (Vector2 &p)
{
	Vector2 outV;
	outV.setX(getX() - p.getX());
	outV.setY(getY() - p.getY());
	
	return outV;
}

Vector2 Vector2::operator * (float scale)
{
	Vector2 outV;
	outV.setX(getX() * scale);
	outV.setY(getY() * scale);
	
	return outV;
}

Vector2 operator * (const float &scale, Vector2 &v)
{
	Vector2 outV;
	outV.setX(v.getX() * scale);
	outV.setY(v.getY() * scale);
	
	return outV;
}




