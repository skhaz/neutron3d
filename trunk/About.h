#ifndef ABOUT_H
#define ABOUT_H

#include <QWidget>
#include <QDialog>

class About : public QDialog
{
	Q_OBJECT
	
	public:
		About(QWidget* parent = 0);
		~About();

    protected:
        void mousePressEvent(QMouseEvent *event);


};

#endif
