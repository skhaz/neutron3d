#ifndef _PMLOGIC_H
#define _PMLOGIC_H

#include "PMSettings.h"

#include <QString>
#include <QMap>
#include <QDir>

class PMLogic
{
public:
	PMLogic();
	~PMLogic();
	
	void createProject(const QString &name, const QString &path );
	void addProject( QString name, QString path );
	void setActiveProject( int *_index );
	int removeFromList( int _index );
	void importList();
	void exportList();
	void deleteProject();
	
	void updateList();
	
private:
	QMap<int, PMSettings> *mapList;
	QDir *dir;
	int *index;
	
	
	
};
#endif


