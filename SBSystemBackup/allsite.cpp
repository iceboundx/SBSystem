#include "sbsmanager.h"
#include <QDebug>
#include<QLabel>
#include "main.cpp"
#include "allsite.h"
#include "ui_allsite.h"
#include "global.h"

#include <QList>
#include <QHBoxLayout>
#include <QListWidgetItem>


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


void allsite::on_ticket_stateChanged(int arg1)//勾选有票
{
    if(ui->ticket->isChecked()==true) {
        qDebug()<<"ticket"<<" "<<"down";
    }
    else qDebug()<<"up";
}


void allsite::on_discount_stateChanged(int arg1)//勾选折扣
{
    qDebug()<<"discount";
    if(ui->discount->isChecked()==true) {
        qDebug()<<"ticket"<<" "<<"down";
    }
    else qDebug()<<"up";
}

void allsite::on_back_clicked()
{
    qDebug()<<"back";
    back = 1;
}

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


