#ifndef _PREFERENCES_H
#define _PREFERENCES_H

#include <QDialog>

class Preferences : public QDialog
{
public:
    Preferences(QWidget* parent = 0);
    ~Preferences();
	
	void generalPage();
	void colorPage();
	

private:
    Q_OBJECT

	protected slots:
	void changePage();
};

#endif
