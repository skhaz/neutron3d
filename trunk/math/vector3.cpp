#include "vector3.h"

Vector3::Vector3(float X, float Y, float Z)
{
	x = X;
	y = Y;
	z = Z;
}

Vector3 Vector3::operator + (const Vector3 &vec)
{
	return Vector3(vec.x + x , vec.y + y, vec.z + z);
}

Vector3 Vector3::operator += (const Vector3 &vec)
{
	return ( *this = (*this + vec) );
}

Vector3 Vector3::operator - (const Vector3 &vec)
{
	return Vector3(x - vec.x, y - vec.y, z - vec.z);
}

Vector3 Vector3::operator -= (const Vector3 &vec)
{
	return ( *this = (*this - vec) );
}

Vector3 Vector3::operator * (float num)
{
	return Vector3(x * num, y * num, z * num);
}

Vector3 Vector3::operator *= (float num)
{
	return ( *this = (*this * num) );
}

Vector3 Vector3::operator / (float num)
{
	return Vector3(x / num, y / num, z / num);
}

Vector3 Vector3::operator /= (float num)
{
	return ( *this = (*this / num) );
}

Vector3 Vector3::operator - (void)
{
	return Vector3(-x, -y, -z);
}

Vector3 Vector3::operator*(const Vector3 &vec)
{
	return Vector3( y * vec.z - z * vec.y,  z * vec.x - x * vec.z, x * vec.y - y * vec.x );
} 

Vector3 Vector3::Normalize(void)
{
	float lenght = Lenght();
	
	x /= lenght;
	y /= lenght;
	z /= lenght;
	
	return *this;
}

float Vector3::Dot(Vector3 &vec)
{
	return (x * vec.x + y * vec.y + z * vec.z);
}

float Vector3::Lenght(void)
{
	return sqrt( x * x + y * y + z * z);
}

float Vector3::Distance(Vector3 &vec)
{
	float distX = vec.x - x;
	float distY = vec.y - y;
	float distZ = vec.z - z;
	
	return sqrt(distX * distX + distY * distY + distZ * distZ);
}

bool Vector3::operator==(Vector3 &vec)
{
	return (vec.x == x && vec.y == y && vec.z == z);
}

bool Vector3::operator!=(Vector3 &vec)
{
	return !(vec == *this);
}
