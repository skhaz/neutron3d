#ifndef _GLPANEL_H
#define _GLPANEL_H

#include <QWidget>

#include "gl/glView.h"

class GLPanel : public QWidget
{
	Q_OBJECT;
	
public:
	GLPanel(QWidget *parent = 0);
	~GLPanel();
	
private:
	
	GLView *glView;
	
};
#endif