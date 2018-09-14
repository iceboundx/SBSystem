#include "sbsmanager.h"
#include "touristfunctionlist.h"
#include "ui_touristfunctionlist.h"
#include "allsite.h"
#include "global.h"
#include "touristinfo.h"
#include "orderlist.h"

#include <QDebug>

TouristFunctionList::TouristFunctionList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TouristFunctionList)    
{
    ui->setupUi(this);
    Allsite = new allsite;
    Touristinfo = new touristinfo;
    Orderlist = new orderlist;
}

TouristFunctionList::~TouristFunctionList()
{
    delete ui;
    delete Allsite;
    delete Touristinfo;
    delete Orderlist;
}

void TouristFunctionList::on_allsite_clicked()//点击“所有景点”查看和搜索景点
{
    qDebug()<<"viewallsite";
    this->hide();
    Allsite->show();


}

void TouristFunctionList::on_info_clicked()
{
    qDebug()<<"viewinfo";
    this->hide();
    Touristinfo->show();
}

void TouristFunctionList::on_order_clicked()
{
    Orderlist->show();
}
