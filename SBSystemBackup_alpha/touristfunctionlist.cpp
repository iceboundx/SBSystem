//用户功能列表
#include "touristfunctionlist.h"
#include "ui_touristfunctionlist.h"
#include "global.h"


TouristFunctionList::TouristFunctionList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TouristFunctionList)    
{
    ui->setupUi(this);
    Allsite = new allsite(this);
    Touristinfo = new touristinfo(this);
    Orderlist = new orderlist(this);
    getVisTime=new getvistime(this);
    Allsite->setWindowModality(Qt::WindowModal);
    Orderlist->setWindowModality(Qt::WindowModal);
    getVisTime->setWindowModality(Qt::WindowModal);
    Touristinfo->setWindowModality(Qt::WindowModal);
    connect(getVisTime,SIGNAL(send_time(QDateTime)),this,SLOT(show_all_site(QDateTime)));
    connect(Allsite,SIGNAL(change_time()),this,SLOT(show_change_time()));
    this->setWindowFlags(this->windowFlags()&~Qt::WindowMaximizeButtonHint);
    this->setMaximumSize(this->size());
    this->setMinimumSize(this->size());
}

TouristFunctionList::~TouristFunctionList()
{
    delete ui;
   // delete Allsite;
   // delete Touristinfo;
    // delete Orderlist;
}

void TouristFunctionList::show_all_site(QDateTime vis_time)
{
    Allsite->get_time(vis_time);
    Allsite->clear_sort();
    Allsite->show_info();
    Allsite->show();
}

void TouristFunctionList::show_change_time()
{
    getVisTime->init();
    getVisTime->show();
}

//点击“所有景点”
void TouristFunctionList::on_allsite_clicked()
{
    getVisTime->init();
    getVisTime->show();
    //this->hide();


}

//点击个人信息
void TouristFunctionList::on_info_clicked()
{
    qDebug()<<"viewinfo";
   // this->hide();
    Touristinfo->send_info(man->get_tourist());
    Touristinfo->show();
}

//点击历史订单
void TouristFunctionList::on_order_clicked()
{
    Orderlist->send_info(man->is_admin());
    Orderlist->show();
}

void TouristFunctionList::reshow()
{
    this->show();
}

void TouristFunctionList::on_pushButton_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->applicationFilePath(), QStringList());
}
