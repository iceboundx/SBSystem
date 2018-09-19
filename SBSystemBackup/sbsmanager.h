#ifndef SBSMANAGER_H
#define SBSMANAGER_H

#include <QObject>
#include <QCoreApplication>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>
#include <QFile>
#include <QDebug>
#include <QVector>
#include <QCryptographicHash>
#include <sbsdatabase.h>
#include <QVariantList>
#include <QList>
#include <QtGlobal>
#include <QDateTime>
#include <Qmap>
struct discount
{
    double d_price;
    QString type;
};
struct t_lim
{
    QDateTime begin;
    QDateTime end;
    int lim;
    int type;
};
struct site
{
    QString id;
    QString name;
    QString profile;
    int price_low,price_high;
    int time;
    QList<discount> dis;
    int level;
    QString area;
    int ma_price;
    QList<t_lim> lim;
    int is_pub;
    int num;
    int left;
    int age_type;
    bool is_re;
    QDateTime begin_time;
    QDateTime end_time;
};
struct tourist
{
    QString id;
    QString password;
    int num;
    int age_low,age_max;
    QString phone;
};
struct admin
{
    QString id;
    QString password;
    QString phone;
    QString mail;
};
struct order_site
{
    QString site_id;
    QDateTime vis_time;
    int num;
    double price;
    QString type;//单价！！
};
struct order
{
    QList<order_site>o_site;
    QDateTime order_time;
    QString tour_id;
    QString id;
};
class SBSmanager : public QObject
{
    Q_OBJECT
public:
    explicit SBSmanager(QString db_name,QObject *parent = nullptr);
    bool login(QString id,QString password,bool is_admin);
    bool reg(admin user);
    tourist get_tour_by_id(QString id);
    bool reg(tourist user);
    bool add_site(site now);
    bool del_site(QString site_id);
    bool pub_site(QString site_id);
    bool add_time_lim(t_lim time_lim);
    bool del_order(QString order_id);
    int add_order(order_site o_site);
    bool set_order(QDateTime order_time);
    void clear_order();
    void clear_lim();
    void change_admin(admin user,bool is_pa);
    void change_tourist(tourist user,bool is_pa);
    admin get_admin();
    tourist get_tourist();
    QList<site>get_every_site(QDateTime vis_time);
    QList<order>get_every_order();
    QList<site> get_every_site();
    QList<order_site>get_order_que();
    QList<site>filter_site(QList<site>site_buf,int type,QString str);
    site get_site(QString id);
    order get_order(QString id);
    int get_site_num(QString site_id, QDateTime vis_time);
    bool is_in(QDateTime now,QDateTime l,QDateTime r);
    bool is_admin() const;
    int get_season_num(QString site_id,QString str);
    double get_profit(QString site_id);
    int get_people_num(QString site_id);
    QList<int>get_age(QString site_id);
signals:

public slots:
private:
    const int salt_lenth=10;
    QString md5(QString text);
    QString get_salt(int lenth);
    SBSdatabase *db;
    const char* TIME_FM="yyyy:MM:dd:HH:mm";
    const char* DATE_FM="MM:dd";
    const int MAX_NUM=0;
    site site_empty;
    order order_empty;
    QString now_id;
    bool Is_admin;
    QList<order_site>order_que;
    QList<t_lim>lim_que;
    QList<site>site_buf;
    QList<order>order_buf;
    int get_now_site_num(QString site_id,QDateTime vis_time,t_lim lim);
    bool is_in(QDateTime vis_time,t_lim lim);
    int get_already_site_num(QString site_id);
    bool same_lim(QString site_id,QDateTime a,QDateTime b);
    QList<order_site>get_o_site_que();
    QList<order>get_all_order();
    QList<site> get_all_site();
};

#endif // SBSMANAGER_H

