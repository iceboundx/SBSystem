#include "getvistime.h"
#include "ui_getvistime.h"

getvistime::getvistime(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::getvistime)
{
    ui->setupUi(this);
}

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
