//用户查看单个景点信息
#include "onesite.h"
#include "ui_onesite.h"
#include "global.h"



onesite::onesite(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::onesite)
{
    ui->setupUi(this);

    //显示景点信息

}

onesite::~onesite()
{
    delete ui;
}

