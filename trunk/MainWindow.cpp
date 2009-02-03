
#include "MainWindow.h"



MainWindow::MainWindow(QWidget* parent)
: QMainWindow(parent)
{
	// só para testes

	KeyboardMapping* k = new KeyboardMapping(this);
	k->show();

}

MainWindow::~MainWindow()
{
}

