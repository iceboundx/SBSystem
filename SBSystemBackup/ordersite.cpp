#include "global.h"
#include "ordersite.h"
#include "ui_ordersite.h"


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
