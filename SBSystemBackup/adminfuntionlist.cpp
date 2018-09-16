//管理员功能列表
#include "global.h"
#include "adminfuntionlist.h"
#include "ui_adminfuntionlist.h"
AdminFuntionList::AdminFuntionList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminFuntionList)
{
    ui->setupUi(this);
    Allsite = new allsite;
    Addsite = new addsite;
    Admininfo = new admininfo;


}

AdminFuntionList::~AdminFuntionList()
{
    delete ui;
    delete Allsite;
    delete Addsite;
    delete Admininfo;
}


//点击所有景点
void AdminFuntionList::on_allsite_clicked()
{
    qDebug()<<"viewallsite";
//    this->hide();
    Allsite->show();
}

//点击添加景点
void AdminFuntionList::on_addsite_clicked()
{
    qDebug()<<"addsite";
    Addsite->show();
}

//点击个人信息
void AdminFuntionList::on_info_clicked()
{
    qDebug()<<"info";
    Admininfo->show();
}
