#ifndef SBSDATABASE_H
#define SBSDATABASE_H

#include <QObject>
#include <QCoreApplication>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>
#include <QFile>
#include <QDebug>
#include <QVariantList>
#include <QString>
class SBSdatabase
{
public:
    explicit SBSdatabase(QString db_name);
    bool is_connected() const;
    ~SBSdatabase();
    bool create(QString table_name);
    bool insert(QVariantList info,QString table);
    bool del(QString id,QString table);
    QVariantList search(QString name,QString info,QString table,int value_size);
    QVariantList get_all(QString table,int value_size);
    bool exist(QString name,QString info,QString table);
    bool change(QString id,QString name,QVariant info,QString table);
private:
    QSqlDatabase *db;
    bool on_con;
};

#endif // SBSDATABASE_H
