#include "show_site.h"
#include "ui_show_site.h"

show_site::show_site(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::show_site)
{
    ui->setupUi(this);
    OneSite =new onesite(this);
    connect(OneSite,SIGNAL(save_order_site()),this,SLOT(order_change()));
}

void show_site::send_info(site s,QDateTime v_time)
{
   now_site=s;
   vis_time=v_time;
   ui->name->setText(s.name);
   ui->area->setText("地区："+s.area);
   QDateTime l=QDateTime::fromString("2000:"+s.begin_time.toString("MM:dd"),"yyyy:MM:dd");
   QDateTime r=QDateTime::fromString("2000:"+s.end_time.toString("MM:dd"),"yyyy:MM:dd");
   QDateTime tt=QDateTime::fromString("2000:"+vis_time.toString("MM:dd"),"yyyy:MM:dd");//最好搞个函数
   qDebug()<<l<<" "<<r<<" "<<tt;
   if(man->is_in(l,r,tt))
       ui->price->setText(QString::number(s.price_low)+"元起");
   else  ui->price->setText(QString::number(s.price_high)+"元起");
   ui->left->setText("余票量: "+QString::number(s.left));
   ui->num->setText("已售出："+QString::number(s.num));
   if(s.dis.size()<1)
   ui->is_dis->hide();
   else ui->is_dis->show();
   qDebug()<<s.age_type;
   if(s.age_type==0)ui->type->setText("适合全年龄段");
   if(s.age_type==1)ui->type->setText("不适合儿童");
   if(s.age_type==2)ui->type->setText("不适合长者");
   if(s.age_type==3)ui->type->setText("不适合长者和儿童");
   if(s.is_re)ui->is_re->show();
   else ui->is_re->hide();
}

show_site::~show_site()
{
    delete ui;
}

void show_site::on_more_clicked()
{
    OneSite->get_info(now_site,vis_time);
    OneSite->show();
}

void show_site::order_change()
{
    emit need_refresh();
}
