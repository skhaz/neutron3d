
#ifndef _Application_h
#define _Application_h

#include "MainWindow.h"

#include <QApplication>
#include <QCoreApplication>
#include <QMessageBox>
#include <QString>
#include <QTimer>



class Application : public QApplication
{
	public:
		Application(int& argc, char** argv);
		~Application();

	protected slots:
		void postLaunch();

	private:
		Q_OBJECT

		MainWindow* mainWindow;
};

#endif

