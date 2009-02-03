
#ifndef _MainWindow_h
#define _MainWindow_h

#include <QMainWindow>



class MainWindow : public QMainWindow
{
	public:
		MainWindow(QWidget* parent = 0);
		~MainWindow();

	private:
		Q_OBJECT
};

#endif

