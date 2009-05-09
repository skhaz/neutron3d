#ifndef _GLDISPLAYINFO_H
#define _GLDISPLAYINFO_H

#include <QGLWidget>

class GlDisplayInfo : public QGLWidget
{
public:
	GlDisplayInfo();
	~GlDisplayInfo();
	
	void drawOrigin();
	void drawGrid();
	
	void setGridColor(QColor _GridColor);
	
private:
	QColor gridColor;
};
#endif

