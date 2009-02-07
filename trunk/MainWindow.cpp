
#include "MainWindow.h"
#include <QAction>
#include <QIcon>
#include <QMenuBar>
#include <QFileDialog>



MainWindow::MainWindow(QWidget* parent)
: QMainWindow(parent)
{
	
	QMenuBar* menu = menuBar();

	// ************************************************
	//	File Menu
	// ************************************************
	newAction = new QAction("&New", this);
	newAction->setIcon(QIcon("/media/icon/newFile.png"));
	newAction->setShortcut(tr("Ctrl+n"));
	newAction->setStatusTip("Create new scene");
	connect(newAction, SIGNAL(triggered()), SLOT());

	openAction = new QAction("&Open", this);
	openAction->setIcon(QIcon("/media/icon/open.png"));
	openAction->setShortcut(tr("Ctrl+o"));
	openAction->setStatusTip("Open scene");
	connect(openAction, SIGNAL(triggered()), SLOT(openFileSlot()));

	saveAction = new QAction("&Save", this);
	saveAction->setIcon(QIcon("/media/icon/save.png"));
	saveAction->setShortcut(tr("Ctrl+S"));
	saveAction->setStatusTip("Save scene");
	connect(saveAction, SIGNAL(triggered()), SLOT(saveFileSlot()));

	saveAsAction = new QAction("Save Scene &As...", this);
	saveAsAction->setIcon(QIcon("/media/icon/save.png"));
	saveAsAction->setShortcut(tr("Shift+Ctrl+s"));
	saveAsAction->setStatusTip("Save Scene As");
	connect(saveAsAction, SIGNAL(triggered()), SLOT(saveAsFileSlot()));

	importAction = new QAction("&Import...", this);
	importAction->setIcon(QIcon("/media/icon/import.png"));
	importAction->setShortcut(tr("Ctrl+i"));
	importAction->setStatusTip("Import objetc or scene");
	connect(importAction, SIGNAL(triggered()), SLOT(importFileSlot()));

	exportAllAction = new QAction("&Export All...", this);
	exportAllAction->setIcon(QIcon("/media/icon/exportAll.png"));
	exportAllAction->setShortcut(tr(""));
	exportAllAction->setStatusTip("Export all objects in scene");
	connect(exportAllAction, SIGNAL(triggered()), SLOT(exportAllFileSlot()));

	exportSelectionAction = new QAction("Export S&election...", this);
	exportSelectionAction->setIcon(QIcon("/media/icon/exportSelection.png"));
	exportSelectionAction->setShortcut(tr(""));
	exportSelectionAction->setStatusTip("Export Selected Objects");
	connect(exportSelectionAction, SIGNAL(triggered()), SLOT());

	projectManagerAction = new QAction("Project &Manager", this);
	projectManagerAction->setIcon(QIcon("/media/icon/projectManager.png"));
	projectManagerAction->setShortcut(tr("7"));
	projectManagerAction->setStatusTip("Project Manager");
	connect(projectManagerAction, SIGNAL(triggered()), SLOT(projectManagerSlot()));

	recentFilesAction = new QAction("Re&cent Files", this);
	recentFilesAction->setIcon(QIcon("/media/icon/recentFiles.png"));
	recentFilesAction->setShortcut(tr(""));
	recentFilesAction->setStatusTip("Recent Files");
	connect(recentFilesAction, SIGNAL(triggered()), SLOT());

	recentProjectAction = new QAction("Recent Pro&ject", this);
	recentProjectAction->setIcon(QIcon("/media/icon/recentProject.png"));
	recentProjectAction->setShortcut(tr(""));
	recentProjectAction->setStatusTip("Recent Project");
    connect(recentProjectAction, SIGNAL(triggered()), SLOT());

	exitAction = new QAction("&Quit", this);
	exitAction->setIcon(QIcon("/media/icon/door_out.png"));
	exitAction->setShortcut(tr("Ctrl+q"));
	exitAction->setStatusTip("Quit application");
	connect(exitAction, SIGNAL(triggered()), SLOT(close()));

	fileMenu = menu->addMenu("&File"); 
	 
	fileMenu->addAction(newAction);
	fileMenu->addAction(openAction);
	fileMenu->addSeparator();
	fileMenu->addAction(saveAction);
	fileMenu->addAction(saveAsAction);
	fileMenu->addSeparator();
	fileMenu->addAction(importAction);
	fileMenu->addAction(exportAllAction);
	fileMenu->addAction(exportSelectionAction);
	fileMenu->addSeparator();
	fileMenu->addAction(projectManagerAction);
	fileMenu->addSeparator();
	fileMenu->addAction(recentFilesAction);
	fileMenu->addAction(recentProjectAction);
	fileMenu->addSeparator();
	fileMenu->addAction(exitAction); 

	

	// ************************************************
	//	Edit Menu
	// ************************************************
	undoAction = new QAction("&Undo", this);
	undoAction->setIcon(QIcon("/media/icon/undo.png"));
	undoAction->setShortcut(tr("Ctrl+z"));
	undoAction->setStatusTip("Undo");
	connect(undoAction, SIGNAL(triggered()), SLOT());

	rendoAction = new QAction("&Rendo", this);
	rendoAction->setIcon(QIcon("/media/icon/rendo.png"));
	rendoAction->setShortcut(tr("Shift+Ctrl+z"));
	rendoAction->setStatusTip("Rendo");
	connect(rendoAction, SIGNAL(triggered()), SLOT());

	cutAction = new QAction("Cut", this);
	cutAction->setIcon(QIcon("/media/icon/cut.png"));
	cutAction->setShortcut(tr("Ctrl+x"));
	cutAction->setStatusTip("Cut");
	connect(cutAction, SIGNAL(triggered()), SLOT());

	copyAction = new QAction("Copy", this);
	copyAction->setIcon(QIcon("/media/icon/copy.png"));
	copyAction->setShortcut(tr("Ctrl+c"));
	copyAction->setStatusTip("Copy");
	connect(copyAction, SIGNAL(triggered()), SLOT());

	pasteAction = new QAction("Paste", this);
	pasteAction->setIcon(QIcon("/media/icon/paste.png"));
	pasteAction->setShortcut(tr("Ctrl+v"));
	pasteAction->setStatusTip("Paste");
	connect(pasteAction, SIGNAL(triggered()), SLOT());

	deleteAction = new QAction("Delete", this);
	deleteAction->setIcon(QIcon("/media/icon/delete.png"));
	deleteAction->setShortcut(tr(""));
	deleteAction->setStatusTip("Delete");
	connect(deleteAction, SIGNAL(triggered()), SLOT());

	selectAllAction = new QAction("Select All", this);
	selectAllAction->setIcon(QIcon("/media/icon/selectAll.png"));
	selectAllAction->setShortcut(tr("Ctrl+a"));
	selectAllAction->setStatusTip("Select All");
	connect(selectAllAction, SIGNAL(triggered()), SLOT());

	selectBranchAction = new QAction("Select Branch", this);
	selectBranchAction->setIcon(QIcon("/media/icon/selectBranch.png"));
	selectBranchAction->setShortcut(tr(""));
	selectBranchAction->setStatusTip("Select Branch");
	connect(selectBranchAction, SIGNAL(triggered()), SLOT());

	selectTreeAction = new QAction("Select Tree", this);
	selectTreeAction->setIcon(QIcon("/media/icon/selectTree.png"));
	selectTreeAction->setShortcut(tr(""));
	selectTreeAction->setStatusTip("Select Tree");
	connect(selectTreeAction, SIGNAL(triggered()), SLOT());

	PreferenceshAction = new QAction("Preferences...", this);
	PreferenceshAction->setShortcut(tr(""));
	PreferenceshAction->setStatusTip("Preferences");
	connect(PreferenceshAction, SIGNAL(triggered()), SLOT());

    keyBoardMappingAction = new QAction("Keyboard Mapping", this);
    keyBoardMappingAction->setShortcut(tr("6"));
    keyBoardMappingAction->setStatusTip("Keyboard Mapping");
    connect(keyBoardMappingAction, SIGNAL(triggered()), SLOT(keyBoardMappingSlot()));

	
	fileMenu = menu->addMenu("&Edit");

	fileMenu->addAction(undoAction);
	fileMenu->addAction(rendoAction);
	fileMenu->addSeparator();
	fileMenu->addAction(cutAction);
	fileMenu->addAction(copyAction);
	fileMenu->addAction(pasteAction);
	fileMenu->addAction(deleteAction);
	fileMenu->addSeparator();
	fileMenu->addAction(selectAllAction);
	fileMenu->addAction(selectBranchAction);
	fileMenu->addAction(selectTreeAction);
	fileMenu->addSeparator();
	fileMenu->addAction(PreferenceshAction);
    fileMenu->addAction(keyBoardMappingAction);

		


	
	// ************************************************
	//	View Menu
	// ************************************************
	fileMenu = menu->addMenu("&View"); 

	// ************************************************
	//	Display Menu
	// ************************************************
	fileMenu = menu->addMenu("&Display"); 

	// ************************************************
	//	Window Menu
	// ************************************************
	fileMenu = menu->addMenu("&Window"); 


	// ************************************************
	//	Help Menu
	// ************************************************
	helpAction = new QAction("Neutron 3D Help", this);
	helpAction->setIcon(QIcon("/media/icon/neutroHelp.png"));
	helpAction->setShortcut(tr(""));
	helpAction->setStatusTip("Neutron 3D Help");
	connect(helpAction, SIGNAL(triggered()), SLOT());

	whatsNewAction = new QAction("What's New in Neutron 3D", this);
	whatsNewAction->setIcon(QIcon("/media/icon/whatsNew.png"));
	whatsNewAction->setShortcut(tr(""));
	whatsNewAction->setStatusTip("What's New in Neutron 3");
	connect(whatsNewAction, SIGNAL(triggered()), SLOT());

	aboutAction = new QAction("About", this);
	aboutAction->setIcon(QIcon("/media/icon/about.png"));
	aboutAction->setShortcut(tr(""));
	aboutAction->setStatusTip("About Neutron 3D");
	connect(aboutAction, SIGNAL(triggered()), SLOT(aboutSlot()));

	fileMenu = menu->addMenu("&Help"); 

	fileMenu->addAction(helpAction);
	fileMenu->addAction(whatsNewAction);
	fileMenu->addSeparator();
	fileMenu->addAction(aboutAction);
	

}

