//用户查看单个景点信息
#include "onesite.h"
#include "ui_onesite.h"
#include "global.h"

struct site thissite;

onesite::onesite(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::onesite)
{
    ui->setupUi(this);

    //显示景点信息
    ui->id->text() = thissite.id;
    ui->area->text() = thissite.area;
    ui->agetype->text() = thissite.age_type;
    ui->level->text() = thissite.level;
    ui->pricehigh->text() = thissite.price_high;
    ui->pricelow->text() = thissite.price_low;
    ui->profile->text() = thissite.profile;
    ui->time->text() = thissite.time;
    ui->name->text() = thissite.name;
    QDateTime timebuffer;
    timebuffer = thissite.begin_time;
    ui->begintime->text() = timebuffer.toString("yyyy-MM-dd");
    timebuffer = thissite.end_time;
    ui->endtime->text() = timebuffer.toString("yyyy-MM-dd");
}

onesite::~onesite()
{
    delete ui;
}

