#include "primitives.h"

Primitives::Primitives()
{
}

Primitives::~Primitives()
{
}

void Primitives::cube()
{
	/*
	qglColor(QColor::fromRgbF(0.5, 0.5, 0.5, 1.0));
	GLUquadricObj *pObj;
	pObj = gluNewQuadric();
	gluSphere(pObj, 2.0, 30, 15);
	*/
	glShadeModel(GL_SMOOTH);
	
	glBegin(GL_POINTS);			// Centro
	qglColor(QColor::fromRgbF(0.0, 0.7, 0.0, 1.0));
	glVertex3f(0.0, 0.0, 0.0);
	glEnd();
	
	glBegin(GL_QUADS);			// Face posterior
	glNormal3f(0.0, 0.0, 1.0);	// Normal da face
	qglColor(QColor::fromRgbF(0.0, 1.0, 1.0, 1.0));
	glVertex3f(1.0, 1.0, 1.0);
	qglColor(QColor::fromRgbF(0.0, 1.0, 0.0, 1.0));
	glVertex3f(-1.0, 1.0, 1.0);
	qglColor(QColor::fromRgbF(0.0, 0.0, 0.0, 1.0));
	glVertex3f(-1.0, -1.0, 1.0);
	qglColor(QColor::fromRgbF(0.0, 0.0, 1.0, 1.0));
	glVertex3f(1.0, -1.0, 1.0);
	glEnd();
	
	glBegin(GL_QUADS);			// Face frontal
	glNormal3f(0.0, 0.0, -1.0); 	// Normal da face
	qglColor(QColor::fromRgbF(1.0, 1.0, 1.0, 1.0));
	glVertex3f(1.0, 1.0, -1.0);
	qglColor(QColor::fromRgbF(1.0, 0.0, 1.0, 1.0));
	glVertex3f(1.0, -1.0, -1.0);
	qglColor(QColor::fromRgbF(1.0, 0.0, 0.0, 1.0));
	glVertex3f(-1.0, -1.0, -1.0);
	qglColor(QColor::fromRgbF(1.0, 1.0, 0.0, 1.0));
	glVertex3f(-1.0, 1.0, -1.0);
	glEnd();
	
	glBegin(GL_QUADS);			// Face lateral esquerda
	glNormal3f(-1.0, 0.0, 0.0); 	// Normal da face
	qglColor(QColor::fromRgbF(0.0, 1.0, 0.0, 1.0));
	glVertex3f(-1.0, 1.0, 1.0);
	qglColor(QColor::fromRgbF(1.0, 1.0, 0.0, 1.0));
	glVertex3f(-1.0, 1.0, -1.0);
	qglColor(QColor::fromRgbF(1.0, 0.0, 0.0, 1.0));
	glVertex3f(-1.0, -1.0, -1.0);
	qglColor(QColor::fromRgbF(0.0, 0.0, 0.0, 1.0));
	glVertex3f(-1.0, -1.0, 1.0);
	glEnd();
	
	glBegin(GL_QUADS);			// Face lateral direita
	glNormal3f(1.0, 0.0, 0.0);	// Normal da face
	qglColor(QColor::fromRgbF(0.0, 1.0, 1.0, 1.0));
	glVertex3f(1.0, 1.0, 1.0);
	qglColor(QColor::fromRgbF(0.0, 0.0, 1.0, 1.0));
	glVertex3f(1.0, -1.0, 1.0);
	qglColor(QColor::fromRgbF(1.0, 0.0, 1.0, 1.0));
	glVertex3f(1.0, -1.0, -1.0);
	qglColor(QColor::fromRgbF(1.0, 1.0, 1.0, 1.0));
	glVertex3f(1.0, 1.0, -1.0);
	glEnd();
	
	glBegin(GL_QUADS);			// Face superior
	glNormal3f(0.0, 1.0, 0.0);  	// Normal da face
	qglColor(QColor::fromRgbF(1.0, 1.0, 0.0, 1.0));
	glVertex3f(-1.0, 1.0, -1.0);
	qglColor(QColor::fromRgbF(0.0, 1.0, 0.0, 1.0));
	glVertex3f(-1.0, 1.0, 1.0);
	qglColor(QColor::fromRgbF(0.0, 1.0, 1.0, 1.0));
	glVertex3f(1.0, 1.0, 1.0);
	qglColor(QColor::fromRgbF(1.0, 1.0, 1.0, 1.0));
	glVertex3f(1.0, 1.0, -1.0);
	glEnd();
	
	glBegin(GL_QUADS);			// Face inferior
	glNormal3f(0.0, -1.0, 0.0); 	// Normal da face
	qglColor(QColor::fromRgbF(1.0, 0.0, 0.0, 1.0));
	glVertex3f(-1.0, -1.0, -1.0);
	qglColor(QColor::fromRgbF(1.0, 0.0, 1.0, 1.0));
	glVertex3f(1.0, -1.0, -1.0);
	qglColor(QColor::fromRgbF(0.0, 0.0, 1.0, 1.0));
	glVertex3f(1.0, -1.0, 1.0);
	qglColor(QColor::fromRgbF(0.0, 0.0, 0.0, 1.0));
	glVertex3f(-1.0, -1.0, 1.0);
	glEnd();	
	 
}

void Primitives::plane()
{
	glShadeModel(GL_SMOOTH);
	qglColor(QColor::fromRgbF(0.7, 0.7, 0.7, 1.0));
	
	glBegin(GL_QUADS);			// Face superior
	glNormal3f(0.0, 1.0, 0.0);  	// Normal da face
	
	glVertex3f(-1.0, 0.0, -1.0);
	glVertex3f(-1.0, 0.0, 1.0);
	glVertex3f(1.0, 0.0, 1.0);
	glVertex3f(1.0, 0.0, -1.0);
	glEnd();
}