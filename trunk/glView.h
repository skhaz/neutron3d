#ifndef GLVIEW_H
#define GLVIEW_H

#include <QGLWidget>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QEvent>

class GLView : public QGLWidget
	{
		Q_OBJECT
		
	public:
		GLView(QWidget *parent = 0);
		~GLView();
		
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
		GLuint makeObject();
		void cubo();
		void grid();
		
		GLuint object;
		
		QColor bgColor;
		
		GLfloat angleView;
		GLfloat near;
		GLfloat far;
		GLfloat fAspect;

		// navagacao
		GLfloat rotX, rotY, rotX_ini, rotY_ini;
		GLfloat trX, trY, trZ, trX_ini, trY_ini, trZ_ini;
		int x_ini,y_ini;
		Qt::MouseButton btClicked;
		
	};

#endif

