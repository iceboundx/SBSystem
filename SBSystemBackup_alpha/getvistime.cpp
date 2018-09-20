//设置出行时间
#include "getvistime.h"
#include "ui_getvistime.h"

getvistime::getvistime(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::getvistime)
{
    ui->setupUi(this);
    //this->setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    this->setMaximumSize(this->size());
    this->setMinimumSize(this->size());
}

//设置最近最远时间
void getvistime::init()
{
    ui->vis_time->setMaximumDateTime(QDateTime::currentDateTime().addYears(1));
    ui->vis_time->setDateTime(QDateTime::currentDateTime().addDays(1));
    ui->vis_time->setMinimumDateTime(QDateTime::currentDateTime().addDays(1));
}

getvistime::~getvistime()
{
    delete ui;
}

void getvistime::on_pushButton_clicked()
{
    emit send_time(ui->vis_time->dateTime());
    this->hide();
}
