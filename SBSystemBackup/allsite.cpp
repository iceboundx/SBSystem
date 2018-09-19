//用户所有景点列表
#include "allsite.h"
#include "ui_allsite.h"
#include "global.h"



allsite::allsite(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::allsite)
{
    ui->setupUi(this);
    search_type=0;
}

allsite::~allsite()
{
    delete ui;
}

//勾选有票
void allsite::on_ticket_stateChanged(int arg1)
{
    if(ui->ticket->isChecked()==true) {
        qDebug()<<"ticket"<<" "<<"down";
    }
    else qDebug()<<"up";
    show_info();
}

//勾选折扣
void allsite::on_discount_stateChanged(int arg1)
{
    qDebug()<<"discount";
    if(ui->discount->isChecked()==true) {
        qDebug()<<"ticket"<<" "<<"down";
    }
    else qDebug()<<"up";
    show_info();
}

//点击返回
void allsite::on_back_clicked()
{
    qDebug()<<"back";
    this->hide();
    //back = 1;
}

//每个景点
void allsite:: create_item(site sites)
{
    show_site *container=new show_site(this);
    connect(container,SIGNAL(need_refresh()),this,SLOT(refresh()));
    container->send_info(sites,vis_time);//记着改
    QListWidgetItem *item = new QListWidgetItem();
    QSize size = item->sizeHint();
    item->setSizeHint(container->size());
    ui->site_list->addItem(item);
    ui->site_list->setItemWidget(item,container);
}

void allsite::create_item(order_site o_site)
{
    show_order *container=new show_order(this);
    container->send_info(o_site);
    QListWidgetItem *item = new QListWidgetItem();
    QSize size = item->sizeHint();
    item->setSizeHint(container->size());
    ui->o_list->addItem(item);
    ui->o_list->setItemWidget(item,container);
}

void allsite::fl_info()
{
    if(all_site.size()==0)return;
    QList<site>buf=all_site;
    qDebug()<<"sta fl";
    if(ui->discount->isChecked())buf=man->filter_site(buf,3,"");
    qDebug()<<"fl1";
    if(ui->ticket->isChecked())
    {
        QList<site>tep=buf;buf.clear();
        for(int i=0;i<tep.size();i++)
            if(tep.at(i).left>0)buf.append(tep.at(i));
    }
    qDebug()<<"fl2";
    int s_type=ui->sort_by->currentIndex();
    buf=man->filter_site(buf,6,"");
    if(s_type==1)buf=man->filter_site(buf,4,"");
    if(s_type==2)buf=man->filter_site(buf,5,"");
    for(int i=0;i<buf.size();i++)create_item(buf.at(i));
}

void allsite::show_info()
{
    int cnt=ui->site_list->count();
    for(int i=0;i<cnt;i++)
    {
       QListWidgetItem *item =ui->site_list->takeItem(0);
       delete item;
    }
    QList<site>buf;buf=man->get_every_site();
    if(search_type==1)
    {
        buf=man->filter_site(buf,1,ui->search->text());
    }
    else if(search_type==2)
    {
        buf=man->filter_site(buf,2,ui->search->text());
    }
    all_site.clear();
    ui->time_La->setText("您的出游时间为"+vis_time.toString("yyyy年MM月dd日hh时mm分"));
    for(int i=0;i<buf.size();i++)
    {
        if(buf.at(i).is_pub==1)
        {
            buf[i].left=man->get_site_num(buf.at(i).id,vis_time);
            all_site.append(buf.at(i));
        }
    }
    qDebug()<<"show info ok";
    fl_info();
}

void allsite::get_time(QDateTime v_time)
{
    vis_time=v_time;
}

void allsite::refresh()
{
    show_info();
    int cnt=ui->o_list->count();
    for(int i=0;i<cnt;i++)
    {
       QListWidgetItem *item =ui->o_list->takeItem(0);
       delete item;
    }
    QList<order_site>buf=man->get_order_que();
    for(int i=0;i<buf.size();i++)
    {
        create_item(buf.at(i));
    }
}
void allsite::on_clear_o_list_clicked()
{
    man->clear_order();
    refresh();
}

void allsite::on_save_order_clicked()
{
    if(man->get_order_que().size()>0)
    {
        QMessageBox::about(this,"成功","添加订单成功!");
        man->set_order(vis_time);
        man->clear_order();
        refresh();
        this->hide();
    }
    else
    {
        QMessageBox::about(this,"错误","购物车为空");
    }
}

void allsite::on_pushButton_clicked()
{
    this->hide();
    emit change_time();
}

void allsite::on_sort_by_currentIndexChanged(int index)
{
    show_info();
}

void allsite::on_name_s_clicked()
{
    search_type=1;
    show_info();
}

void allsite::on_area_s_clicked()
{
    search_type=2;
    show_info();
}

void allsite::on_pushButton_2_clicked()
{
    search_type=0;
    show_info();
}
