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

void ordersite::send_info(site nowsite)
{
    now_site=nowsite;
    ui->id->setText(nowsite.id);
    ui->area->setText(nowsite.area);
    ui->agetype->setNum(nowsite.age_type);
    ui->level->setNum(nowsite.level);
    ui->time->setNum(nowsite.time);
    ui->name->setText(nowsite.name);
}
