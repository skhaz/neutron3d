#ifndef _PROJECTMANAGER_H
#define _PROJECTMANAGER_H

#include <QWidget>
#include <QDialog>

#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QSpacerItem>
#include <QGroupBox>
#include <QListWidget>
#include <QComboBox>
#include <QPushButton>
#include <QTreeWidget>
#include <QStringList>
#include <QString>
#include <QList>
#include <QMessageBox>
#include <QDir>
#include <QFileDialog>


class ProjectManager : public QDialog
{
	Q_OBJECT;
	
public:
	ProjectManager(QWidget *parent = 0);
	~ProjectManager();
	
	QStringList loadProjects();
	
	private slots:
	void selectProject_Slot();
	void newProject_Slot();
	void addProject_Slot();
	void removeFromList_Slot();
	
private:
	QLabel *lbl_projectPath;
	QLabel *lbl_Path;
	QLabel *lbl_SortBy;
	QLabel *lbl_usePreset;
	QLabel *lbl_folderType;
	
	QPushButton *bt_newProject;
	QPushButton *bt_addProject;
	QPushButton *bt_setActive;
	QPushButton *bt_removeFromList;
	QPushButton *bt_importList;
	QPushButton *bt_exportList;
	QPushButton *bt_deleteProject;
	QPushButton *bt_makeDefault;
	QPushButton *bt_addFolder;
	QPushButton *bt_deleteFolder;
	QPushButton *bt_close;
	
	QSpacerItem *spacer_path;
	QSpacerItem *spacer_sortBy;
	QSpacerItem *spacer_UsePreset;
	QSpacerItem *spacer_buttons1;
	QSpacerItem *spacer_buttons2;
	QSpacerItem *spacer_buttons3;
	QSpacerItem *spacer_buttons4;
	QSpacerItem *spacer_buttons5;
	QSpacerItem *spacer_buttons6;
	QSpacerItem *spacer_buttons7;
	QSpacerItem *spacer_buttons8;
	QSpacerItem *spacer_footer;
	
	QGroupBox *grb_selectProject;
	QGroupBox *grb_defineFolderType;
	
	QListWidget *lst_projects;
	QTreeWidget *trw_folderType;
	
	
	QComboBox *cbx_sortBy;
	QComboBox *cbx_usePreset;
	QComboBox *cbx_folderType;
	
	
	QHBoxLayout *Layout_path; 
	
	QHBoxLayout *Layout_grb; 
	
	QHBoxLayout *Layout_sortBy; 
	QVBoxLayout *Layout_lst_sortBy; 
	QVBoxLayout *Layout_buttons1; 
	QHBoxLayout *Layout_selectProject; 
	QHBoxLayout *Layout_usePreset;
	QVBoxLayout *Layout_trw_usePreset;
	QVBoxLayout *Layout_buttons2; 
	QHBoxLayout *Layout_folderType;
	
	QHBoxLayout *Layout_footer; 
	
	QVBoxLayout *Layout_all; 

	QList<QDir> list;
};

#endif
