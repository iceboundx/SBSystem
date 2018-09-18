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

QList<t_lim> timelim::get_lim()
{
    return limque;
}

void timelim::clear_all()
{
    ui->time_list->clear();
    limque.clear();
}
//保存特殊时段门票
void timelim::on_addtimelim_clicked()
{
    t_lim limit;
    limit.begin.setDate(ui->datesta->date());
    limit.end.setDate(ui->dateed->date());
    limit.begin.setTime(ui->timesta->time());
    limit.end.setTime(ui->timeed->time());
    limit.lim=ui->ticketnum->value();
    qDebug()<<limit.begin<<" "<<limit.end;
    if(man->add_time_lim(limit))
    {
        QString l=limit.begin.date().toString("MM/dd");
        QString r=limit.end.date().toString("MM/dd");
        QString lt=limit.begin.time().toString("HH:mm");
        QString rt=limit.end.time().toString("HH:mm");
        QString num=QString::number(limit.lim);
        ui->time_list->addItem("从"+l+"到"+r+"每日"+lt+"到"+rt+"人数限制为"+num);
        limque.append(limit);
       /* ui->dateed->clear();
        ui->datesta->clear();
        ui->timesta->clear();
        ui->timeed->clear();
        ui->ticketnum->clear();*/
        QMessageBox::about(this,"成功","添加成功");
    }
    else QMessageBox::about(this,"失败","添加失败,可能是因为时间冲突");
}
