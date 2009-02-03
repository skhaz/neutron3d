
#include "Application.h"



Application::Application(int& argc, char** argv)
: QApplication(argc, argv)
, mainWindow(new MainWindow)
{

	QTimer::singleShot(0, mainWindow, SLOT(showMaximized()));
	QTimer::singleShot(0, this, SLOT(postLaunch()));
}

Application::~Application()
{
	delete mainWindow;
}

void Application::postLaunch()
{
}

