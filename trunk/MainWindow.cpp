#include <QtGUI>

#include "MainWindow.h"



MainWindow::MainWindow(QWidget* parent)
: QMainWindow(parent)
{	
	createActions();
	createMenus();
	
	glPanel = new GLPanel(this);
	glPanel->setGeometry(0, 0, width(), height());
	
	
	QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->setMargin(0);
    mainLayout->addWidget(glPanel);
    setLayout(mainLayout);
	 
	
	setWindowTitle(tr("Neutron 3D v 0.0.1 - \\project/neutron/scene_001.nkb "));
}

MainWindow::~MainWindow()
{
}

void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{
	/*
	QMenu menu(this);
	menu.addAction(cutAction);
	menu.addAction(copyAction);
	menu.addAction(pasteAction);
	menu.addAction(deleteAction);
	menu.addSeparator();
	menu.addAction(PreferenceshAction);
	menu.exec(event->globalPos());
	 */
}

void MainWindow::createMenus()
{	
	// ************************************************
	//	File Menu
	// ************************************************
	fileMenu = menuBar()->addMenu(tr("&File")); 
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
	editMenu = menuBar()->addMenu(tr("&Edit"));
	editMenu->addAction(undoAction);
	editMenu->addAction(rendoAction);
	editMenu->addSeparator();
	editMenu->addAction(cutAction);
	editMenu->addAction(copyAction);
	editMenu->addAction(pasteAction);
	editMenu->addAction(deleteAction);
	editMenu->addSeparator();
	editMenu->addAction(selectAllAction);
	editMenu->addAction(selectBranchAction);
	editMenu->addAction(selectTreeAction);
	editMenu->addSeparator();
	editMenu->addAction(PreferenceshAction);
    editMenu->addAction(keyBoardMappingAction);
	
	// ************************************************
	//	View Menu
	// ************************************************
	viewMenu = menuBar()->addMenu(tr("&View")); 
		LayoutMenu = viewMenu->addMenu(tr("Layout"));
		LayoutMenu->addAction(addLayoutAction);
		LayoutMenu->addAction(dellLayoutAction);
	
	// ************************************************
	//	Display Menu
	// ************************************************
	displayMenu = menuBar()->addMenu(tr("&Display")); 
	
	// ************************************************
	//	Window Menu
	// ************************************************
	windowMenu = menuBar()->addMenu(tr("&Window")); 
	
	// ************************************************
	//	Help Menu
	// ************************************************
	helpMenu = menuBar()->addMenu(tr("&Help")); 
	helpMenu->addAction(helpAction);
	helpMenu->addAction(whatsNewAction);
	helpMenu->addSeparator();
	helpMenu->addAction(aboutAction);
}

