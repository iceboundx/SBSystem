#include "admincount.h"
#include "ui_admincount.h"

admincount::admincount(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admincount)
{
    ui->setupUi(this);
}

void admincount::send_info()
{
    int cnt=ui->list->count();
    for(int i=0;i<cnt;i++)
    {
       QListWidgetItem *item =ui->list->takeItem(0);
       delete item;
    }
    site_list=man->get_every_site();
    for(int i=0;i<site_list.size();i++)
    {
        show_admin_site *container=new show_admin_site(this);
        container->send_info(site_list.at(i));
        QListWidgetItem *item = new QListWidgetItem();
        QSize size = item->sizeHint();
        item->setSizeHint(container->size());
        ui->list->addItem(item);
        ui->list->setItemWidget(item,container);
    }
}

admincount::~admincount()
{
    delete ui;
}
