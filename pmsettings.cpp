#include "pmsettings.h"

PMSettings::PMSettings()
{
}

PMSettings::~PMSettings()
{
}

void PMSettings::setDir(QDir const& _dir)
{
    dir = _dir;
}

void PMSettings::setName(QString const& _name)
{
    name = _name;
}

void PMSettings::setDate(QDate const& _date)
{
    date = _date;
}

void PMSettings::setSize(float _size)
{
    size = _size;
}

QDir& PMSettings::getDir() const
{
    return dir;
}

QString& PMSettings::getName() const
{
    return name;
}

QDate& PMSettings::getDate() const
{
    return date;
}

float PMSettings::getSize()
{
    return size;
}
