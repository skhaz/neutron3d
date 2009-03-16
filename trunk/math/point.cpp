#include "point.h"

Point::Point()
{
}

Point::Point(float _X, float _Y, float _Z)
{
	x = _X;
	y = _Y;
	z = _Z;
}

Point::~Point()
{
}

void Point::setXYZ(float _X, float _Y, float _Z)
{
	setX(_X);
	setY(_Y);
	setZ(_Z);
}

void Point::setX(float _X)
{
	x = _X;
}

void Point::setY(float _Y)
{
	y = _Y;
}

void Point::setZ(float _Z)
{
	z = _Z;
}

Point Point::operator = (Point &p)
{
	setX(p.getX());
	setY(p.getY());
	setZ(p.getZ());
	
	return *this;
}

float Point::getX()
{
	return x;
}

float Point::getY()
{
	return y;
}

float Point::getZ()
{
	return z;
}



