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

void AdminFuntionList::on_allsite_clicked()//点击所有景点查看和搜索景点
{
    qDebug()<<"viewallsite";
//    this->hide();
    Allsite->show();
}

void AdminFuntionList::on_addsite_clicked()
{
    qDebug()<<"addsite";
    Addsite->show();
}

void AdminFuntionList::on_info_clicked()
{
    qDebug()<<"info";
    Admininfo->show();
}
