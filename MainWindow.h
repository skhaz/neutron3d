
#ifndef _MainWindow_h
#define _MainWindow_h

#include "ui/KeyboardMapping.h"


#include <QMainWindow>
#include <QMessageBox>
#include <QString>



class MainWindow : public QMainWindow
{
	public:
		MainWindow(QWidget* parent = 0);
		~MainWindow();

	private:
		Q_OBJECT
};

#endif

