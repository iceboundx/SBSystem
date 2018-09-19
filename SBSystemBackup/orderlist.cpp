//用户订单列表
#include "orderlist.h"
#include "ui_orderlist.h"
#include "global.h"



orderlist::orderlist(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::orderlist)
{
    ui->setupUi(this);
    OrderSite=new ordersite(this);
    connect(OrderSite,SIGNAL(del_ok()),this,SLOT(refresh()));
}

orderlist::~orderlist()
{
    delete ui;
}

void orderlist::send_info(bool is_admin)
{
    qDebug()<<"重新获取";
    order_list=man->get_every_order();
    if(is_admin)
    {
        admin_show();
    }
    else tour_show();
}

void orderlist::refresh()
{
    send_info(man->is_admin());
}

void orderlist::admin_show()
{
    int cnt=ui->o_list->count();
    for(int i=0;i<cnt;i++)
    {
       QListWidgetItem *item =ui->o_list->takeItem(0);
       delete item;
    }
    for(int i=0;i<order_list.size();i++)
    {
        order now=order_list.at(i);
        QString add="旅游团id: "+now.tour_id+"  预定时间: "+now.order_time.toString("yyyy年MM月dd日hh时mm分ss秒");
        double price=0;
        for(int j=0;j<now.o_site.size();j++)
            price+=now.o_site.at(j).price*now.o_site.at(j).num;
        add+=" 总价: "+QString::number(price);
        ui->o_list->addItem(add);
    }
}

void orderlist::tour_show()
{
    int cnt=ui->o_list->count();
    for(int i=0;i<cnt;i++)
    {
       QListWidgetItem *item =ui->o_list->takeItem(0);
       delete item;
    }
    for(int i=0;i<order_list.size();i++)
    {
        order now=order_list.at(i);
        qDebug()<<now.order_time;
        QString add="  预定时间: "+now.order_time.toString("yyyy年MM月dd日hh时mm分ss秒");
        double price=0;
        for(int j=0;j<now.o_site.size();j++)
            price+=now.o_site.at(j).price*now.o_site.at(j).num;
        add+=" 总价: "+QString::number(price);
        if(now.o_site.size()>0)
        add+=" 包含:"+man->get_site(now.o_site.at(0).site_id).name+"等景点";
        ui->o_list->addItem(add);
    }
}

//单个订单



void orderlist::on_o_list_doubleClicked(const QModelIndex &index)
{
    int r=index.row();
    OrderSite->send_info(order_list.at(r));
    OrderSite->show();
}
