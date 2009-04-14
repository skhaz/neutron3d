#ifndef _PMSETTINGS_H
#define _PMSETTINGS_H

#include <QDate>

#include <QString>
#include <QMap>

using namespace::std;

class PMSettings
{
public:
	PMSettings(const QString _name, const QString _path, const QDate _date, float _size, QMap<QString, QString> _subFolders);
	~PMSettings();
	
	void setName( QString _name);
	void setPath( QString _path);
	void setDate( QDate _date);
	void setSize( float _size);
	void setSubFolders( QMap<QString, QString> _subFolders);
	
private:
	QString name;
	QString path;
	QDate date;
	float size;
	QMap<QString, QString> subFolders;
};
#endif