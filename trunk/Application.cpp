
#include "Application.h"
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QSplashScreen>
#include <QPixmap>
#include <QProgressBar>
#include <QLayout>

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

    QProgressBar* pBar = new QProgressBar(&splash);
    pBar->setAlignment(Qt::AlignBottom | Qt::AlignCenter);
    pBar->setMaximumSize(2000, 5);
    pBar->setGeometry(  0, 0, 700, 5 );
    pBar->setMinimum(0);
    pBar->setMaximum(99);
    pBar->setValue(0);

    QVBoxLayout* layout = new QVBoxLayout;
    QSpacerItem* verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);
    QSpacerItem* verticalSpacer1 = new QSpacerItem(40, 18, QSizePolicy::Fixed, QSizePolicy::Fixed);
    layout->setContentsMargins( 0,0,0,0);
    layout->addItem(verticalSpacer);
    layout->addWidget(pBar);
    layout->addItem(verticalSpacer1);
    splash.setLayout(layout);




    splash.showMessage ( "Loading components...", Qt::AlignLeft | Qt::AlignBottom, Qt::white );
    splash.show();
    processEvents();

    QMutex mutex;
    QWaitCondition sleep;

    mutex.lock();
    sleep.wait(&mutex, 1000); // pausa 1 segundos
    mutex.unlock();
    splash.showMessage ( "Open Neutron 3D - Version 0.1.0 Beta", Qt::AlignLeft | Qt::AlignBottom, Qt::white );
    mutex.lock();
    sleep.wait(&mutex, 2000); // pausa 2 segundos
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

