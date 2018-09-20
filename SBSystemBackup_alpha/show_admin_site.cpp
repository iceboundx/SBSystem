#include "show_admin_site.h"
#include "ui_show_admin_site.h"

show_admin_site::show_admin_site(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::show_admin_site)
{
    ui->setupUi(this);
    More=new moreadminsite(this);
}

show_admin_site::~show_admin_site()
{
    delete ui;
}

//初始化界面&获取信息
void show_admin_site::send_info(site now)
{
    now_site=now;
    ui->name->setText(now.name);
    ui->area->setText(now.area);
    ui->all_order->setText("总预订量:"+QString::number(now.num));
    ui->price_low->setText("淡季价格:"+QString::number(now.price_low));
    ui->price_high->setText("旺季价格:"+QString::number(now.price_high));
    ui->ma_price->setText("维护费用:"+QString::number(now.ma_price));
    ui->area->setText(now.area);
    int sprr=man->get_season_num(now.id,"春");
    int summ=man->get_season_num(now.id,"夏");
    int autt=man->get_season_num(now.id,"秋");
    int winn=man->get_season_num(now.id,"冬");
    ui->spring->setText("春季人数"+QString::number(sprr));
    ui->summer->setText("夏季人数"+QString::number(summ));
    ui->autumn->setText("秋季人数"+QString::number(autt));
    ui->winter->setText("冬季人数"+QString::number(winn));
    ui->profit->setText("今年利润:"+QString::number(man->get_profit(now.id)));
    ui->all_num->setText("总访问人数"+QString::number(man->get_people_num(now.id)));
}

void show_admin_site::on_more_info_clicked()
{
    More->send_info(now_site.id);
    More->show();
}
