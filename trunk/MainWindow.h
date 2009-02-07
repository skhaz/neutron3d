
#ifndef _MainWindow_h
#define _MainWindow_h

#include "ui/KeyboardMapping.h"
#include "ui/ProjectManager.h"
#include "ui/About.h"
#include "Preferences.h"


#include <QMainWindow>
#include <QMessageBox>
#include <QString>



class MainWindow : public QMainWindow
{
	public:
		MainWindow(QWidget* parent = 0);
		~MainWindow();

	private:
		Q_OBJECT

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

		// Help Menu
		QAction* helpAction;
		QAction* whatsNewAction;
		QAction* aboutAction;
		
		QMenu* fileMenu;

	protected slots:
		void openFileSlot();
		void saveFileSlot();
		void saveAsFileSlot();
		void importFileSlot();
		void exportAllFileSlot();
		void exportSelectedFileSlot();
		void projectManagerSlot();
        void keyBoardMappingSlot();
	
		void preferencesSlot();
		void aboutSlot();
		

};

#endif

