#include "ProjectManager.h"


ProjectManager::ProjectManager(QWidget* parent)
: QDialog(parent)
{
    setupUi(this);

	connect(bt_close, SIGNAL(clicked()), SLOT(close()));
}

ProjectManager::~ProjectManager()
{
}

