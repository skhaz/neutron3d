#ifndef PREFERENCES_H
#define PREFERENCES_H

#include <QWidget>
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
