//管理员统计功能
#include "admincount.h"
#include "ui_admincount.h"

admincount::admincount(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admincount)
{
    ui->setupUi(this);
    sort_type=0;
    this->setWindowFlags(this->windowFlags()&~Qt::WindowMaximizeButtonHint);
    this->setMaximumSize(this->size());
    this->setMinimumSize(this->size());
}


void admincount::send_info()
{
    if(sort_type==0)ui->sort_type->setText("当前没有进行排序");
    int cnt=ui->list->count();
    for(int i=0;i<cnt;i++)
    {
       QListWidgetItem *item =ui->list->takeItem(0);
       delete item;
    }
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

void admincount::on_num_clicked()
{
    sort_type=1;sort_info();
    ui->sort_type->setText("当前排序方式为:预定量");
}

void admincount::sort_info()
{
   site_list=man->get_every_site();
   if(sort_type==1)site_list=man->filter_site(site_list,5,"");
   if(sort_type==2)site_list=man->filter_site(site_list,7,"");
   if(sort_type==3)site_list=man->filter_site(site_list,8,"");
   if(sort_type==4)
   {
       int index=ui->season->currentIndex();
       if(index==0)return;
       if(index==1)site_list=man->filter_site(site_list,9,"春");
       if(index==2)site_list=man->filter_site(site_list,9,"夏");
       if(index==3)site_list=man->filter_site(site_list,9,"秋");
       if(index==4)site_list=man->filter_site(site_list,9,"冬");
   }
   send_info();
}

void admincount::on_people_clicked()
{
    sort_type=2;sort_info();
    ui->sort_type->setText("当前排序方式为:访问人数");
}

void admincount::on_pro_clicked()
{
    sort_type=3;sort_info();
    ui->sort_type->setText("当前排序方式为:利润");
}

void admincount::on_season_currentIndexChanged(int index)
{
    if(index==0)sort_type=0;
    else
    sort_type=4,ui->sort_type->setText("当前排序方式为:季节");
    sort_info();
}
