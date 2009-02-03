
#include "Application.h"



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
	QString filename("themes/dark/dark.theme");
	QFile file(filename);

	if (file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		QString style = QTextStream(&file).readAll();
		file.close();

		setStyleSheet(style);
	}

	mainWindow->showMaximized();
}

