
#include "Application.h"
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QSplashScreen>
#include <QPixmap>
#include <QProgressBar>
#include <QLayout>
#include <QString>


// Remover depois serve apenas para o slash screen
#include <QTime>
#include <QMutex>
#include <QWaitCondition>



Application::Application(int& argc, char** argv): QApplication(argc, argv)
	, mainWindow(new MainWindow)
{
	splashScreen();

	QTimer::singleShot(0, this, SLOT(postLaunch()));
}

Application::~Application()
{
	delete mainWindow;
}

void Application::postLaunch()
{
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

void Application::splashScreen()
{
    QPixmap pixmap("media/themes/dark/splash.png");
    QSplashScreen splash(pixmap);
	
    QProgressBar* pBar = new QProgressBar(&splash);
    pBar->setAlignment(Qt::AlignBottom | Qt::AlignCenter);
    pBar->setMaximumSize(2000, 6);
    pBar->setGeometry(  QRect(0, 0, 700, 6) );
    pBar->setMinimum(0);
    pBar->setMaximum(99);
    pBar->setValue(0);
	pBar->setTextVisible ( false );
	pBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
										  "color: rgb(215, 215, 215);\n"
										  "background-color: black;\n"
										  "text-align: center;\n"
										  "}\n"
										  "QProgressBar::chunk { \n"
										  "background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(60, 75, 75, 255), \n"
										  "		stop:0.5 rgba(36, 45, 45, 255), stop:0.59 rgba(49, 61, 61, 255), stop:1 rgba(142, 177, 177, 255));\n"
										  "}"));
	
    QVBoxLayout* layout = new QVBoxLayout;
    QSpacerItem* verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);
    QSpacerItem* verticalSpacer1 = new QSpacerItem(40, 23, QSizePolicy::Fixed, QSizePolicy::Fixed);
	
    layout->setContentsMargins( 0,0,0,0);
    layout->addItem(verticalSpacer);
    layout->addWidget(pBar);
    layout->addItem(verticalSpacer1);
    
	splash.setLayout(layout);
	splash.show();
	splash.showMessage ( "Open Neutron 3D - Version 0.1.0 Beta ", Qt::AlignLeft | Qt::AlignBottom, Qt::white );


	processEvents();
	QMutex mutex;
	QWaitCondition sleep;
	mutex.lock();
	sleep.wait(&mutex, 1000); // pausa 1 segundos
	mutex.unlock();
	
	for (int i = 0; i <= 99; i++)
	{
		pBar->setValue(i);

		splash.showMessage (QString("Loading components... %1%").arg(i), Qt::AlignLeft | Qt::AlignBottom, Qt::white );
		
		// pausa
		mutex.lock();
        sleep.wait(&mutex, 10);
		mutex.unlock();

		processEvents();
	}

    splash.finish(mainWindow);	
}

