#include <QtOpenGL>


#include "glView.h"

GLView::GLView(QWidget *parent)
: QGLWidget(parent)
{
	object = 0;
	
	bgColor = QColor::fromRgbF(0.4, 0.4, 0.5, 1.0);
	
	angleView = 45.0;
    nearPlane = 0.1;
    farPlane = 1000.0;

	camType = 1;
	
	// navagacao
	rotX = 30.0;
	rotY = -30.0;
	trX = trY = 0;
	trZ = 5.0;
	win = trZ;
	
    setFocusPolicy(Qt::StrongFocus); // seta o focus para o painel assim o teclado funciona.
}

GLView::~GLView()
{
	makeCurrent();
	glDeleteLists(object, 1);
}

void GLView::setBgColor( QColor _BgColor)
{
	bgColor = _BgColor;
}

void GLView::initializeGL()
{
	qglClearColor(bgColor);
    object = makeObject();
	
    glEnable(GL_LINE_SMOOTH);
	glEnable(GL_POLYGON_SMOOTH);
	//glEnable(GL_POINT_SMOOTH);
    glHint (GL_LINE_SMOOTH_HINT, GL_NICEST);
	//glHint(GL_POINT, GL_NICEST);
	
	glShadeModel(GL_SMOOTH);
	glEnable(GL_DEPTH_TEST);
	//glEnable(GL_CULL_FACE);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
	
	glPointSize(4);
}

void GLView::paintGL()
{
	qglClearColor(bgColor);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	viewCamera();

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
	
	if(camType == 0)
	{
		if( width() <= height())
            glOrtho(-win + trX, win + trX, -win * height()/width() + trY, win * height()/width() + trY, nearPlane, farPlane);
		else
            glOrtho(-win * width()/height() + trX, win * width()/height() + trX, -win + trY, win + trY, nearPlane, farPlane);
	}
	else
	{
        gluPerspective(angleView, fAspect, nearPlane, farPlane);
	}
	//gluLookAt(0, 0, 5, 0, 0, 0, 0, 1, -1);
	
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
	if(QApplication::keyboardModifiers() == Qt::AltModifier)
	{
		camMov(X, Y);
	}
	
	updateGL();
}

#define SENS_ROT	5.0
#define SENS_OBS	100.0
#define SENS_TRANSL	100.0
void GLView::camMov(int x, int y)
{	
	//if ( QApplication::keyboardModifiers() == Qt::AltModifier || (btClicked == Qt::LeftButton && QApplication::keyboardModifiers() == Qt::AltModifier) )
		
	if(btClicked == Qt::LeftButton) 
	{
		int deltax = x_ini - x;
		int deltay = y_ini - y;
		rotY = rotY_ini - deltax/SENS_ROT;
		rotX = rotX_ini - deltay/SENS_ROT;
	}
	else if(btClicked == Qt::MidButton) 
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
		
		win = trZ; // define o zoom para vista Orto
	}
	
	viewPosition();
	updateGL();
}

GLuint GLView::makeObject()
{
	GLuint list = glGenLists(1);
	glNewList(list, GL_COMPILE);
	
	dispInfo.drawGrid();
	dispInfo.drawOrigin();
	cube.cube();
	
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
		case Qt::Key_O:
			camType = 0;
			updateGL();
			break; 
		case Qt::Key_P:
			camType = 1;
			updateGL();
			break; 
		default:
			updateGL();
    }
}

