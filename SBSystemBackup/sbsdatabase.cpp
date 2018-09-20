#include "sbsdatabase.h"

SBSdatabase::SBSdatabase(QString db_name)//数据库构造函数
{
    db=new QSqlDatabase;//实例;
    *db=QSqlDatabase::addDatabase("QSQLITE");
    db->setDatabaseName(db_name);
    if(!db->open())//是否打开
    {
        on_con=0;
        qDebug()<<"no! db not open";
    }
    else
    {
        qDebug()<<"Database Opened";
        on_con=1;
    }
    QString fst="PRAGMA synchronous = OFF";
    QSqlQuery sql_query;
    sql_query.prepare(fst);
    if(sql_query.exec())qDebug()<<666;
}

bool SBSdatabase::is_connected() const
{
    return on_con;
}

SBSdatabase::~SBSdatabase()
{
    db->close();
    delete db;
}

bool SBSdatabase::create(QString table_name)//table name 包含表信息
{
    QSqlQuery sql_query;
    //(id int primary key, name varchar(30), address varchar(30))
    QString create_sql="create table "+table_name;
    qDebug()<<create_sql;
   // sql_query.prepare(create_sql);
    if(sql_query.exec(create_sql))return 1;
    qDebug()<<QObject::tr("Table Create failed");
   // qDebug()<<table_name;
    qDebug()<<sql_query.lastError();
    return 0;
}

bool SBSdatabase::insert(QVariantList info, QString table)
{
     QSqlQuery sql_query;
     QString insert_sql="insert into "+table+" values (";
     for(int i=0;i<(int)info.size()-1;i++)
     {
         insert_sql+="?,";
     }
     insert_sql+="?)";
     qDebug()<<insert_sql;
     sql_query.prepare(insert_sql);
     for(int i=0;i<(int)info.size();i++)
     sql_query.addBindValue(info.at(i)),qDebug()<<info.at(i);
     qDebug()<<insert_sql;
     if(sql_query.exec())return 1;
     qDebug()<<QObject::tr("insert failed");
     qDebug()<<sql_query.lastError();
     return 0;
}

bool SBSdatabase::del(QString id, QString table)
{
    QString delete_sql="delete from "+table+" where id = ?";
    QSqlQuery sql_query;
    sql_query.prepare(delete_sql);
    sql_query.addBindValue(id);
    if(sql_query.exec())return 1;
    qDebug()<<sql_query.lastError();
    qDebug()<<"no deleted!";
    return 0;
}

QVariantList SBSdatabase::search(QString name, QString info, QString table, int value_size)
{
    QSqlQuery sql_query;
    QString select_sql = "select * from "+table+" where "+name+" = '"+info+"'";
    QVariantList ret;
    if(!sql_query.exec(select_sql))
    {
        qDebug()<<sql_query.lastError();
    }
    else
    {
        while(sql_query.next())
        {
            for(int i=0;i<value_size;i++)ret.append(sql_query.value(i));
        }
        return ret;
    }
}

QVariantList SBSdatabase::get_all(QString table,int value_size)
{
    QSqlQuery sql_query;
    QString select_all_sql = "select * from "+table;
    sql_query.prepare(select_all_sql);
    QVariantList ret;
    if(!sql_query.exec())
    {
        qDebug()<<sql_query.lastError();
    }
    else
    {
        while(sql_query.next())
        {
            for(int i=0;i<value_size;i++)ret.append(sql_query.value(i));
        }
        return ret;
    }
}
bool SBSdatabase::exist(QString name,QString info,QString table)
{
    QSqlQuery sql_query;
    QString select_sql = "select count(*) from "+table+" where "+name+" = '"+info+"'";
    qDebug()<<select_sql;
    //sql_query.prepare(select_sql);
    if(!sql_query.exec(select_sql))
    {
        qDebug()<<sql_query.lastError();
    }
    else
    {
        while(sql_query.next())
        {
            qDebug()<<"xxxx";
           // qDebug()<<""
            if(sql_query.value(0).toInt()>0)return 1;
            else return 0;
        }
    }
}

bool SBSdatabase::change(QString id, QString name, QVariant info, QString table)
{
    QSqlQuery sql_query;
    QString update_sql="update "+table+" set "+name+" = :name where id = :id";
    qDebug()<<update_sql;
    sql_query.prepare(update_sql);
    sql_query.bindValue(":name",info);
    sql_query.bindValue(":id",id);
    if(!sql_query.exec())return 0;
    return 1;
}
