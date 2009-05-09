#include "point.h"

Point::Point()
{
}

Point::Point(float X, float Y, float Z)
{
	x = X;
	y = Y;
	z = Z;
}

Point::~Point()
{
}

void Point::setXYZ(float X, float Y, float Z)
{
	setX(X);
	setY(Y);
	setZ(Z);
}

void Point::setX(float X)
{
	x = X;
}

void Point::setY(float Y)
{
	y = Y;
}

void Point::setZ(float Z)
{
	z = Z;
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



