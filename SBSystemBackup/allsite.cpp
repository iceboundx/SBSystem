//用户所有景点列表
#include "allsite.h"
#include "ui_allsite.h"
#include "global.h"



allsite::allsite(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::allsite)
{
    ui->setupUi(this);
}

allsite::~allsite()
{
    delete ui;
}

//勾选有票
void allsite::on_ticket_stateChanged(int arg1)
{
    if(ui->ticket->isChecked()==true) {
        qDebug()<<"ticket"<<" "<<"down";
    }
    else qDebug()<<"up";
}

//勾选折扣
void allsite::on_discount_stateChanged(int arg1)
{
    qDebug()<<"discount";
    if(ui->discount->isChecked()==true) {
        qDebug()<<"ticket"<<" "<<"down";
    }
    else qDebug()<<"up";
}

//点击返回
void allsite::on_back_clicked()
{
    qDebug()<<"back";
    this->hide();
    //back = 1;
}

//每个景点
void allsite:: create_item(site sites)
{
    show_site *container=new show_site(this);
    connect(container,SIGNAL(need_refresh()),this,SLOT(refresh()));
    container->send_info(sites,vis_time);//记着改
    QListWidgetItem *item = new QListWidgetItem();
    QSize size = item->sizeHint();
    item->setSizeHint(container->size());
    ui->site_list->addItem(item);
    ui->site_list->setItemWidget(item,container);
}

void allsite::create_item(order_site o_site)
{
    show_order *container=new show_order(this);
    container->send_info(o_site);
    QListWidgetItem *item = new QListWidgetItem();
    QSize size = item->sizeHint();
    item->setSizeHint(container->size());
    ui->o_list->addItem(item);
    ui->o_list->setItemWidget(item,container);
}

void allsite::show_info()
{
    int cnt=ui->site_list->count();
    for(int i=0;i<cnt;i++)
    {
       QListWidgetItem *item =ui->site_list->takeItem(0);
       delete item;
    }
    QList<site>buf=man->get_every_site();
    ui->time_La->setText("您的出游时间为"+vis_time.toString("yyyy年MM月dd日hh时mm分"));
    for(int i=0;i<buf.size();i++)
    {
        qDebug()<<"site :"<<buf.at(i).name;
        if(buf.at(i).is_pub==1)
        {
            buf[i].left=man->get_site_num(buf.at(i).id,vis_time);
            create_item(buf.at(i));
        }
    }
}

void allsite::get_time(QDateTime v_time)
{
    vis_time=v_time;
}

void allsite::refresh()
{
    show_info();
    int cnt=ui->o_list->count();
    for(int i=0;i<cnt;i++)
    {
       QListWidgetItem *item =ui->o_list->takeItem(0);
       delete item;
    }
    QList<order_site>buf=man->get_order_que();
    for(int i=0;i<buf.size();i++)
    {
        create_item(buf.at(i));
    }
}



