#ifndef _POINT_H
#define _POINT_H

class Point
{
public:
	Point();
	Point(float _X = 0, float _Y = 0, float _Z = 0);
	~Point();
	
	float getX();
	float getY();
	float getZ();
	void setXYZ(float _X, float _Y, float _Z);
	void setX(float _X);
	void setY(float _Y);
	void setZ(float _Z);
	
	Point operator = (Point &p);
	
private:
	float x, y, z;
};
#endif 

