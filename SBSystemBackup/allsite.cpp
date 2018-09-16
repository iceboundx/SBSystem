//用户所有景点列表
#include "allsite.h"
#include "ui_allsite.h"
#include "global.h"



allsite::allsite(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::allsite)
{
    ui->setupUi(this);

    create_item();
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
    emit hide_now();
    //back = 1;
}

//每个景点
void allsite:: create_item(){
    struct site sites;

    QWidget *container = new QWidget;
    QHBoxLayout *hLayout = new QHBoxLayout();
    hLayout->addWidget(new QLabel(sites.name));
    hLayout->addWidget(new QLabel(sites.area));
    hLayout->addWidget(new QLabel(QString::number(sites.price_low)));
    hLayout->addWidget(new QPushButton("查看"));
    container->setLayout(hLayout);

    QListWidgetItem *item = new QListWidgetItem();
    QSize size = item->sizeHint();
    item->setSizeHint(QSize(size.width(),50));

    ui->listWidget->addItem(item);
    container->setSizeIncrement(size.width(),30);
    ui->listWidget->setItemWidget(item,container);

}


