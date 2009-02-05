#include "KeyboardMapping.h"


KeyboardMapping::KeyboardMapping(QWidget* parent)
: QDialog(parent)
{
	setupUi(this);

	connect(bt_cancel, SIGNAL(clicked()), SLOT(close()));

}

KeyboardMapping::~KeyboardMapping()
{
}

