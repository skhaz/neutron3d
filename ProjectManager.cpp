#include "ProjectManager.h"
#include <QFileDialog>
#include <QDir>

ProjectManager::ProjectManager(QWidget *parent)
: QDialog(parent)
{
	setMinimumSize(0, 480);
	
	// *****************************************************************
	lbl_projectPath = new QLabel(tr("Project Path: "));	
	lbl_Path = new QLabel(tr(""));
	
	spacer_path = new QSpacerItem( 30, 10, QSizePolicy::Expanding, QSizePolicy::Minimum );
	
	Layout_path = new QHBoxLayout;
	Layout_path->setMargin(0);
	Layout_path->addWidget(lbl_projectPath);
	Layout_path->addWidget(lbl_Path);
	Layout_path->addSpacerItem(spacer_path);
	
	// *****************************************************************
	grb_selectProject = new QGroupBox(tr("Select a Project"));
	
	lst_projects = new QListWidget(this);
	lst_projects->addItems(loadProjects()); 
	
	lbl_SortBy = new QLabel(tr("Sort by:"));
	cbx_sortBy = new QComboBox(this);
	cbx_sortBy->setMinimumSize ( 85, 22 );
	cbx_sortBy->addItem(tr("All"));
	cbx_sortBy->addItem(tr("Name"));
	cbx_sortBy->addItem(tr("Date"));
	spacer_sortBy = new QSpacerItem( 30, 10, QSizePolicy::Expanding, QSizePolicy::Minimum );
	
	bt_newProject = new QPushButton(tr("New Project"));
	bt_newProject->setMinimumSize ( 85, 25 );
	bt_addProject = new QPushButton(tr("Add Project"));
	bt_addProject->setMinimumSize ( 85, 25 );
	bt_setActive = new QPushButton(tr("Set Active"));
	bt_setActive->setMinimumSize ( 85, 25 );
	bt_removeFromList = new QPushButton(tr("Remove From List"));
	bt_removeFromList->setMinimumSize ( 85, 25 );
	bt_importList = new QPushButton(tr("Import List"));
	bt_importList->setMinimumSize ( 85, 25 );
	bt_exportList = new QPushButton(tr("Export List"));
	bt_exportList->setMinimumSize ( 85, 25 );
	bt_deleteProject = new QPushButton(tr("Delete Project"));
	bt_deleteProject->setMinimumSize ( 85, 25 );

	spacer_buttons1 = new QSpacerItem( 10, 30, QSizePolicy::Minimum, QSizePolicy::Expanding );
	spacer_buttons2 = new QSpacerItem( 10, 20, QSizePolicy::Minimum, QSizePolicy::Fixed );
	spacer_buttons3 = new QSpacerItem( 10, 20, QSizePolicy::Minimum, QSizePolicy::Fixed );
	spacer_buttons4 = new QSpacerItem( 10, 20, QSizePolicy::Minimum, QSizePolicy::Fixed );
	spacer_buttons5 = new QSpacerItem( 10, 20, QSizePolicy::Minimum, QSizePolicy::Fixed );
	
	Layout_buttons1 = new QVBoxLayout;
	Layout_buttons1->setMargin(0);
	Layout_buttons1->addWidget(bt_newProject);
	Layout_buttons1->addWidget(bt_addProject);
	Layout_buttons1->addSpacerItem(spacer_buttons2);
	Layout_buttons1->addWidget(bt_setActive);
	Layout_buttons1->addSpacerItem(spacer_buttons3);
	Layout_buttons1->addWidget(bt_removeFromList);
	Layout_buttons1->addSpacerItem(spacer_buttons4);
	Layout_buttons1->addWidget(bt_importList);
	Layout_buttons1->addWidget(bt_exportList);
	Layout_buttons1->addSpacerItem(spacer_buttons5);
	Layout_buttons1->addWidget(bt_deleteProject);
	Layout_buttons1->addSpacerItem(spacer_buttons1);
	
	Layout_sortBy = new QHBoxLayout;
	Layout_sortBy->setMargin(5);
	Layout_sortBy->addWidget(lbl_SortBy);
	Layout_sortBy->addWidget(cbx_sortBy);
	Layout_sortBy->addSpacerItem(spacer_sortBy);
	
	Layout_lst_sortBy = new QVBoxLayout;
	Layout_lst_sortBy->setMargin(5);
	Layout_lst_sortBy->addWidget(lst_projects);
	Layout_lst_sortBy->addLayout(Layout_sortBy);
	
	Layout_selectProject = new QHBoxLayout;
	Layout_selectProject->setMargin(5);
	Layout_selectProject->addLayout(Layout_lst_sortBy);
	Layout_selectProject->addLayout(Layout_buttons1);
	
	grb_selectProject->setLayout(Layout_selectProject);
	
	
	// *****************************************************************
	grb_defineFolderType = new QGroupBox(tr("Define Folder Type"));
	
	trw_folderType = new QTreeWidget(this);
	lbl_usePreset = new QLabel(tr("Use Preset:"));
	cbx_usePreset = new QComboBox(this);
	cbx_usePreset->setMinimumSize ( 85, 22 );
	cbx_usePreset->addItem(tr("Small Project"));
	cbx_usePreset->addItem(tr("Medium Project"));
	cbx_usePreset->addItem(tr("Big Project"));
	
	spacer_UsePreset = new QSpacerItem( 30, 10, QSizePolicy::Expanding, QSizePolicy::Minimum );
	spacer_buttons6 = new QSpacerItem( 10, 20, QSizePolicy::Minimum, QSizePolicy::Fixed );
	spacer_buttons7 = new QSpacerItem( 10, 20, QSizePolicy::Minimum, QSizePolicy::Fixed );
	spacer_buttons8 = new QSpacerItem( 10, 30, QSizePolicy::Minimum, QSizePolicy::Expanding );
	
	bt_makeDefault = new QPushButton(tr("Make Default"));
	bt_makeDefault->setMinimumSize ( 85, 25 );
	bt_addFolder = new QPushButton(tr("Add Folder"));;
	bt_addFolder->setMinimumSize ( 85, 25 );
	bt_deleteFolder = new QPushButton(tr("Delete Folder"));;
	bt_deleteFolder->setMinimumSize ( 85, 25 );
	
	lbl_folderType = new QLabel(tr("Folder Type"));
	cbx_folderType = new QComboBox(this);
	cbx_folderType->setMinimumSize ( 85, 22 );
	cbx_folderType->addItem(tr("General"));
	cbx_folderType->addItem(tr("Animations"));
	cbx_folderType->addItem(tr("Characters"));
	cbx_folderType->addItem(tr("Data"));
	cbx_folderType->addItem(tr("Material Library"));
	cbx_folderType->addItem(tr("Models"));
	cbx_folderType->addItem(tr("Scenes"));
	cbx_folderType->addItem(tr("Sounds"));
	cbx_folderType->addItem(tr("Textures"));
	
	
	Layout_usePreset = new QHBoxLayout;
	Layout_usePreset->setMargin(5);
	Layout_usePreset->addWidget(lbl_usePreset);
	Layout_usePreset->addWidget(cbx_usePreset);
	Layout_usePreset->addSpacerItem(spacer_UsePreset);
	
	Layout_trw_usePreset = new QVBoxLayout;
	Layout_trw_usePreset->setMargin(5);
	Layout_trw_usePreset->addWidget(trw_folderType);
	Layout_trw_usePreset->addLayout(Layout_usePreset);
	
	Layout_buttons2 = new QVBoxLayout;
	Layout_buttons2->setMargin(0);
	Layout_buttons2->addWidget(bt_makeDefault);
	Layout_buttons2->addWidget(bt_addFolder);
	Layout_buttons2->addSpacerItem(spacer_buttons6);
	Layout_buttons2->addWidget(lbl_folderType);
	Layout_buttons2->addWidget(cbx_folderType);
	Layout_buttons2->addSpacerItem(spacer_buttons7);
	Layout_buttons2->addWidget(bt_deleteFolder);
	Layout_buttons2->addSpacerItem(spacer_buttons8);
	
	Layout_folderType = new QHBoxLayout;
	Layout_folderType->setMargin(5);
	Layout_folderType->addLayout(Layout_trw_usePreset);
	Layout_folderType->addLayout(Layout_buttons2);
	
	grb_defineFolderType->setLayout(Layout_folderType);
	
	// *****************************************************************
	bt_close = new QPushButton(tr("Close"));
	bt_close->setFixedSize ( 85, 25 );
	spacer_footer = new QSpacerItem( 30, 10, QSizePolicy::Expanding, QSizePolicy::Minimum );
	
	Layout_footer = new QHBoxLayout;
	Layout_footer->setMargin(0);
	Layout_footer->addSpacerItem(spacer_footer);
	Layout_footer->addWidget(bt_close);
	
	// *****************************************************************
	Layout_grb = new QHBoxLayout;
	Layout_grb->setMargin(0);
	Layout_grb->addWidget(grb_selectProject);
	Layout_grb->addWidget(grb_defineFolderType);

	
	// *****************************************************************
	Layout_all = new QVBoxLayout;
	Layout_all->setMargin(12);
	Layout_all->setSpacing(5);
	Layout_all->addLayout(Layout_path);
	Layout_all->addLayout(Layout_grb);
	Layout_all->addLayout(Layout_footer);
	
	setLayout(Layout_all);
	
	connect(bt_newProject, SIGNAL(clicked()), SLOT(newProject_Slot()));
	connect(bt_addProject, SIGNAL(clicked()), SLOT(addProject_Slot()));
	connect(bt_removeFromList, SIGNAL(clicked()), SLOT(removeFromList_Slot()));
	connect(bt_close, SIGNAL(clicked()), SLOT(close()));
	connect(lst_projects, SIGNAL(itemSelectionChanged()), SLOT(selectProject_Slot()));
}

