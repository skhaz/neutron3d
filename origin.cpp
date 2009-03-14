#include "origin.h"


Origin::Origin()
{
}

Origin::~Origin()
{
}

void Origin::drawOrigin()
{
	glShadeModel(GL_FLAT);
	glLineWidth(2.0);
	
	glBegin(GL_LINES);			
	glColor3d(1.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.5, 0.0, 0.0);
	glEnd();
	
	glBegin(GL_LINES);			
	glColor3d(0.0, 1.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.5, 0.0);
	glEnd();
	
	glBegin(GL_LINES);			
	glColor3d(0.0, 0.0, 1.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.5);
	glEnd();
}
