#include "Application.h"
#include <QSplashScreen>
#include <QPixmap>

#include "glPanel.h"

int main(int argc, char** argv)
{
	Application app(argc, argv);
	
	return app.exec();
}
