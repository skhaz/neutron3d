#ifndef PROJECTMANAGER_H
#define PROJECTMANAGER_H

#include "ui_ProjectManager.h"

#include <QWidget>
#include <QDialog>

class ProjectManager : public QDialog, private Ui_ProjectManager
{
	public:
		ProjectManager(QWidget* parent = 0);
		~ProjectManager();
	
	private:
		Q_OBJECT
};

#endif
