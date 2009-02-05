
#include "Application.h"
#include <QFile>
#include <QString>
#include <QTextStream>



Application::Application(int& argc, char** argv)
	: QApplication(argc, argv)
	, mainWindow(new MainWindow)
{
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
    QString filename("media/neutro3D_styleSheet.css");
    QFile file(filename);

	if (file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		QString style = QTextStream(&file).readAll();
		file.close();

		setStyleSheet(style); 
		
	} 

 
	mainWindow->showMaximized();

}


