#ifndef NEWPROJECT_H
#define NEWPROJECT_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QSpacerItem>
#include <QFileDialog>
#include <QDir>
#include <QMessageBox>

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

	QSpacerItem *spacerNewProject;
	QSpacerItem *spacerPath;
	QSpacerItem *spacerFooter;
	QSpacerItem *spacerTop;
	QSpacerItem *spacerBottom;

	QHBoxLayout *Layout_newProject;
	QHBoxLayout *Layout_path;
	QHBoxLayout *Layout_footer;
	QVBoxLayout *Layout_center;

	QMessageBox *msgBox;

	QDir *dir;
};

#endif
