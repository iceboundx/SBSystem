//用户功能列表
#include "touristfunctionlist.h"
#include "ui_touristfunctionlist.h"
#include "global.h"


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

//点击“所有景点”
void TouristFunctionList::on_allsite_clicked()
{
    qDebug()<<"viewallsite";
    this->hide();
    Allsite->show();


}

//点击个人信息
void TouristFunctionList::on_info_clicked()
{
    qDebug()<<"viewinfo";
    this->hide();
    Touristinfo->show();
}

//点击历史订单
void TouristFunctionList::on_order_clicked()
{
    Orderlist->show();
}
