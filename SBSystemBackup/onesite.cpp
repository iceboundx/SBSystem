//用户查看单个景点信息
#include "onesite.h"
#include "ui_onesite.h"
#include "global.h"



onesite::onesite(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::onesite)
{
    ui->setupUi(this);

    //显示景点信息

}

onesite::~onesite()
{
    delete ui;
}

void onesite::get_info(site now_site,QDateTime v_time)
{
    Site=now_site;
    vis_time=v_time;
    ui->name->setText(now_site.name);
    ui->area->setText(now_site.area);
    ui->time->setText(QString::number(now_site.time));
    ui->profile->setText(now_site.profile);
    qDebug()<<"agetype "<<now_site.age_type;
    if(now_site.age_type==0)
    ui->agetype->setText("适合全年龄段");
    else if(now_site.age_type==1)
    ui->agetype->setText("不适合儿童");
    else if(now_site.age_type==2)
    ui->agetype->setText("不适合长者");
    else if(now_site.age_type==3)
    ui->agetype->setText("不适合长者和儿童");
    ui->begintime->setText(now_site.begin_time.toString("MM月dd日"));
    ui->endtime->setText(now_site.end_time.toString("MM月dd日"));
    if(now_site.begin_time<=now_site.end_time)ui->label_y->setText("至今年");
    else ui->label_y->setText("至次年");
    ui->pricehigh->setText(QString::number(now_site.price_high));
    ui->pricelow->setText(QString::number(now_site.price_low));
    ui->level->setText(QString::number(now_site.level)+"级");
    ui->dis_type->addItem("普通票");
    for(int i=0;i<now_site.dis.size();i++)
        ui->dis_type->addItem(now_site.dis.at(i).type);
    ui->dis_type->setCurrentIndex(0);
    ui->buy_num->setMaximum(now_site.left);
    get_price();
}

void onesite::get_price()
{
    double disc=1.0;
    if(ui->dis_type->currentIndex()!=0)
    {
        int cindex=ui->dis_type->currentIndex();
        disc=Site.dis.at(cindex-1).d_price;
    }
    if(disc!=1.0)
    ui->cur_dis->setText("当前折扣为"+QString::number(disc*10));
    else ui->cur_dis->setText("当前无折扣");
    double now_price=Site.price_high;
    QDateTime l=QDateTime::fromString("2000:"+Site.begin_time.toString("MM:dd"),"yyyy:MM:dd");
    QDateTime r=QDateTime::fromString("2000:"+Site.end_time.toString("MM:dd"),"yyyy:MM:dd");
    QDateTime tt=QDateTime::fromString("2000:"+vis_time.toString("MM:dd"),"yyyy:MM:dd");
    if(man->is_in(tt,l,r))now_price=Site.price_low;
    now_price*=disc;
    ui->per_price->setText(QString::number(now_price));
    ui->all_price->setText(QString::number(now_price*ui->buy_num->value()));
}


void onesite::on_buy_num_valueChanged(int arg1)
{
    get_price();
}

void onesite::on_dis_type_currentIndexChanged(int index)
{
    get_price();
}

void onesite::on_add_clicked()
{
    order_site o_site;
    o_site.site_id=Site.id;
    o_site.price=ui->per_price->text().toDouble();
    o_site.type=ui->dis_type->currentText();
    o_site.vis_time=vis_time;
    o_site.num=ui->buy_num->text().toInt();
    if(o_site.num==0)
    {
        QMessageBox::about(this,"失败","没票啦！");
        return;
    }
    int res=man->add_order(o_site);
    if(res==1)
    {
        QMessageBox::about(this,"成功","添加购物车成功");
        emit save_order_site();
        this->hide();
    }
    else if(res==-1)
    {
        QMessageBox::about(this,"失败","添加失败，时间冲突");
    }
    else QMessageBox::about(this,"失败","没票啦！");

}
