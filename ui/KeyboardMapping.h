#ifndef _KeyboardMapping_h
#define _KeyboardMapping_h

#include "ui_KeyboardMapping.h"

#include <QWidget>
#include <QDialog>

class KeyboardMapping : public QDialog, private Ui_form_KeyboardMapping
{
	public:
		KeyboardMapping(QWidget* parent = 0);
		~KeyboardMapping();

	private:
		Q_OBJECT
};

#endif

