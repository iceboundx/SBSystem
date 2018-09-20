//每个订单
#include "show_order.h"
#include "ui_show_order.h"

show_order::show_order(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::show_order)
{
    ui->setupUi(this);
}

show_order::~show_order()
{
    delete ui;
}


void show_order::send_info(order_site o_site)
{
    ui->name->setText(man->get_site(o_site.site_id).name);
    ui->time->setText("您的出游时间为:"+o_site.vis_time.toString("yyyy年MM月dd日hh时mm分"));
    ui->num->setText("总计"+QString::number(o_site.num)+"张");
    ui->pe_price->setText("单价:"+QString::number(o_site.price));
    ui->all_price->setText("总价:"+QString::number(o_site.price*1.0*o_site.num));
    if(o_site.type=="")
    ui->type->setText("普通票");
    else ui->type->setText(o_site.type);
}