void MainWindow::createActions()
{
	// ************************************************
	//	File Menu
	// ************************************************
	newAction = new QAction(tr("&New"), this);
	newAction->setIcon(QIcon("/media/icon/newFile.png"));
	newAction->setShortcut(tr("Ctrl+n"));
	newAction->setStatusTip(tr("Create new scene"));
	connect(newAction, SIGNAL(triggered()), SLOT());
	
	openAction = new QAction(tr("&Open"), this);
	openAction->setIcon(QIcon("/media/icon/open.png"));
	openAction->setShortcut(tr("Ctrl+o"));
	openAction->setStatusTip(tr("Open scene"));
	connect(openAction, SIGNAL(triggered()), SLOT(openFileSlot()));
	
	saveAction = new QAction(tr("&Save"), this);
	saveAction->setIcon(QIcon("/media/icon/save.png"));
	saveAction->setShortcut(tr("Ctrl+S"));
	saveAction->setStatusTip(tr("Save scene"));
	connect(saveAction, SIGNAL(triggered()), SLOT(saveFileSlot()));
	
	saveAsAction = new QAction(tr("Save Scene &As..."), this);
	saveAsAction->setIcon(QIcon("/media/icon/save.png"));
	saveAsAction->setShortcut(tr("Shift+Ctrl+s"));
	saveAsAction->setStatusTip(tr("Save Scene As"));
	connect(saveAsAction, SIGNAL(triggered()), SLOT(saveAsFileSlot()));
	
	importAction = new QAction(tr("&Import..."), this);
	importAction->setIcon(QIcon("/media/icon/import.png"));
	importAction->setShortcut(tr("Ctrl+i"));
	importAction->setStatusTip(tr("Import objetc or scene"));
	connect(importAction, SIGNAL(triggered()), SLOT(importFileSlot()));
	
	exportAllAction = new QAction(tr("&Export All..."), this);
	exportAllAction->setIcon(QIcon("/media/icon/exportAll.png"));
	exportAllAction->setShortcut(tr(""));
	exportAllAction->setStatusTip(tr("Export all objects in scene"));
	connect(exportAllAction, SIGNAL(triggered()), SLOT(exportAllFileSlot()));
	
	exportSelectionAction = new QAction(tr("Export S&election..."), this);
	exportSelectionAction->setIcon(QIcon("/media/icon/exportSelection.png"));
	exportSelectionAction->setShortcut(tr(""));
	exportSelectionAction->setStatusTip(tr("Export Selected Objects"));
	connect(exportSelectionAction, SIGNAL(triggered()), SLOT(exportSelectedFileSlot()));
	
	projectManagerAction = new QAction(tr("Project &Manager"), this);
	projectManagerAction->setIcon(QIcon("/media/icon/projectManager.png"));
    projectManagerAction->setShortcut(tr("Ctrl+7"));
	projectManagerAction->setStatusTip(tr("Project Manager"));
	connect(projectManagerAction, SIGNAL(triggered()), SLOT(projectManagerSlot()));
	
	recentFilesAction = new QAction(tr("Re&cent Files"), this);
	recentFilesAction->setIcon(QIcon("/media/icon/recentFiles.png"));
	recentFilesAction->setShortcut(tr(""));
	recentFilesAction->setStatusTip(tr("Recent Files"));
	connect(recentFilesAction, SIGNAL(triggered()), SLOT());
	
	recentProjectAction = new QAction(tr("Recent Pro&ject"), this);
	recentProjectAction->setIcon(QIcon("/media/icon/recentProject.png"));
	recentProjectAction->setShortcut(tr(""));
	recentProjectAction->setStatusTip(tr("Recent Project"));
    connect(recentProjectAction, SIGNAL(triggered()), SLOT());
	
	exitAction = new QAction(tr("&Quit"), this);
	exitAction->setIcon(QIcon("/media/icon/door_out.png"));
	exitAction->setShortcut(tr("Ctrl+q"));
	exitAction->setStatusTip(tr("Quit application"));
	connect(exitAction, SIGNAL(triggered()), SLOT(close()));
	
	// ************************************************
	//	Edit Menu
	// ************************************************
	undoAction = new QAction(tr("&Undo"), this);
	undoAction->setIcon(QIcon("/media/icon/undo.png"));
	undoAction->setShortcut(tr("Ctrl+z"));
	undoAction->setStatusTip(tr("Undo"));
	connect(undoAction, SIGNAL(triggered()), SLOT());
	
	rendoAction = new QAction(tr("&Rendo"), this);
	rendoAction->setIcon(QIcon("/media/icon/rendo.png"));
	rendoAction->setShortcut(tr("Shift+Ctrl+z"));
	rendoAction->setStatusTip(tr("Rendo"));
	connect(rendoAction, SIGNAL(triggered()), SLOT());
	
	cutAction = new QAction(tr("Cut"), this);
	cutAction->setIcon(QIcon("/media/icon/cut.png"));
	cutAction->setShortcut(tr("Ctrl+x"));
	cutAction->setStatusTip(tr("Cut"));
	connect(cutAction, SIGNAL(triggered()), SLOT());
	
	copyAction = new QAction(tr("Copy"), this);
	copyAction->setIcon(QIcon("/media/icon/copy.png"));
	copyAction->setShortcut(tr("Ctrl+c"));
	copyAction->setStatusTip(tr("Copy"));
	connect(copyAction, SIGNAL(triggered()), SLOT());
	
	pasteAction = new QAction(tr("Paste"), this);
	pasteAction->setIcon(QIcon("/media/icon/paste.png"));
	pasteAction->setShortcut(tr("Ctrl+v"));
	pasteAction->setStatusTip(tr("Paste"));
	connect(pasteAction, SIGNAL(triggered()), SLOT());
	
	deleteAction = new QAction(tr("Delete"), this);
	deleteAction->setIcon(QIcon("/media/icon/delete.png"));
	deleteAction->setShortcut(tr("Del"));
	deleteAction->setStatusTip(tr("Delete"));
	connect(deleteAction, SIGNAL(triggered()), SLOT());
	
	selectAllAction = new QAction(tr("Select All"), this);
	selectAllAction->setIcon(QIcon("/media/icon/selectAll.png"));
	selectAllAction->setShortcut(tr("Ctrl+a"));
	selectAllAction->setStatusTip(tr("Select All"));
	connect(selectAllAction, SIGNAL(triggered()), SLOT());
	
	selectBranchAction = new QAction(tr("Select Branch"), this);
	selectBranchAction->setIcon(QIcon("/media/icon/selectBranch.png"));
	selectBranchAction->setShortcut(tr(""));
	selectBranchAction->setStatusTip(tr("Select Branch"));
	connect(selectBranchAction, SIGNAL(triggered()), SLOT());
	
	selectTreeAction = new QAction(tr("Select Tree"), this);
	selectTreeAction->setIcon(QIcon("/media/icon/selectTree.png"));
	selectTreeAction->setShortcut(tr(""));
	selectTreeAction->setStatusTip(tr("Select Tree"));
	connect(selectTreeAction, SIGNAL(triggered()), SLOT());
	
	PreferenceshAction = new QAction(tr("Preferences..."), this);
	PreferenceshAction->setShortcut(tr(""));
	PreferenceshAction->setStatusTip(tr("Preferences"));
	connect(PreferenceshAction, SIGNAL(triggered()), SLOT(preferencesSlot()));
	
    keyBoardMappingAction = new QAction(tr("Keyboard Mapping"), this);
    keyBoardMappingAction->setShortcut(tr("Ctrl+6"));
    keyBoardMappingAction->setStatusTip(tr("Keyboard Mapping"));
    connect(keyBoardMappingAction, SIGNAL(triggered()), SLOT(keyBoardMappingSlot()));
	
	// ************************************************
	//	View Menu
	// ************************************************
	addLayoutAction = new QAction(tr("Add New Layout"), this);
	addLayoutAction->setShortcut(tr(""));
	addLayoutAction->setStatusTip(tr("Add New Layout"));
	connect(addLayoutAction, SIGNAL(triggered()), SLOT());
	
	dellLayoutAction = new QAction(tr("Delete Layout"), this);
	dellLayoutAction->setShortcut(tr(""));
	dellLayoutAction->setStatusTip(tr("Delete Layout"));
	connect(dellLayoutAction, SIGNAL(triggered()), SLOT());

	// ************************************************
	//	Display Menu
	// ************************************************
	
	
	// ************************************************
	//	Window Menu
	// ************************************************
	
	
	
	// ************************************************
	//	Help Menu
	// ************************************************
	helpAction = new QAction(tr("Neutron 3D Help"), this);
	helpAction->setIcon(QIcon("/media/icon/neutroHelp.png"));
	helpAction->setShortcut(tr(""));
	helpAction->setStatusTip(tr("Neutron 3D Help"));
	connect(helpAction, SIGNAL(triggered()), SLOT());
	
	whatsNewAction = new QAction(tr("What's New in Neutron 3D"), this);
	whatsNewAction->setIcon(QIcon("/media/icon/whatsNew.png"));
	whatsNewAction->setShortcut(tr(""));
	whatsNewAction->setStatusTip(tr("What's New in Neutron 3"));
	connect(whatsNewAction, SIGNAL(triggered()), SLOT());
	
	aboutAction = new QAction(tr("About"), this);
	aboutAction->setIcon(QIcon("/media/icon/about.png"));
	aboutAction->setShortcut(tr(""));
	aboutAction->setStatusTip(tr("About Neutron 3D"));
	connect(aboutAction, SIGNAL(triggered()), SLOT(aboutSlot()));
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
	openFileDialog->setWindowTitle(tr("Open Scene File"));
	openFileDialog->setViewMode(QFileDialog::List);
	openFileDialog->setAcceptMode(QFileDialog::AcceptOpen);
    openFileDialog->getOpenFileName(this, tr("Open Scene"), "", tr("Scene Files (*.nkb *.nka)"));
}

