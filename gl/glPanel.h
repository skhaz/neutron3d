#ifndef _GLPANEL_H
#define _GLPANEL_H

#include <QtGui>
#include <QDockWidget>
#include <QMenu>
#include <QAction>

#include "glView.h"

class GLPanel : public QDockWidget
{
	Q_OBJECT;
	
public:
	GLPanel(QWidget *parent = 0, Qt::WindowFlags flags = 0);
	~GLPanel();

private:
	void createAction();
	
	GLView *glView;
	
	QMenu *menu;

	QAction *closeAction;
	
protected:
	virtual void contextMenuEvent ( QContextMenuEvent * event );

private slots:
	void closeSlot();
	
};
#endif