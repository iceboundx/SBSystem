
#include "mainwindow.h"
#include "global.h"
#include <QApplication>
#include <iostream>
#include <QTextCodec>
#include <QTextStream>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
 //   man=new SBSmanager("db_name.db");
    MainWindow w;
    w.show();
    qDebug()<<"test";
    a.exec();
    qDebug()<<"no";
    return 0;
}
