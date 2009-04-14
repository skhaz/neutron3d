#include "PMLogic.h"

#include <QDate>

PMLogic::PMLogic()
:dir(new QDir())
{
}

PMLogic::~PMLogic()
{
}

void PMLogic::createProject( const QString  &name, const QString &path )
{
	dir->setPath(path);
	dir->mkdir(name);
}

void PMLogic::addProject( QString name, QString path )
{	
	int count = 0;
	
	QDate d1(1995, 5, 17);
	
	QMap<QString, QString> subFolders;
	subFolders.insert("folderName", "folderType");
	
	mapList->insert( count, PMSettings(name, path,  d1, 3.5, subFolders ));
}

void PMLogic::setActiveProject( int *_index )
{
	index = _index;
}

int PMLogic::removeFromList( int _index )
{
	int result = mapList->remove ( _index );
	return result;
}

void PMLogic::importList()
{
}

void PMLogic::exportList()
{
}

void PMLogic::deleteProject()
{
}

void PMLogic::updateList()
{
}

