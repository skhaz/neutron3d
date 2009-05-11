#ifndef _PRIMITIVES_H
#define _PRIMITIVES_H

#if defined(__APPLE__) && defined(__MACH__)
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#else
#include <GL/gl.h>
#include <GL/glu.h>
#endif

class Primitives
{
public:
	Primitives();
	~Primitives();
	
	void cube();
	void plane();
	void circle();
};
#endif

