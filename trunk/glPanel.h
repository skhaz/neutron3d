#ifndef GLPANEL_H
#define GLPANEL_H

#include <QWidget>

#include "glView.h"

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