
#ifndef _Application_h
#define _Application_h

#include "MainWindow.h"

#include <QApplication>
#include <QFile>
#include <QString>
#include <QTimer>
#include <QTextStream>
#include <QSplashScreen>
#include <QProgressBar>



class Application : public QApplication
{
    Q_OBJECT

	public:
		Application(int& argc, char** argv);
		~Application();
	
		void loadStyle();
		void splashScreen();

	protected slots:
		void postLaunch();

	private:
        QSplashScreen *splash;
        QProgressBar *pBar;
		

		MainWindow* mainWindow;
};

#endif