ProjectManager::~ProjectManager()
{
}


void ProjectManager::selectProject_Slot()
{
	QDir tmpDir = list[lst_projects->currentRow()];
	
	lbl_Path->setText(tmpDir.path());
}

void ProjectManager::newProject_Slot()
{
	/*
	QFileDialog *dialog = new QFileDialog( this, tr("New Project"));
	dialog->setFileMode(QFileDialog::Directory);
	dialog->setOptions(QFileDialog::ShowDirsOnly);
	dialog->setAcceptMode(QFileDialog::AcceptSave);
	dialog->exec();
	
	QDir *folder = new QDir(dialog->directory());
	//folder->mkdir("TesteFolder");
	

	lst_projects->addItem(folder->dirName());
	*/
}

void ProjectManager::addProject_Slot()
{	
	QDir dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"), "", QFileDialog::ShowDirsOnly);
	
	QString tmpPath = dir.path();
	
	if( !tmpPath.isEmpty() )
	{
		lbl_Path->setText(dir.path());
		lst_projects->addItem(dir.dirName());
		
		list << dir ; // adiciona um QDir a lista
	}
}

void ProjectManager::removeFromList_Slot()
{
	int index = lst_projects->currentRow();

	lst_projects->takeItem( index);
	list.removeAt( index );
	
}

QStringList ProjectManager::loadProjects()
{
	QStringList outList;
	
	// **********************
	// nao esquecer de mexer nisso
	// ler o arquivo xml com os projetos e carregar a lista
	// **********************
	//outList << "Default" << "Project1" << "Project2" << "Project3"; 
	
	
	
	return outList;
}

