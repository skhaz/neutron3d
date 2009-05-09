#ifndef VECTOR3_H
#define VECTOR3_H

#include <math.h>

class Vector3
{
public:
	Vector3(float X = 0.0f, float Y = 0.0f, float Z = 0.0f);
	Vector3 operator + (const Vector3 &vec);	
	Vector3 operator += (const Vector3 &vec);	
	Vector3 operator - (const Vector3 &vec);
	Vector3 operator -= (const Vector3 &vec);	
	Vector3 operator * (float num);	
	Vector3 operator *= (float num);	
	Vector3 operator / (float num);	
	Vector3 operator /= (float num);	
	Vector3 operator - (void);	
	Vector3 operator*(const Vector3 &vec);	
	Vector3 Normalize(void);	
	float Dot(Vector3 &vec);		
	float Lenght(void);		
	float Distance(Vector3 &vec);	
	bool operator==(Vector3 &vec);	
	bool operator!=(Vector3 &vec);

public:
	float x, y, z;
};

#endif
