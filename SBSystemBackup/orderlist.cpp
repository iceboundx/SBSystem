
#include "orderlist.h"
#include "ui_orderlist.h"
#include "global.h"



orderlist::orderlist(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::orderlist)
{
    ui->setupUi(this);
}

orderlist::~orderlist()
{
    delete ui;
}


void orderlist::create_item()
{
    struct order orders;

    QWidget *container = new QWidget;
    QHBoxLayout *hLayout = new QHBoxLayout();
    hLayout->addWidget(new QLabel(orders.id));
//    hLayout->addWidget(new QDateTime(orders.order_time));
//    hLayout->addWidget(new QList(orders.o_site));
    hLayout->addWidget(new QPushButton("查看"));
    container->setLayout(hLayout);

    QListWidgetItem *item = new QListWidgetItem();
    QSize size = item->sizeHint();
    item->setSizeHint(QSize(size.width(),50));

    ui->list->addItem(item);
    container->setSizeIncrement(size.width(),20);
    ui->list->setItemWidget(item,container);
}




void orderlist::on_seeall_clicked()
{
    create_item();
}
