#include "PMSettings.h"

PMSettings::PMSettings(const QString _name, const QString _path, const QDate _date, float _size, QMap<QString, QString> _subFolders)
{
	setName( _name );
	setPath( _path );
	setDate( _date );
	setSize( _size );
	setSubFolders( _subFolders );
}

PMSettings::~PMSettings()
{
}

void PMSettings::setName( QString _name)
{
	name = _name;
}

void PMSettings::setPath( QString _path)
{
	path = _path;
}

void PMSettings::setDate( QDate _date)
{
	date = _date;
}

void PMSettings::setSize( float _size)
{
	size = _size;
}

void PMSettings::setSubFolders( QMap<QString, QString> _subFolders)
{
	subFolders = _subFolders;
}

