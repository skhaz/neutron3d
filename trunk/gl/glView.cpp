#include <QtOpenGL>

#include "glView.h"

#include "Plane.h"
#include "Cube.h"
#include "Node.h"

Mesh *selectedNode = NULL;
list<Mesh *> selectedItems;

GLView::GLView(QWidget *parent)
: QGLWidget(parent)
{	
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
}


void GLView::initializeGL()
{
	glClearColor(0.4, 0.4, 0.5, 1.0);
	
	glShadeModel(GL_SMOOTH);
	glEnable(GL_DEPTH_TEST);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
}

void GLView::paintGL()
{
		glClearColor(0.4, 0.4, 0.5, 1.0);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
		viewCamera();
	
	
		for (list<Node *>::iterator it = Node::getNodes().begin(); it != Node::getNodes().end(); it++ )
		{
			Mesh *mesh = dynamic_cast<Mesh *>(*it);
		
			if ( mesh && mesh->getParent() == NULL )
			{
				mesh->drawMesh();
			}
		}
	
		list<Mesh *> items = selectedItems;
		while (items.size() > 0 )
		{
			for (list<Node *>::iterator it = Node::getNodes().begin(); it != Node::getNodes().end(); it++ )
			{
				Mesh *mesh = dynamic_cast<Mesh *>(*it);
			
				if ( mesh && mesh->getParent() == NULL )
				{
					for ( list<Mesh *>::iterator mit = items.begin(); mit != items.end(); mit++ )
					{
						Mesh *insideMesh = (*mit);
					
						glDisable(GL_LIGHTING);
						glColor4f(0.0f, 1.0f, 0.0f, 0.2f);
					
						if ( mesh->drawMesh(true, insideMesh) )
						{
							items.remove(insideMesh);
							break;
						}
					}
				}
			}
		}
	//glEnable(GL_LIGHTING);


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
	// formula pra usar com o glFrustum
	const GLdouble pi = 3.1415926535897932384626433832795;
	GLdouble fW, fH;
	fH = tan( angleView / 360 * pi ) * nearPlane;
	fW = fH * fAspect;
	// ********************************
	
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
        //gluPerspective(angleView, fAspect, nearPlane, farPlane);	
		
		// Teste com glFrustum
		glFrustum( -fW, fW, -fH, fH, nearPlane, farPlane );
	}
	
	viewPosition();
}

void GLView::viewPosition()
{
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	//gluLookAt(trX,trY,trZ, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
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
		case Qt::Key_M:
			angleView += 1;
			updateGL();
			break;
		case Qt::Key_N:
			angleView -= 1;
			updateGL();
			break;
		case Qt::Key_Q:
				Plane *plane = new Plane();
				plane->setDivisions(30);
				plane->setSize(10, 10);
				plane->createPrimitive();
				plane->getTransform().setTranlate(0, 0, 0);
			
				selectedNode = plane;
			
				selectedItems.clear();
				selectedItems.push_back(selectedNode);
			updateGL();
			break;
		case Qt::Key_W:
			Cube *cube = new Cube();
			cube->createPrimitive();
			cube->getTransform().setTranlate(0, 1, 0);
			
			selectedNode = cube;
			
			selectedItems.clear();
			selectedItems.push_back(selectedNode);
			updateGL();
			break;
		default:
			updateGL();
    }
}

void GLView::handleSelection(void)
{
	/*
	static bool buttonDown = false;
	
	if( btClicked == Qt::LeftButton ) 
		buttonDown = true;
	
	GLuint buffer[512];
	GLint viewport[4];
	
	glGetIntegerv(GL_VIEWPORT, viewport);
	glSelectBuffer(512, buffer);
	
	glRenderMode(GL_SELECT);
	
	glInitNames();
	
	glMatrixMode(GL_PROJECTION);
	glPushMatrix();
	
	glLoadIdentity();
	
	gluPickMatrix(x_ini, viewport[3] - y_ini, 1.0f, 1.0f, viewport);
	viewCamera();
	
	//drawScene(true);
	
	glMatrixMode(GL_PROJECTION);
	glPopMatrix();
	
	glMatrixMode(GL_MODELVIEW);
	int totalsHints = glRenderMode(GL_RENDER);
	
	if ( totalsHints > 0 )
	{
		int choose = buffer[3];
		int depth = buffer[1];
		
		for ( int i = 0; i < totalsHints; i++ )
		{
			if ( buffer[i * 4 + 1] < (GLuint)depth)
			{
				choose = buffer[i * 4 + 3];
				depth = buffer[i * 4 + 1];
			}
		}
		
		selectedNode = reinterpret_cast<Mesh *> (choose);
	}
	 */
}


