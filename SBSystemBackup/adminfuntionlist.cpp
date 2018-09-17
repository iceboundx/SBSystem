//管理员功能列表
#include "global.h"
#include "adminfuntionlist.h"
#include "ui_adminfuntionlist.h"
AdminFuntionList::AdminFuntionList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminFuntionList)
{
    ui->setupUi(this);
   // Allsite = new allsite(this);
    Addsite = new addsite(this);
    Admininfo = new admininfo(this);
  //  connect(Allsite,SIGNAL(hide_now()),this,SLOT(reshow()));
   // connect(Admininfo,SIGNAL(hide_now()),this,SLOT(reshow()));
}

AdminFuntionList::~AdminFuntionList()
{
    delete ui;
   // delete Allsite;
   // delete Addsite;
   // delete Admininfo;
}


//点击所有景点
void AdminFuntionList::on_allsite_clicked()
{
    qDebug()<<"viewallsite";
    //this->hide();
   // Allsite->show();
}

//点击添加景点
void AdminFuntionList::on_addsite_clicked()
{
    qDebug()<<"addsite";
    //this->hide();
    Addsite->clear_all();
    Addsite->show();
}

//点击个人信息
void AdminFuntionList::on_info_clicked()
{
    qDebug()<<"info";
    Admininfo->send_info(man->get_admin());
   // this->hide();
    Admininfo->show();
}

void AdminFuntionList::reshow()
{
    this->show();
}

void AdminFuntionList::on_vieworder_clicked()
{

}
