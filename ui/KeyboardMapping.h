#ifndef _KEYBOARDMAPPING_H
#define _KEYBOARDMAPPING_H

#include "ui_KeyboardMapping.h"

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

