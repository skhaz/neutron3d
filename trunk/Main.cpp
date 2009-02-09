#include "Application.h"
#include <QSplashScreen>
#include <QPixmap>


int main(int argc, char** argv)
{
	Application app(argc, argv);

     QPixmap pixmap("media/themes/dark/splash.png");
     QSplashScreen splash(pixmap);
     splash.show();
     app.processEvents();

     // colocar um timer aqui ....

     splash.finish(&MainWindow);

	return app.exec();
}
