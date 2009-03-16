#ifndef _MAINWINDOW_H
#define _MAINWINDOW_H

#include "ui/KeyboardMapping.h"
#include "ui/ProjectManager.h"
#include "Preferences.h"
#include "About.h"
#include "glPanel.h"


#include <QMainWindow>


class QAction;
class QMenu;


class MainWindow : public QMainWindow
{
	Q_OBJECT
	
	public:
		MainWindow(QWidget* parent = 0);
		~MainWindow();

	private:
	GLPanel *glPanel;
	
		void createMenus();
		void createActions();
	
	QMenu *fileMenu;
	QMenu *editMenu;
	QMenu *viewMenu;
	QMenu *LayoutMenu;
	QMenu *displayMenu;
	QMenu *windowMenu;
	QMenu *helpMenu;
	
		// File Menu
		QAction* newAction;
		QAction* openAction;
		QAction* saveAction;
		QAction* saveAsAction;
		QAction* importAction;
		QAction* exportAllAction;
		QAction* exportSelectionAction;
		QAction* projectManagerAction;
		QAction* recentFilesAction;
		QAction* recentProjectAction;
		QAction* exitAction;

		// Edit Menu
		QAction* undoAction;
		QAction* rendoAction;
		QAction* cutAction;
		QAction* copyAction;
		QAction* pasteAction;
		QAction* deleteAction;
		QAction* selectAllAction;
		QAction* selectBranchAction;
		QAction* selectTreeAction;
		QAction* PreferenceshAction;
        QAction* keyBoardMappingAction;
	
		// View Menu
		QAction* addLayoutAction;
		QAction* dellLayoutAction;	
		QAction* perspectiveAction;	

		// Help Menu
		QAction* helpAction;
		QAction* whatsNewAction;
		QAction* aboutAction;
		
		

	private	slots:
		void openFileSlot();
		void saveFileSlot();
		void saveAsFileSlot();
		void importFileSlot();
		void exportAllFileSlot();
		void exportSelectedFileSlot();
		void projectManagerSlot();
        void keyBoardMappingSlot();
		void perspectiveSlot();
	
		void preferencesSlot();
		void aboutSlot();
	
	protected:
		void contextMenuEvent(QContextMenuEvent *event);
};

#endif

