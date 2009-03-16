/********************************************************************************
** Form generated from reading ui file 'ProjectManager.ui'
**
** Created: Mon 16. Mar 10:17:10 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_PROJECTMANAGER_H
#define UI_PROJECTMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectManager
{
public:
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lbl_projectPath_2;
    QLabel *lbl_projectPath;
    QGridLayout *gridLayout_3;
    QGroupBox *grb_selectProject;
    QGridLayout *gridLayout_2;
    QListView *lst_project;
    QVBoxLayout *verticalLayout;
    QPushButton *bt_newProject;
    QSpacerItem *verticalSpacer_9;
    QPushButton *bt_addProject;
    QSpacerItem *verticalSpacer_3;
    QPushButton *bt_setActive;
    QSpacerItem *verticalSpacer_11;
    QPushButton *bt_removeFromList;
    QSpacerItem *verticalSpacer_2;
    QPushButton *bt_importList;
    QSpacerItem *verticalSpacer_10;
    QPushButton *bt_exportList;
    QSpacerItem *verticalSpacer;
    QPushButton *bt_deleteProject;
    QSpacerItem *verticalSpacer_4;
    QLabel *lbl_shortBy;
    QComboBox *cbx_shortBy;
    QGroupBox *grb_defineFolderType;
    QGridLayout *gridLayout;
    QTreeView *trw_defineFolderType;
    QVBoxLayout *verticalLayout_2;
    QPushButton *bt_makeDefault;
    QSpacerItem *verticalSpacer_8;
    QPushButton *bt_addFolder;
    QSpacerItem *verticalSpacer_5;
    QLabel *lbl_folderType;
    QComboBox *cbx_folderType;
    QSpacerItem *verticalSpacer_6;
    QPushButton *bt_deleteFolder;
    QSpacerItem *verticalSpacer_7;
    QLabel *lbl_usePreset;
    QComboBox *cbx_usePreset;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *bt_close;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ProjectManager)
    {
        if (ProjectManager->objectName().isEmpty())
            ProjectManager->setObjectName(QString::fromUtf8("ProjectManager"));
        ProjectManager->setWindowModality(Qt::NonModal);
        ProjectManager->setEnabled(true);
        ProjectManager->resize(780, 480);
        ProjectManager->setMinimumSize(QSize(780, 480));
        ProjectManager->setLayoutDirection(Qt::RightToLeft);
        ProjectManager->setStyleSheet(QString::fromUtf8(""));
        gridLayout_4 = new QGridLayout(ProjectManager);
        gridLayout_4->setSpacing(5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        lbl_projectPath_2 = new QLabel(ProjectManager);
        lbl_projectPath_2->setObjectName(QString::fromUtf8("lbl_projectPath_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Lucida Grande, Segoe UI"));
        lbl_projectPath_2->setFont(font);
        lbl_projectPath_2->setLayoutDirection(Qt::LeftToRight);
        lbl_projectPath_2->setAutoFillBackground(false);

        horizontalLayout->addWidget(lbl_projectPath_2);

        lbl_projectPath = new QLabel(ProjectManager);
        lbl_projectPath->setObjectName(QString::fromUtf8("lbl_projectPath"));
        lbl_projectPath->setFont(font);
        lbl_projectPath->setLayoutDirection(Qt::LeftToRight);
        lbl_projectPath->setAutoFillBackground(false);

        horizontalLayout->addWidget(lbl_projectPath);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        grb_selectProject = new QGroupBox(ProjectManager);
        grb_selectProject->setObjectName(QString::fromUtf8("grb_selectProject"));
        grb_selectProject->setFont(font);
        grb_selectProject->setLayoutDirection(Qt::LeftToRight);
        grb_selectProject->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(grb_selectProject);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 20, -1, -1);
        lst_project = new QListView(grb_selectProject);
        lst_project->setObjectName(QString::fromUtf8("lst_project"));
        lst_project->setFont(font);
        lst_project->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        lst_project->setStyleSheet(QString::fromUtf8(""));
        lst_project->setTabKeyNavigation(true);
        lst_project->setDragEnabled(true);
        lst_project->setDragDropMode(QAbstractItemView::DragOnly);
        lst_project->setResizeMode(QListView::Fixed);
        lst_project->setLayoutMode(QListView::SinglePass);

        gridLayout_2->addWidget(lst_project, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        bt_newProject = new QPushButton(grb_selectProject);
        bt_newProject->setObjectName(QString::fromUtf8("bt_newProject"));
        bt_newProject->setMinimumSize(QSize(100, 32));
        bt_newProject->setMaximumSize(QSize(100, 30));
        bt_newProject->setFont(font);
        bt_newProject->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(bt_newProject);

        verticalSpacer_9 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_9);

        bt_addProject = new QPushButton(grb_selectProject);
        bt_addProject->setObjectName(QString::fromUtf8("bt_addProject"));
        bt_addProject->setMinimumSize(QSize(100, 32));
        bt_addProject->setMaximumSize(QSize(100, 30));
        bt_addProject->setFont(font);
        bt_addProject->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(bt_addProject);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        bt_setActive = new QPushButton(grb_selectProject);
        bt_setActive->setObjectName(QString::fromUtf8("bt_setActive"));
        bt_setActive->setMinimumSize(QSize(100, 32));
        bt_setActive->setMaximumSize(QSize(100, 30));
        bt_setActive->setFont(font);
        bt_setActive->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(bt_setActive);

        verticalSpacer_11 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_11);

        bt_removeFromList = new QPushButton(grb_selectProject);
        bt_removeFromList->setObjectName(QString::fromUtf8("bt_removeFromList"));
        bt_removeFromList->setMinimumSize(QSize(100, 32));
        bt_removeFromList->setMaximumSize(QSize(100, 30));
        bt_removeFromList->setFont(font);
        bt_removeFromList->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(bt_removeFromList);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        bt_importList = new QPushButton(grb_selectProject);
        bt_importList->setObjectName(QString::fromUtf8("bt_importList"));
        bt_importList->setMinimumSize(QSize(100, 32));
        bt_importList->setMaximumSize(QSize(100, 30));
        bt_importList->setFont(font);
        bt_importList->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(bt_importList);

        verticalSpacer_10 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_10);

        bt_exportList = new QPushButton(grb_selectProject);
        bt_exportList->setObjectName(QString::fromUtf8("bt_exportList"));
        bt_exportList->setMinimumSize(QSize(100, 32));
        bt_exportList->setMaximumSize(QSize(100, 30));
        bt_exportList->setFont(font);
        bt_exportList->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(bt_exportList);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        bt_deleteProject = new QPushButton(grb_selectProject);
        bt_deleteProject->setObjectName(QString::fromUtf8("bt_deleteProject"));
        bt_deleteProject->setMinimumSize(QSize(100, 32));
        bt_deleteProject->setMaximumSize(QSize(100, 30));
        bt_deleteProject->setFont(font);
        bt_deleteProject->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(bt_deleteProject);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        gridLayout_2->addLayout(verticalLayout, 0, 2, 1, 1);

        lbl_shortBy = new QLabel(grb_selectProject);
        lbl_shortBy->setObjectName(QString::fromUtf8("lbl_shortBy"));
        lbl_shortBy->setFont(font);
        lbl_shortBy->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(lbl_shortBy, 1, 0, 1, 1);

        cbx_shortBy = new QComboBox(grb_selectProject);
        cbx_shortBy->setObjectName(QString::fromUtf8("cbx_shortBy"));
        cbx_shortBy->setMinimumSize(QSize(0, 26));
        cbx_shortBy->setMaximumSize(QSize(16777215, 24));
        cbx_shortBy->setFont(font);
        cbx_shortBy->setLayoutDirection(Qt::LeftToRight);
        cbx_shortBy->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(cbx_shortBy, 1, 1, 1, 1);


        gridLayout_3->addWidget(grb_selectProject, 0, 1, 1, 1);

        grb_defineFolderType = new QGroupBox(ProjectManager);
        grb_defineFolderType->setObjectName(QString::fromUtf8("grb_defineFolderType"));
        grb_defineFolderType->setFont(font);
        grb_defineFolderType->setLayoutDirection(Qt::LeftToRight);
        grb_defineFolderType->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(grb_defineFolderType);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 20, -1, -1);
        trw_defineFolderType = new QTreeView(grb_defineFolderType);
        trw_defineFolderType->setObjectName(QString::fromUtf8("trw_defineFolderType"));
        trw_defineFolderType->setFont(font);
        trw_defineFolderType->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(trw_defineFolderType, 0, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        bt_makeDefault = new QPushButton(grb_defineFolderType);
        bt_makeDefault->setObjectName(QString::fromUtf8("bt_makeDefault"));
        bt_makeDefault->setEnabled(true);
        bt_makeDefault->setMinimumSize(QSize(100, 32));
        bt_makeDefault->setMaximumSize(QSize(100, 30));
        bt_makeDefault->setFont(font);
        bt_makeDefault->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(bt_makeDefault);

        verticalSpacer_8 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_8);

        bt_addFolder = new QPushButton(grb_defineFolderType);
        bt_addFolder->setObjectName(QString::fromUtf8("bt_addFolder"));
        bt_addFolder->setMinimumSize(QSize(100, 32));
        bt_addFolder->setMaximumSize(QSize(100, 30));
        bt_addFolder->setFont(font);
        bt_addFolder->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(bt_addFolder);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_5);

        lbl_folderType = new QLabel(grb_defineFolderType);
        lbl_folderType->setObjectName(QString::fromUtf8("lbl_folderType"));
        lbl_folderType->setFont(font);
        lbl_folderType->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_2->addWidget(lbl_folderType);

        cbx_folderType = new QComboBox(grb_defineFolderType);
        cbx_folderType->addItem(QString());
        cbx_folderType->addItem(QString());
        cbx_folderType->addItem(QString());
        cbx_folderType->addItem(QString());
        cbx_folderType->addItem(QString());
        cbx_folderType->addItem(QString());
        cbx_folderType->addItem(QString());
        QIcon icon;
        icon.addPixmap(QPixmap(QString::fromUtf8("images/sound.png")), QIcon::Normal, QIcon::On);
        cbx_folderType->addItem(icon, QString());
        cbx_folderType->addItem(QString());
        cbx_folderType->addItem(QString());
        cbx_folderType->addItem(QString());
        cbx_folderType->setObjectName(QString::fromUtf8("cbx_folderType"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbx_folderType->sizePolicy().hasHeightForWidth());
        cbx_folderType->setSizePolicy(sizePolicy);
        cbx_folderType->setMinimumSize(QSize(100, 26));
        cbx_folderType->setMaximumSize(QSize(100, 24));
        cbx_folderType->setFont(font);
        cbx_folderType->setLayoutDirection(Qt::LeftToRight);
        cbx_folderType->setStyleSheet(QString::fromUtf8(""));
        cbx_folderType->setMaxVisibleItems(16);

        verticalLayout_2->addWidget(cbx_folderType);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_6);

        bt_deleteFolder = new QPushButton(grb_defineFolderType);
        bt_deleteFolder->setObjectName(QString::fromUtf8("bt_deleteFolder"));
        bt_deleteFolder->setMinimumSize(QSize(100, 32));
        bt_deleteFolder->setMaximumSize(QSize(100, 30));
        bt_deleteFolder->setFont(font);
        bt_deleteFolder->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(bt_deleteFolder);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);


        gridLayout->addLayout(verticalLayout_2, 0, 2, 2, 1);

        lbl_usePreset = new QLabel(grb_defineFolderType);
        lbl_usePreset->setObjectName(QString::fromUtf8("lbl_usePreset"));
        lbl_usePreset->setFont(font);
        lbl_usePreset->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(lbl_usePreset, 1, 0, 1, 1);

        cbx_usePreset = new QComboBox(grb_defineFolderType);
        cbx_usePreset->setObjectName(QString::fromUtf8("cbx_usePreset"));
        cbx_usePreset->setMinimumSize(QSize(0, 26));
        cbx_usePreset->setMaximumSize(QSize(16777215, 24));
        cbx_usePreset->setFont(font);
        cbx_usePreset->setLayoutDirection(Qt::LeftToRight);
        cbx_usePreset->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(cbx_usePreset, 1, 1, 1, 1);


        gridLayout_3->addWidget(grb_defineFolderType, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        bt_close = new QPushButton(ProjectManager);
        bt_close->setObjectName(QString::fromUtf8("bt_close"));
        bt_close->setMinimumSize(QSize(100, 32));
        bt_close->setMaximumSize(QSize(100, 30));
        bt_close->setFont(font);
        bt_close->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(bt_close);

        horizontalSpacer = new QSpacerItem(298, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_4->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        QWidget::setTabOrder(lst_project, bt_newProject);
        QWidget::setTabOrder(bt_newProject, bt_addProject);
        QWidget::setTabOrder(bt_addProject, bt_setActive);
        QWidget::setTabOrder(bt_setActive, bt_removeFromList);
        QWidget::setTabOrder(bt_removeFromList, bt_importList);
        QWidget::setTabOrder(bt_importList, bt_exportList);
        QWidget::setTabOrder(bt_exportList, bt_deleteProject);
        QWidget::setTabOrder(bt_deleteProject, trw_defineFolderType);
        QWidget::setTabOrder(trw_defineFolderType, bt_makeDefault);
        QWidget::setTabOrder(bt_makeDefault, bt_addFolder);
        QWidget::setTabOrder(bt_addFolder, cbx_folderType);
        QWidget::setTabOrder(cbx_folderType, cbx_usePreset);

        retranslateUi(ProjectManager);

        QMetaObject::connectSlotsByName(ProjectManager);
    } // setupUi

    void retranslateUi(QWidget *ProjectManager)
    {
        ProjectManager->setWindowTitle(QApplication::translate("ProjectManager", "Project Manager", 0, QApplication::UnicodeUTF8));
        lbl_projectPath_2->setText(QApplication::translate("ProjectManager", "c:\\documents\\neutron3d\\projects", 0, QApplication::UnicodeUTF8));
        lbl_projectPath->setText(QApplication::translate("ProjectManager", "Project Path:", 0, QApplication::UnicodeUTF8));
        grb_selectProject->setTitle(QApplication::translate("ProjectManager", "Select a Project", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lst_project->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lst_project->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        lst_project->setWhatsThis(QApplication::translate("ProjectManager", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande ,Segoe UI'; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">List of current projects</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        bt_newProject->setWhatsThis(QApplication::translate("ProjectManager", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande ,Segoe UI'; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Click to create a new project.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        bt_newProject->setText(QApplication::translate("ProjectManager", "New Project", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        bt_addProject->setWhatsThis(QApplication::translate("ProjectManager", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande ,Segoe UI'; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Click to add an existing project.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        bt_addProject->setText(QApplication::translate("ProjectManager", "Add Project", 0, QApplication::UnicodeUTF8));
        bt_setActive->setText(QApplication::translate("ProjectManager", "Set Active", 0, QApplication::UnicodeUTF8));
        bt_removeFromList->setText(QApplication::translate("ProjectManager", "Remove from List", 0, QApplication::UnicodeUTF8));
        bt_importList->setText(QApplication::translate("ProjectManager", "Import List", 0, QApplication::UnicodeUTF8));
        bt_exportList->setText(QApplication::translate("ProjectManager", "Export List", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bt_deleteProject->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        bt_deleteProject->setText(QApplication::translate("ProjectManager", "Delete Project", 0, QApplication::UnicodeUTF8));
        lbl_shortBy->setText(QApplication::translate("ProjectManager", "Sort By:", 0, QApplication::UnicodeUTF8));
        cbx_shortBy->clear();
        cbx_shortBy->insertItems(0, QStringList()
         << QApplication::translate("ProjectManager", "All", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProjectManager", "Name", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProjectManager", "Date", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProjectManager", "Size", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProjectManager", "-----------------", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProjectManager", "Add New", 0, QApplication::UnicodeUTF8)
        );
        grb_defineFolderType->setTitle(QApplication::translate("ProjectManager", "Define Folder Type", 0, QApplication::UnicodeUTF8));
        bt_makeDefault->setText(QApplication::translate("ProjectManager", "Make Default", 0, QApplication::UnicodeUTF8));
        bt_addFolder->setText(QApplication::translate("ProjectManager", "Add Folder", 0, QApplication::UnicodeUTF8));
        lbl_folderType->setText(QApplication::translate("ProjectManager", "Folder Type", 0, QApplication::UnicodeUTF8));
        cbx_folderType->setItemText(0, QApplication::translate("ProjectManager", "General", 0, QApplication::UnicodeUTF8));
        cbx_folderType->setItemText(1, QApplication::translate("ProjectManager", "Animations", 0, QApplication::UnicodeUTF8));
        cbx_folderType->setItemText(2, QApplication::translate("ProjectManager", "Characters", 0, QApplication::UnicodeUTF8));
        cbx_folderType->setItemText(3, QApplication::translate("ProjectManager", "Data", 0, QApplication::UnicodeUTF8));
        cbx_folderType->setItemText(4, QApplication::translate("ProjectManager", "Material Library", 0, QApplication::UnicodeUTF8));
        cbx_folderType->setItemText(5, QApplication::translate("ProjectManager", "Models", 0, QApplication::UnicodeUTF8));
        cbx_folderType->setItemText(6, QApplication::translate("ProjectManager", "Scenes", 0, QApplication::UnicodeUTF8));
        cbx_folderType->setItemText(7, QApplication::translate("ProjectManager", "Sounds", 0, QApplication::UnicodeUTF8));
        cbx_folderType->setItemText(8, QApplication::translate("ProjectManager", "Textures", 0, QApplication::UnicodeUTF8));
        cbx_folderType->setItemText(9, QApplication::translate("ProjectManager", "-----------------", 0, QApplication::UnicodeUTF8));
        cbx_folderType->setItemText(10, QApplication::translate("ProjectManager", "Add New Type", 0, QApplication::UnicodeUTF8));

        bt_deleteFolder->setText(QApplication::translate("ProjectManager", "Delete Folder", 0, QApplication::UnicodeUTF8));
        lbl_usePreset->setText(QApplication::translate("ProjectManager", "Use Preset", 0, QApplication::UnicodeUTF8));
        cbx_usePreset->clear();
        cbx_usePreset->insertItems(0, QStringList()
         << QApplication::translate("ProjectManager", "Small Project", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProjectManager", "Medium Project", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProjectManager", "Big Project", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProjectManager", "-----------------", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProjectManager", "Add New Preset", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        bt_close->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        bt_close->setText(QApplication::translate("ProjectManager", "Close", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ProjectManager);
    } // retranslateUi

};

namespace Ui {
    class ProjectManager: public Ui_ProjectManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTMANAGER_H