void MainWindow::saveFileSlot()
{
	QFileDialog* saveFileDialog = new QFileDialog(this);
	saveFileDialog->setWindowTitle(tr("Save Scene"));
	saveFileDialog->setViewMode(QFileDialog::List);
	saveFileDialog->setAcceptMode(QFileDialog::AcceptSave);
	saveFileDialog->getSaveFileName(this, tr("Save Scene"), "untitled", tr("Scene Files (*.nkb *.nka)"));
}

void MainWindow::saveAsFileSlot()
{
	QFileDialog* saveAsFileDialog = new QFileDialog(this);
	saveAsFileDialog->setWindowTitle(tr("Save Scene As"));
	saveAsFileDialog->setViewMode(QFileDialog::List);
	saveAsFileDialog->setAcceptMode(QFileDialog::AcceptSave);
	saveAsFileDialog->getSaveFileName(this, tr("Save Scene As"), "untitled", tr("Scene Files (*.nkb *.nka)"));
}

void MainWindow::importFileSlot()
{
	QFileDialog* importFileDialog = new QFileDialog(this);
	importFileDialog->setWindowTitle(tr("Import  File"));
	importFileDialog->setViewMode(QFileDialog::List);
	importFileDialog->setAcceptMode(QFileDialog::AcceptOpen);
    importFileDialog->getOpenFileName(this, tr("Import File"), "", tr("Import Files (*.nkb *.nka *.fbx *.obj *.3ds *.rib *.dwg)"));
}

