#ifndef ABOUT_H
#define ABOUT_H

#include <QWidget>
#include <QDialog>

class About : public QDialog
{
	public:
		About(QWidget* parent = 0);
		~About();
		
	private:
		Q_OBJECT

    protected:
        void mousePressEvent(QMouseEvent *event);


};

#endif
