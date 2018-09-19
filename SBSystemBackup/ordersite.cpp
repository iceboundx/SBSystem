//从用户订单中查看景点
#include "global.h"
#include "ordersite.h"
#include "ui_ordersite.h"

struct site one;


ordersite::ordersite(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ordersite)
{
    ui->setupUi(this);

}

ordersite::~ordersite()
{
    delete ui;
}

void ordersite::create_item(order_site o_site)
{
    show_order *container=new show_order(this);
    container->send_info(o_site);
    QListWidgetItem *item = new QListWidgetItem();
    QSize size = item->sizeHint();
    item->setSizeHint(container->size());
    ui->o_list->addItem(item);
    ui->o_list->setItemWidget(item,container);
}

void ordersite::send_info(order noworder)
{
    int cnt=ui->o_list->count();
    for(int i=0;i<cnt;i++)
    {
       QListWidgetItem *item =ui->o_list->takeItem(0);
       delete item;
    }
    now_order=noworder;
    ui->id->setText(now_order.id);
    ui->order_time->setText(now_order.order_time.toString("yyyy年MM月dd日hh时mm分ss秒"));
    ui->tour_id_r->setText(now_order.tour_id);
    for(int i=0;i<now_order.o_site.size();i++)
    {
        create_item(now_order.o_site.at(i));
    }
}

void ordersite::on_del_clicked()
{
    if(man->del_order(now_order.id))
    {
        QMessageBox::about(this,"成功","删除成功");
        emit del_ok();
        this->hide();
    }
    else QMessageBox::about(this,"失败","不能删除超过24小时的订单！");
}
