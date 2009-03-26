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
    void setName(QString const& _name);
    void setDate(QDate const& _date);
    void setSize(float _size);

    QDir& getDir() const;
    QString& getName() const;
    QDate& getDate() const;
    float getSize();

private:
    QDir dir;
    QString name;
    QDate date;
    float size;
};

#endif
