#ifndef PMSETTINGS_H
#define PMSETTINGS_H

#include <QDir>
#include <QString>
#include <QDate>

class PMSettings
{
public:
    PMSettings(QDir const& dir, QString const& name, QDate const& date, float size);
    ~PMSettings();

private:
    QDir *dir;
    QString *name;
    QDate *name;
    float size;

};

#endif
