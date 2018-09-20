
#include "mainwindow.h"
#include "global.h"
#include <QApplication>
#include <iostream>
#include <QTextCodec>
#include <QTextStream>
int main(int argc, char *argv[])
{
    lst_vis_time=QDateTime::currentDateTime();
    init_site.time=60;
    init_site.age_type=0;
    init_site.level=1;
    init_site.begin_time=QDateTime::fromString("2000:01:01","yyyy:hh:dd");
    init_site.end_time=QDateTime::fromString("2000:06:01","yyyy:hh:dd");
    init_site.ma_price=1000;
    init_site.price_high=100;
    init_site.price_low=50;
    QApplication a(argc, argv);
    man=new SBSmanager("SBSdb.db");
    /*admin t;
    t.id="123456abc";t.password="123456";t.mail="240751461@qq.com";t.phone="17734567423";
    man->reg(t);*/
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    MainWindow w;
    w.show();
    return a.exec();
}
