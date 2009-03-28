#include "glPanel.h"

GLPanel::GLPanel(QWidget *parent, Qt::WindowFlags flags)
: QDockWidget(parent, flags)
{	
	setWindowTitle(tr("Perspective"));
	setAllowedAreas(Qt::LeftDockWidgetArea);
	
    glView = new GLView;
	
	setWidget(glView);
	
	createAction();
	createAction();
}

GLPanel::~GLPanel()
{
}

void GLPanel::contextMenuEvent ( QContextMenuEvent * event )
{
	if(QApplication::keyboardModifiers() != Qt::AltModifier)
    {
		menu = new QMenu(this);
        menu->addAction(closeAction);
        menu->addSeparator();
        menu->exec(event->globalPos());
    }
}

void GLPanel::createAction()
{
	closeAction = new QAction(tr("Close Panel"), this);
	connect(closeAction, SIGNAL(triggered()), SLOT(closeSlot()));
}

void GLPanel::closeSlot()
{
	close();
}






