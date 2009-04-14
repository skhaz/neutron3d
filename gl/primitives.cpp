#include "primitives.h"

#include <cmath>

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

void Primitives::circle()
{
	glShadeModel(GL_FLAT);
	glLineWidth(2.0);
	
	const float DEG2RAD = 3.14159/180;
	
	glBegin(GL_LINE_LOOP);			
	glColor3d(1.0, 0.0, 0.0);
	for(int i = 0; i <= 360; i++)
	{
		float degInRad = i*DEG2RAD;
		glVertex3f(0.0, cos(degInRad)*2,sin(degInRad)*2);
	}
	glEnd();
	
	glBegin(GL_LINE_LOOP);			
	glColor3d(0.0, 1.0, 0.0);
	for(int i = 0; i <= 360; i++)
	{
		float degInRad = i*DEG2RAD;
		glVertex3f(cos(degInRad)*2, 0.0 ,sin(degInRad)*2);
	}
	glEnd();
	
	glBegin(GL_LINE_LOOP);			
	glColor3d(0.0, 0.0, 1.0);
	for(int i = 0; i <= 360; i++)
	{
		float degInRad = i*DEG2RAD;
		glVertex3f(cos(degInRad)*2,sin(degInRad)*2, 0.0);
	}
	glEnd();
	
}