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

    void setDir(QDir const& _dir);
    QDir& getDir() const;

    void setName(QString const& _name);
    QString& getName() const;

    void setDate(QDate const& _date);
    QDate& getDate() const;

    void setSize(float size);
    float getSize();

private:
    QDir dir;
    QString name;
    QDate name;
    float size;
};

#endif
