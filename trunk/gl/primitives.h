#ifndef _PRIMITIVES_H
#define _PRIMITIVES_H

#include <QGLWidget>

class Primitives : public QGLWidget
{
public:
	Primitives();
	~Primitives();
	
	void cube();
	void plane();
	void circle();
};
#endif

