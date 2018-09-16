//特殊时段门票量编辑窗口
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
//保存特殊时段门票
void timelim::on_addtimelim_clicked()
{
    struct t_lim limit;
    limit.begin = ui->begin->dateTime();
    limit.end = ui->end->dateTime();
    limit.lim = ui->ticketnum->value();

}
