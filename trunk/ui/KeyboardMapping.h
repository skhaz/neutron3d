#ifndef KEYBOARDMAPPING_H
#define KEYBOARDMAPPING_H

#include "ui_KeyboardMapping.h"

#include <QWidget>
#include <QDialog>

class KeyboardMapping : public QDialog, private Ui_KeyboardMapping
{
	public:
		KeyboardMapping(QWidget* parent = 0);
		~KeyboardMapping();

	private:
		Q_OBJECT
};

#endif

