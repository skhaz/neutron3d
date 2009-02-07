#ifndef PREFERENCES_H
#define PREFERENCES_H

#include "ui_Preferences.h"

#include <QWidget>
#include <QDialog>

class Preferences : public QDialog, private Ui_form_Preferences
{
	public:
		Preferences(QWidget* parent = 0);
		~Preferences();
	
	private:
		Q_OBJECT
};

#endif
