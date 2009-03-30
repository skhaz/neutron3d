#include "NewProject.h"

NewProject::NewProject(QWidget *parent)
: QDialog(parent)
,lbl_newProject(new QLabel(tr("New Project:"), this))
,lbl_path(new QLabel(tr("Path:"), this))
,le_newProject(new QLineEdit(this))
,dir(new QDir())
,le_path(new QLineEdit(this))
,bt_path(new QPushButton(tr(" ... "), this))
,bt_ok(new QPushButton(tr("OK"), this))
,bt_cancel(new QPushButton(tr("Cancel"), this))
,spacerNewProject(new QSpacerItem ( 30, 10, QSizePolicy::Expanding, QSizePolicy::Minimum ))
,spacerPath(new QSpacerItem ( 45, 10, QSizePolicy::Fixed, QSizePolicy::Minimum ))
,spacerFooter(new QSpacerItem ( 30, 10, QSizePolicy::Expanding, QSizePolicy::Minimum ))
,spacerTop(new QSpacerItem ( 10, 30, QSizePolicy::Minimum, QSizePolicy::Expanding ))
,spacerBottom(new QSpacerItem ( 10, 30, QSizePolicy::Minimum, QSizePolicy::Expanding ))
,Layout_newProject(new QHBoxLayout)
,Layout_path(new QHBoxLayout)
,Layout_footer(new QHBoxLayout)
,Layout_center(new QVBoxLayout)
,msgBox(new QMessageBox(this))
{
    msgBox->setStyleSheet(QString::fromUtf8("QPushButton{min-width: 85px;\n"
                                                "min-height: 25px;\n}"));

	setWindowTitle(tr("New Project"));
	setMinimumSize(400, 155);
	
	le_newProject->setMinimumSize(150, 0);
	
	le_path->setMinimumSize(180, 0);	
	le_path->setText(dir->homePath());
	le_path-> setReadOnly ( true );
	
	bt_path->setMinimumSize(85, 25);

	bt_ok->setMinimumSize(85, 25);

	bt_cancel->setMinimumSize(85, 25);
	

	Layout_newProject->setMargin(0);
	Layout_newProject->addWidget(lbl_newProject);
	Layout_newProject->addWidget(le_newProject);
	Layout_newProject->addSpacerItem(spacerNewProject);
	
	Layout_path->setMargin(0);
	Layout_path->addSpacerItem(spacerPath);
	Layout_path->addWidget(lbl_path);
	Layout_path->addWidget(le_path);
	Layout_path->addWidget(bt_path);
	
	Layout_footer->setMargin(0);
	Layout_footer->addSpacerItem(spacerFooter);
	Layout_footer->addWidget(bt_cancel);
	Layout_footer->addWidget(bt_ok);
	
	Layout_center->addSpacerItem(spacerTop);
	Layout_center->addLayout(Layout_newProject);
	Layout_center->addLayout(Layout_path);
	Layout_center->addLayout(Layout_footer);
	Layout_center->addSpacerItem(spacerBottom);
	
	setLayout(Layout_center);
	
	
	connect(bt_path, SIGNAL(clicked()), SLOT(setPath_slot()));
	connect(bt_cancel, SIGNAL(clicked()), SLOT(close()));
	connect(bt_ok, SIGNAL(clicked()), SLOT(ok_slot()));
}

NewProject::~NewProject()
{
}

void NewProject::setPath_slot()
{
     QString path = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                        "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);

     if ( !path.isEmpty() )
        {
                dir = new QDir(path);

                le_path->setText(QString("%1").arg(dir->path()));
        }
}

void NewProject::ok_slot()
{
    QString projectDir = le_newProject->text();

    if (projectDir.isEmpty() != true)
    {
        dir = new QDir(le_path->text());

        if (!dir->exists(projectDir))
        {
            // caso nao exista
            dir->mkdir(le_newProject->text());
            close();
        }
        else
        {
            // caso exista

            msgBox->setText(tr("Do you want overwrite this diretory?"));
            msgBox->setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
            int test = msgBox->exec();

            switch (test)
            {
                case QMessageBox::Ok:
                    dir->mkdir(le_newProject->text());
                    close();
                break;
                case QMessageBox::Cancel:
                break;
            }
        }
    }
    else
    {
        msgBox->setText(tr("You need a name for the project."));
        msgBox->setMaximumSize ( 0, 250 );
        msgBox->setStandardButtons(QMessageBox::Ok);

        msgBox->exec();
    }
}



