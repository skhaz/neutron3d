#ifndef _APPLICATION_H
#define _APPLICATION_H

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
	
private:
	void loadStyle();
	void splashScreen();
	QSplashScreen *splash;
	QProgressBar *pBar;
	QPixmap pixmap;
	
	QVBoxLayout *layout;
	QSpacerItem *verticalSpacer;
	QSpacerItem *verticalSpacer1;
	
	
	MainWindow* mainWindow;	

protected slots:
	void postLaunch();
};

#endif

