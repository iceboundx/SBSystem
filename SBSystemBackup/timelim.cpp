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
    this->setWindowFlags(this->windowFlags()&~Qt::WindowMaximizeButtonHint);
    this->setMaximumSize(this->size());
    this->setMinimumSize(this->size());
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

void timelim::refresh()
{
    clear_all();
    limque=man->get_lim_que();
    for(int i=0;i<limque.size();i++)
    {
        add_lim(limque.at(i));
    }
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
    if(man->add_time_lim(limit))
    {
        limque.append(limit);
        add_lim(limit);
        QMessageBox::about(this,"成功","添加成功");
    }
    else QMessageBox::about(this,"失败","添加失败,可能是因为时间冲突");
}

void timelim::add_lim(t_lim limit)
{
    QString l=limit.begin.date().toString("MM/dd");
    QString r=limit.end.date().toString("MM/dd");
    QString lt=limit.begin.time().toString("HH:mm");
    QString rt=limit.end.time().toString("HH:mm");
    QString num=QString::number(limit.lim);
    ui->time_list->addItem("从"+l+"到"+r+"每日"+lt+"到"+rt+"人数限制为"+num);//添加时段到列表
}

void timelim::on_time_list_clicked(const QModelIndex &index)
{
    QList<t_lim>buf=limque;
    limque.clear();man->clear_lim();
    int row=index.row();
    for(int i=0;i<buf.size();i++)
    {
        if(row==i)continue;
        man->add_time_lim(buf.at(i));
    }
    refresh();
}
