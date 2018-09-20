//管理员功能列表
#include "global.h"
#include "adminfuntionlist.h"
#include "ui_adminfuntionlist.h"
AdminFuntionList::AdminFuntionList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminFuntionList)
{
    ui->setupUi(this);
    AdminCount =new admincount(this);
    Allsiteadmin = new allsiteadmin(this);
    Addsite = new addsite(this);
    Admininfo = new admininfo(this);
    OrderList = new orderlist(this);
    Allsiteadmin->setWindowModality(Qt::WindowModal);
    AdminCount->setWindowModality(Qt::WindowModal);
    Addsite->setWindowModality(Qt::WindowModal);
    Admininfo->setWindowModality(Qt::WindowModal);
    OrderList->setWindowModality(Qt::WindowModal);
    this->setWindowFlags(this->windowFlags()&~Qt::WindowMaximizeButtonHint);
    this->setMaximumSize(this->size());
    this->setMinimumSize(this->size());
}

AdminFuntionList::~AdminFuntionList()
{
    delete ui;
}

//点击所有景点
void AdminFuntionList::on_allsite_clicked()
{
    qDebug()<<"viewallsite";
    Allsiteadmin->show_info();
    //this->hide();
    Allsiteadmin->show();
}

//点击添加景点
void AdminFuntionList::on_addsite_clicked()
{
    qDebug()<<"addsite";
    //this->hide();
    Addsite->set_mode(0);
    Addsite->clear_all();
    Addsite->send_info(init_site);
    Addsite->show();
}

//点击个人信息
void AdminFuntionList::on_info_clicked()
{
    qDebug()<<"info";
    Admininfo->send_info(man->get_admin());
    Admininfo->show();
}

void AdminFuntionList::reshow()
{
    this->show();
}

void AdminFuntionList::on_vieworder_clicked()
{
    OrderList->send_info(1);
    OrderList->show();
}

void AdminFuntionList::on_orderinfo_clicked()
{
    AdminCount->sort_type=0;
    AdminCount->sort_info();
    AdminCount->send_info();
    AdminCount->show();
}

bool AdminFuntionList::judge()
{
    if(is_open==1)
    {
        QMessageBox::about(this,"错误","已经打开了一个功能");
        return 1;
    }
    else return 0;
}


void AdminFuntionList::on_pushButton_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->applicationFilePath(), QStringList());
}
