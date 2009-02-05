
#include "MainWindow.h"
#include <QAction>
#include <QIcon>
#include <QMenuBar>



MainWindow::MainWindow(QWidget* parent)
: QMainWindow(parent)
{
	// só para testes
	KeyboardMapping* k = new KeyboardMapping(this);
	k->show();


	exitAction = new QAction("S&air", this);
	exitAction->setIcon(QIcon(":/media/icon/door_out.png"));
	exitAction->setShortcut(tr("CTRL+Q"));
	exitAction->setStatusTip("Sai do programa");
	connect(exitAction, SIGNAL(triggered()), SLOT(close()));

	QMenuBar* menu = menuBar();
	fileMenu = menu->addMenu("&Arquivo"); 
	fileMenu->addAction(exitAction);  // aqui é onde vai o qaction criado acima


}

MainWindow::~MainWindow()
{
}

