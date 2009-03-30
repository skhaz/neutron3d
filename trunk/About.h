#ifndef _ABOUT_H
#define _ABOUT_H

#include <QDialog>
#include <QLabel>
#include <QLayout>

class About : public QDialog
{
	Q_OBJECT
	
public:
	About(QWidget* parent = 0);
	~About();

protected:
	void mousePressEvent(QMouseEvent *event);

private:
	QLabel *picture;
	QLabel *title;
	QLabel *version;
	QLabel *content;
	QSpacerItem *hSpacer;
	QVBoxLayout *hLayout;
	QVBoxLayout *hLayout1;
};

#endif
