#ifndef _PREFERENCES_H
#define _PREFERENCES_H

#include <QDialog>
#include <QListWidget>
#include <QStackedWidget>
#include <QWidget>
#include <QWidget>
#include <QHBoxLayout>
#include <QPushButton>
#include <QPushButton>
#include <QSpacerItem>
#include <QSpacerItem>
#include <QHBoxLayout>
#include <QVBoxLayout>

class Preferences : public QDialog
{
    Q_OBJECT
public:
    Preferences(QWidget* parent = 0);
    ~Preferences();

private:
	QListWidget *lst_categories;
	QStackedWidget *stk_details;
	QWidget *generalPage;
	QWidget *mousePage;
	QHBoxLayout *layout;
	QPushButton *bt_close;
	QPushButton *bt_apply;
	QSpacerItem *hSpacer;
	QSpacerItem *hSpacer1;
	QHBoxLayout *hbl_footer;
	QVBoxLayout *mainLayout;
};

#endif
