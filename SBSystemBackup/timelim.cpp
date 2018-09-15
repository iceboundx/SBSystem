
#include "timelim.h"
#include "ui_timelim.h"
#include "global.h"
//#include <QString>

timelim::timelim(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::timelim)
{
    ui->setupUi(this);
}

timelim::~timelim()
{
    delete ui;
}

void timelim::on_addtimelim_clicked()//保存特殊时段门票
{
    struct t_lim limit;
    limit.begin = ui->begin->dateTime();
    limit.end = ui->end->dateTime();
//    QString ticketnum;
    limit.lim = ui->ticketnum->value();
//    limit.lim = QString::toInt(ticketnum);
}
