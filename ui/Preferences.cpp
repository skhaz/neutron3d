#include "Preferences.h"

Preferences::Preferences(QWidget *parent)
: QDialog(parent)
{
    setupUi(this);
	
	connect(bt_close, SIGNAL(clicked()), SLOT(close()));
}

Preferences::~Preferences()
{

}
