#ifndef _VECTOR2_H
#define _VECTOR2_H

#include "point.h"

class Vector2 : public Point
	{
	public:
		Vector2(float X = 0, float Y = 0); 
		~Vector2();
		Vector2 operator + (Vector2 &p);
		Vector2 operator - (Vector2 &p);
		Vector2 operator * (float scale);
		
	};

#endif