
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
#include <QPixmap>
#include <QLayout>



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
        QPixmap pixmap;

        QVBoxLayout *layout;
        QSpacerItem *verticalSpacer;
        QSpacerItem *verticalSpacer1;
		

		MainWindow* mainWindow;
};

#endif

