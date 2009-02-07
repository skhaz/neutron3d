#ifndef _ProjectManager_h
#define _ProjectManager_h

#include "ui_ProjectManager.h"

#include <QWidget>
#include <QDialog>

class ProjectManager : public QDialog, private Ui_form_ProjectManager
{
	public:
		ProjectManager(QWidget* parent = 0);
		~ProjectManager();
	
	private:
		Q_OBJECT
};

#endif
