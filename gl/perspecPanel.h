#ifndef _PERSPECPANEL_H
#define _PERSPECPANEL_H

#include <QDialog>

#include "gl/glView.h"

class PerspcPanel : public QDialog
	{
		Q_OBJECT;
		
	public:
		PerspcPanel(QWidget *parent = 0);
		~PerspcPanel();
		
	private:
		
		GLView *glView;
		
	};
#endif