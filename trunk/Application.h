
#ifndef _Application_h
#define _Application_h

#include "MainWindow.h"

#include <QApplication>
#include <QFile>
#include <QString>
#include <QTimer>
#include <QTextStream>



class Application : public QApplication
{
	public:
		Application(int& argc, char** argv);
		~Application();
	
		void loadStyle();

	protected slots:
		void postLaunch();

	private:
		Q_OBJECT
	
		

		MainWindow* mainWindow;
};

#endif

