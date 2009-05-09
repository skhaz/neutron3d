#ifndef _FORMABOUT_H
#define _FORMABOUT_H

#include <QDialog>
#include <QLabel>
#include <QLayout>

class FormAbout : public QDialog
{
	Q_OBJECT
	
public:
	FormAbout(QWidget* parent = 0);
	~FormAbout();

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
