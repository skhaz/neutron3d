#ifndef NEWPROJECT_H
#define NEWPROJECT_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QDir>

class NewProject : public QDialog
{
	Q_OBJECT
	
public:
	NewProject(QWidget *parent = 0);
	~NewProject();
	
	private slots:
	void setPath_slot();
	void ok_slot();
	
	
private:
	QLabel *lbl_newProject;
	QLabel *lbl_path;
	QLineEdit *le_newProject;
	QLineEdit *le_path;
	QPushButton *bt_path;
	QPushButton *bt_ok;
	QPushButton *bt_cancel;
	
	QDir *dir;
};

#endif
