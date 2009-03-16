#ifndef _GLVIEW_H
#define _GLVIEW_H

#include <QGLWidget>

#include "primitives.h"
#include "glDisplayInfo.h"

class Primitives;
class GlDisplayInfo;

class GLView : public QGLWidget
	{
		Q_OBJECT
		
	public:
		GLView(QWidget *parent = 0);
		~GLView();
		
		void setBgColor( QColor _BgColor);
		
		void viewCamera();
		void viewPosition();
		void camMov(int x, int y);
		
		
	protected:
		void initializeGL();
		void paintGL();
		void resizeGL(int width, int height);
		void mousePressEvent(QMouseEvent *event);
		void mouseMoveEvent(QMouseEvent *event);
        void keyPressEvent(QKeyEvent *event);
		
		
	private:
		Primitives cube;
        GlDisplayInfo dispInfo;
		
		GLuint makeObject();
		
		GLuint object;
		
		QColor bgColor;
		
		GLfloat angleView;
        GLfloat nearPlane;
        GLfloat farPlane;
		GLfloat fAspect;

		// navagacao
		int camType;
		
		GLfloat win;
		GLfloat rotX, rotY, rotX_ini, rotY_ini;
		GLfloat trX, trY, trZ, trX_ini, trY_ini, trZ_ini;
		int x_ini,y_ini;
		Qt::MouseButton btClicked;
		
	};

#endif

