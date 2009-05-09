#include "glDisplayInfo.h"

GlDisplayInfo::GlDisplayInfo()
{
	gridColor = QColor::fromRgbF(0.2, 0.2, 0.2, 1.0);
}

GlDisplayInfo::~GlDisplayInfo()
{
}

void GlDisplayInfo::setGridColor(QColor _GridColor)
{
	gridColor = _GridColor;
}


void GlDisplayInfo::drawOrigin()
{
	const float width = 10.0f;
	const float height = 10.0f;
	
	const int divisions = 50;
	
	float incX = width / (float)divisions;
	float incY = height / (float)divisions;	
	
	glColor3f(0,0,0);
	glNormal3f(0,1,0);
	
	for (float x = -width / 2; x < width / 2; x += incX)
	{
		for (float y = -height / 2; y < height / 2; y += incY)
		{
			glBegin(GL_TRIANGLE_STRIP);
			glVertex3f(x + incX,	0, y + incY);
			glVertex3f(x,			0, y + incY);
			glVertex3f(x + incX,	0, y);
			glVertex3f(x,			0, y);
			glEnd();
			
		}
	}
	
	
	/*
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
	 */
}

void GlDisplayInfo::drawGrid()
{
	// Cria a cor
	qglColor(gridColor);
	
	float Zg = 0.0f;
	// Loop para criar o grid de Z
	while (Zg <= 3.0)
	{
		// Desenha a linha X
		glLineWidth(0.8);
		
		glBegin(GL_LINES);      
		glVertex3f( -3.0,0.0f, Zg); 
		glVertex3f( 3.0,0.0f, Zg);
		glVertex3f( -3.0,0.0f, (Zg*-1)); 
		glVertex3f( 3.0,0.0f, (Zg*-1));
		glEnd();  
		Zg = Zg + 0.5;
	}
	
	float Xg = 0.0f;
	// Loop para criar o grid de X
	while (Xg <= 3.0)
	{
		// Desenha a linha X
		glLineWidth(0.3);
		glBegin(GL_LINES);      
		glVertex3f( Xg,0.0f, -3.0); 
		glVertex3f( Xg,0.0f, 3.0);
		glVertex3f( (Xg*-1),0.0f, -3.0); 
		glVertex3f( (Xg*-1),0.0f, 3.0);
		glEnd();  
		Xg = Xg + 0.5;
	}
	
	
	// ****************************
	// Aqui cria o grid grosso
	// ****************************
	
	// Desenha a linha X
	glLineWidth(1.2);
	
	float Zig = -3.0f;
	// Loop para criar o grid de Z
	while (Zig <= 3.0)
	{
		glBegin(GL_LINES);      
		glVertex3f( -3.0,0.0f, Zig); 
		glVertex3f( 3.0,0.0f, Zig);
		glVertex3f( -3.0,0.0f, (Zig*-1)); 
		glVertex3f( 3.0,0.0f, (Zig*-1));
		glEnd();  
		Zig = Zig + 1.5;
	}
	
	float Xig = -3.0f;
	// Loop para criar o grid de X
	while (Xig <= 3.0)
	{		
		glBegin(GL_LINES);      
		glVertex3f( Xig,0.0f, -3.0); 
		glVertex3f( Xig,0.0f, 3.0);
		glVertex3f( (Xig*-1),0.0f, -3.0); 
		glVertex3f( (Xig*-1),0.0f, 3.0);
		glEnd();  
		Xig = Xig + 1.5;
	}	
}