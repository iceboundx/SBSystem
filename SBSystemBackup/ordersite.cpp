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
