#ifndef _POINT_H
#define _POINT_H

class Point
{
public:
	Point();
	Point(float X = 0, float Y = 0, float Z = 0);
	~Point();
	
	float getX();
	float getY();
	float getZ();
	void setXYZ(float X, float Y, float Z);
	void setX(float X);
	void setY(float Y);
	void setZ(float Z);
	
	Point operator = (Point &p);
	
private:
	float x, y, z;
};
#endif 

