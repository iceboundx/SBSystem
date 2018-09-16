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
    ui->agetype->text() = one.age_type;
    ui->area->text() = one.area;
//    ui->date->text() = thissite.
    ui->id->text() = one.id;
    ui->level->text() = one.level;
    ui->time->text() = one.time;
    ui->name->text() = one.name;
//    ui->money->text() =

}

ordersite::~ordersite()
{
    delete ui;
}

void ordersite::send_info(site nowsite)
{
    now_site=nowsite;
    ui->id->text() = nowsite.id;
    ui->area->text() = nowsite.area;
    ui->agetype->text() = nowsite.age_type;
    ui->level->text() = nowsite.level;
    //ui->pricehigh->text() = nowsite.price_high;
    /*ui->pricelow->text() = nowsite.price_low;
    ui->profile->text() = nowsite.profile;*/
    ui->time->text() = nowsite.time;
    ui->name->text() = nowsite.name;
    /*QDateTime timebuffer;
    timebuffer = nowsite.begin_time;
    ui->begintime->text() = nowsite.toString("yyyy-MM-dd");
    timebuffer = thissite.end_time;
    ui->endtime->text() = nowsite.toString("yyyy-MM-dd");*/
}
