
#include "Application.h"
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QSplashScreen>
#include <QPixmap>

// Remover depois serve apenas para o slash screen
#include <QTime>
#include <QMutex>
#include <QWaitCondition>



Application::Application(int& argc, char** argv): QApplication(argc, argv)
	, mainWindow(new MainWindow)
{
    // Splash Screen
    QPixmap pixmap("media/themes/dark/splash.png");
    QSplashScreen splash(pixmap);
    splash.show();
    processEvents();

    QMutex mutex;
    QWaitCondition sleep;

    mutex.lock();
    sleep.wait(&mutex, 3000); // pausa 2 segundos
    mutex.unlock();
    splash.finish(mainWindow);




	QTimer::singleShot(0, this, SLOT(postLaunch()));
}

Application::~Application()
{
	delete mainWindow;
}

void Application::postLaunch()
{
	mainWindow->showMaximized();

	// carrega o stylesheet	
	loadStyle();

 
	mainWindow->showMaximized();

}

void Application::loadStyle()
{
    QString filename("media/neutro3D_styleSheet.css");
    QFile file(filename);
	
	if (file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		QString style = QTextStream(&file).readAll();
		file.close();
		
		setStyleSheet(style); 
	} 
}

