#ifndef _FORMIMAGEVIE_H
#define _FORMIMAGEVIE_H

#include <QtGui>

class QAction;
class QLabel;
class QMenu;
class QScrollArea;
class QScrollBar;

class FormImageView : public QDialog
{
	Q_OBJECT
		
public:
	FormImageView(QWidget *parent = 0);
	~FormImageView();
		
private slots:
	void open();
	void normalSize();
	void fitToWindow();
		
private:
	void scaleImage(double factor);
	void adjustScrollBar(QScrollBar *scrollBar, double factor);
	
	QLabel *lbl_image;
	QScrollArea *scrollArea;
	
	QPushButton *bt_open;
	QPushButton *bt_normalSize;
	QPushButton *bt_fitToWindow;
	
	double scaleFactor;
	double actualSize;
	double outV;
	int iniPosX;
	int posX;
	
protected:
	void mouseMoveEvent ( QMouseEvent * event );
	void mousePressEvent ( QMouseEvent * event );
};

#endif