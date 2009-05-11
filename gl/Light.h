#ifndef LIGHT_H
#define LIGHT_H

#if defined(__APPLE__) && defined(__MACH__)
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#else
#include <GL/gl.h>
#include <GL/glu.h>
#endif

#include <vector>
using std::vector;

enum LIGHT_TYPE
{
	AMBIENT_LIGHT,
	POINT_LIGHT,
	SPOT_LIGHT,
	DIRECT_LIGHT
};

class Light
{
public:
	static void Initialize(void);
	Light(LIGHT_TYPE lightType);
	~Light();
	
	void setAmbient(float r, float g, float b, float a);
	void setDiffuse(float r, float g, float b, float a);
	void setSpecular(float r, float g, float b, float a);
	
	void setLightType(LIGHT_TYPE lightType);
	void setPosition(float x, float y, float z);
	void setSpotDirection(float x, float y, float z);
	
	void setCutoff(float value);
	void setExponent(float value);
	void setAttenuation(float constant, float linear, float quadratic);
	
	int getLightNum(void);
	void updateLight();
	
	void Visible(bool value = true);
	static int numLights;
	static vector<int> avaliableLights;
	static vector<Light *> lights;
	
private:
	GLfloat	position[4];
	GLfloat	ambient[4];
	GLfloat	diffuse[4];
	GLfloat	specular[4];
	GLfloat	spotDirection[4];
	
	float	cutoff;
	float	exponent;
	bool	visible;
	int		lightType;
	int		lightNum;
};
#endif