MainWindow::~MainWindow()
{
}

void MainWindow::keyBoardMappingSlot()
{
   KeyboardMapping* k = new KeyboardMapping(this);
    k->show();
}

void MainWindow::projectManagerSlot()
{
	ProjectManager* pm = new ProjectManager(this);
	pm->show();
	
}

void MainWindow::openFileSlot()
{
	QFileDialog* openFileDialog = new QFileDialog(this);
	openFileDialog->setWindowTitle("Open Scene File");
	openFileDialog->setViewMode(QFileDialog::List);
	openFileDialog->setAcceptMode(QFileDialog::AcceptOpen);
	openFileDialog->getOpenFileName(this, tr("Open Scene"), "home", tr("Scene Files (*.nkb *.nka)"));
}

void MainWindow::saveFileSlot()
{
	QFileDialog* saveFileDialog = new QFileDialog(this);
	saveFileDialog->setWindowTitle("Save Scene");
	saveFileDialog->setViewMode(QFileDialog::List);
	saveFileDialog->setAcceptMode(QFileDialog::AcceptSave);
	saveFileDialog->getSaveFileName(this, tr("Save Scene"), "untitled", tr("Scene Files (*.nkb *.nka)"));
}

void MainWindow::saveAsFileSlot()
{
	QFileDialog* saveAsFileDialog = new QFileDialog(this);
	saveAsFileDialog->setWindowTitle("Save Scene As");
	saveAsFileDialog->setViewMode(QFileDialog::List);
	saveAsFileDialog->setAcceptMode(QFileDialog::AcceptSave);
	saveAsFileDialog->getSaveFileName(this, tr("Save Scene As"), "untitled", tr("Scene Files (*.nkb *.nka)"));
}

void MainWindow::importFileSlot()
{
	QFileDialog* importFileDialog = new QFileDialog(this);
	importFileDialog->setWindowTitle("Import  File");
	importFileDialog->setViewMode(QFileDialog::List);
	importFileDialog->setAcceptMode(QFileDialog::AcceptOpen);
	importFileDialog->getOpenFileName(this, tr("Import File"), "home", tr("Import Files (*.nkb *.nka *.fbx *.obj *.3ds *.rib *.dwg)"));
}

void MainWindow::exportAllFileSlot()
{
	QFileDialog* exportAllFileDialog = new QFileDialog(this);
	exportAllFileDialog->setWindowTitle("Export Scene");
	exportAllFileDialog->setViewMode(QFileDialog::List);
	exportAllFileDialog->setAcceptMode(QFileDialog::AcceptSave);
	exportAllFileDialog->getSaveFileName(this, tr("Export Scene"), "untitled", tr("Scene Files (*.nkb *.nka *.fbx *.obj)"));
}

void MainWindow::aboutSlot()
{
	About* abt = new About(this);
	abt->show();
}