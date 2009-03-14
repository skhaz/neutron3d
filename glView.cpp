#include <QtGui>
#include <QtOpenGL>

#include "glView.h"
#include "origin.h"

GLView::GLView(QWidget *parent)
: QGLWidget(parent)
{
	object = 0;
	
	bgColor = QColor::fromRgbF(0.4, 0.4, 0.5, 1.0);
	
	
	angleView = 45;
	near = 0.1;
	far = 1000.0;
	
	// navagacao
	rotX = 30;
	rotY = 30;
	trX = trY = 0;
	trZ = 5;
	
    setFocusPolicy(Qt::StrongFocus); // seta o focus para o painel assim o teclado funciona.
}

GLView::~GLView()
{
	makeCurrent();
	glDeleteLists(object, 1);
}


void GLView::initializeGL()
{
	qglClearColor(bgColor);
    object = makeObject();
	
    glEnable(GL_LINE_SMOOTH);
	glEnable(GL_POLYGON_SMOOTH);
	glEnable(GL_POINT_SMOOTH);
    glHint (GL_LINE_SMOOTH_HINT, GL_NICEST);
	glHint(GL_POINT, GL_NICEST);
	
	glShadeModel(GL_SMOOTH);
	glEnable(GL_DEPTH_TEST);
	//glEnable(GL_CULL_FACE);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
}

void GLView::paintGL()
{
	qglClearColor(bgColor);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	object = makeObject();
	glCallList(object);
}

void GLView::resizeGL(int width, int height)
{
	if( height == 0 )
		height = 1;
	
	glViewport(0, 0, width, height);
	fAspect = (GLfloat)width / (GLfloat)height;
	
	viewCamera();
}

void GLView::viewCamera()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	gluPerspective(angleView, fAspect, near, far);
	
	viewPosition();
}

void GLView::viewPosition()
{
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	glTranslatef(-trX,-trY,-trZ);
	glRotatef(rotX,1,0,0);
	glRotatef(rotY,0,1,0);
}

void GLView::mousePressEvent(QMouseEvent *event)
{
	int X = event->x();
	int Y = event->y();
	
	x_ini = X;
	y_ini = Y;
	trX_ini = trX;
	trY_ini = trY;
	trZ_ini = trZ;
	rotX_ini = rotX;
	rotY_ini = rotY;
	btClicked = event->button();
}

void GLView::mouseMoveEvent(QMouseEvent *event)
{
	int X = event->x();
	int Y = event->y();
	camMov(X, Y);
	updateGL();
}

#define SENS_ROT	5.0
#define SENS_OBS	100.0
#define SENS_TRANSL	100.0
void GLView::camMov(int x, int y)
{
	if(btClicked == Qt::LeftButton)
	{
		int deltax = x_ini - x;
		int deltay = y_ini - y;
		rotY = rotY_ini - deltax/SENS_ROT;
		rotX = rotX_ini - deltay/SENS_ROT;
	}
	else if(btClicked ==Qt::MidButton)
	{
		int deltax = x_ini - x;
		int deltay = y_ini - y;
		trX = trX_ini + deltax/SENS_TRANSL;
		trY = trY_ini - deltay/SENS_TRANSL;
	}
	else if(btClicked == Qt::RightButton) 
	{
		int deltaz = x_ini - x;
		trZ = trZ_ini + deltaz/SENS_OBS;
	}
	
	viewPosition();
	updateGL();
}

GLuint GLView::makeObject()
{
	GLuint list = glGenLists(1);
	glNewList(list, GL_COMPILE);
	
	grid();
    cubo();
	Origin *og = new Origin();
	og->drawOrigin();

	
	glEndList();
	return list;
}

void GLView::keyPressEvent(QKeyEvent *event)
{
	switch (event->key())
	{
		case Qt::Key_3:
			glDisable(GL_LIGHTING);
			glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
			updateGL();
			break; 
		case Qt::Key_4:
			glDisable(GL_LIGHTING);
			glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
			updateGL();
			break;
		case Qt::Key_5:
			glDisable(GL_LIGHTING);
			glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
			updateGL();
			break;
		case Qt::Key_6:
			glEnable(GL_LIGHTING);
			glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
			updateGL();
			break; 
			
		default:
			updateGL();
    }
}




void GLView::cubo()
{
	glShadeModel(GL_SMOOTH);
	
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


void GLView::grid(void)
{		
	// Cria a cor
	glColor3f(0.2f, 0.2f, 0.2f);  
	
	float Zg = 0.0f;
	// Loop para criar o grid de Z
	while (Zg <= 3.0)
	{
		// Desenha a linha X
		glLineWidth(1);
		
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
		glLineWidth(0.5);
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
	
	/// Cria a cor
	glColor3f(0.1f, 0.1f, 0.1f);   
	
	// Desenha a linha X
	glLineWidth(1.5);
	
	float Zig = -3.0f;
	// Loop para criar o grid de Z
	while (Zig <= 3.0)
	{
		//glLineStipple(1, 0x0FF0);
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
		// Desenha a linha X
		glLineWidth(1.5);
		glBegin(GL_LINES);      
		glVertex3f( Xig,0.0f, -3.0); 
		glVertex3f( Xig,0.0f, 3.0);
		glVertex3f( (Xig*-1),0.0f, -3.0); 
		glVertex3f( (Xig*-1),0.0f, 3.0);
		glEnd();  
		Xig = Xig + 1.5;
	}
}

