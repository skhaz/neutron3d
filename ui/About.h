#ifndef ABOUT_H
#define ABOUT_H

#include "ui_About.h"

#include <QWidget>
#include <QDialog>

class About : public QDialog, private Ui_form_About
{
	public:
		About(QWidget* parent = 0);
		~About();
	
	private:
		Q_OBJECT
};

#endif