void MainWindow::exportAllFileSlot()
{
	QFileDialog* exportAllFileDialog = new QFileDialog(this);
	exportAllFileDialog->setWindowTitle(tr("Export Scene"));
	exportAllFileDialog->setViewMode(QFileDialog::List);
	exportAllFileDialog->setAcceptMode(QFileDialog::AcceptSave);
	exportAllFileDialog->getSaveFileName(this, tr("Export Scene"), "untitled", tr("Export Files (*.nkb *.nka *.fbx *.obj)"));
}

void MainWindow::exportSelectedFileSlot()
{
	QFileDialog* exportSelectedFileDialog = new QFileDialog(this);
	exportSelectedFileDialog->setWindowTitle(tr("Export Selected Objects"));
	exportSelectedFileDialog->setViewMode(QFileDialog::List);
	exportSelectedFileDialog->setAcceptMode(QFileDialog::AcceptSave);
	exportSelectedFileDialog->getSaveFileName(this, tr("Export Selected Objects"), "untitled", tr("Export Files (*.nkb *.nka *.fbx *.obj)"));
}

 void MainWindow::preferencesSlot()
{	
	Preferences* pref = new Preferences(this);
	pref->exec();
}
 
void MainWindow::aboutSlot()
{
	About* abt = new About(this);
	abt->exec();
}
