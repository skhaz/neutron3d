#include "Application.h"
#include <QFile>
#include <QTextStream>

// Remover depois serve apenas para o slash screen
#include <QTime>
#include <QMutex>
#include <QWaitCondition>

Application::Application(int& argc, char** argv)
: QApplication(argc, argv)
, mainWindow(new MainWindow)
,layout(new QVBoxLayout)
,verticalSpacer(new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding))
,verticalSpacer1(new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Fixed))
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
    QString filename("neutro3D_styleSheet.css");
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
    QPixmap pixmap("splash.png");
    splash = new QSplashScreen(pixmap);
    splash->showMessage ( "Open Neutron 3D - Version 0.1.0 Beta ",
                          Qt::AlignLeft | Qt::AlignBottom, Qt::white );
    splash->setFixedSize ( 700, 400 );
	
    pBar = new QProgressBar(splash);
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
	

    layout->setContentsMargins( 0,0,0,0);
    layout->addItem(verticalSpacer);
    layout->addWidget(pBar);
    layout->addItem(verticalSpacer1);
    
    splash->setLayout(layout);
    splash->show();



	processEvents();
	QMutex mutex;
	QWaitCondition sleep;
	mutex.lock();
	sleep.wait(&mutex, 50); // pausa meio segundos
	mutex.unlock();
	
	for (int i = 0; i <= 99; i++)
	{
		pBar->setValue(i);

        splash->showMessage (QString("Loading components... %1%").arg(i), Qt::AlignLeft | Qt::AlignBottom, Qt::white );
		
		// pausa
		mutex.lock();
        sleep.wait(&mutex, 1);
		mutex.unlock();

		processEvents();
	}

    splash->finish(mainWindow);
}

