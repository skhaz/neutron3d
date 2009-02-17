#ifndef PREFERENCES_H
#define PREFERENCES_H

#include <QWidget>


class Preferences : public QWidget
{
public:
    Preferences();
    ~Preferences();
	
	void generalPage();
	void colorPage();
	

private:
    Q_OBJECT

	protected slots:
	void changePage();
};

#endif
