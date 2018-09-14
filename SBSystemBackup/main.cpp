#include "sbsmanager.h"
#include "mainwindow.h"
#include "global.h"
#include <QApplication>
#include <iostream>
#include <QTextCodec>
#include <QTextStream>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();

    switch (back) {//界面返回【不成功
    case 1:{
        TouristFunctionList w;
        w.show();
        break;
    }
    case 2:{
        AdminFuntionList w;
        w.show();
        break;
    }
    default:
        break;
    }
}
