#ifndef _ABOUT_H
#define _ABOUT_H

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
