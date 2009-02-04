
#include "Application.h"
#include "QFile"
#include "QString"
#include "QTextStream"



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
#include <QMessageBox>
void Application::postLaunch()
{
	mainWindow->showMaximized();

	// carrega o stylesheet
	QString filename("media/neutro3D_styleSheet.css");
	QFile file;

	if (file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		QString style = QTextStream(&file).readAll();
		file.close();

		setStyleSheet(style); QMessageBox::warning(0, "", style);
	} else { QMessageBox::warning(0, "", "erro"); }
 
	mainWindow->showMaximized();

}

