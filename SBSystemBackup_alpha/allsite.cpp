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
    ui->tip->hide();
    ui->search->setMaxLength(10);
    this->setWindowFlags(this->windowFlags()&~Qt::WindowMaximizeButtonHint);
    this->setMaximumSize(this->size());
    this->setMinimumSize(this->size());
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

//向景点list添加景点
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

//向购物车添加景点
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

//筛选功能
void allsite::fl_info()
{
    if(all_site.size()==0)return;
    QList<site>buf=all_site;
    qDebug()<<"sta fl";
    if(ui->discount->isChecked())buf=man->filter_site(buf,3,""),qDebug()<<"discount "<<buf.size();
    qDebug()<<"fl1";
    if(ui->ticket->isChecked())
    {
        QList<site>tep=buf;
        buf.clear();
        for(int i=0;i<tep.size();i++)
            if(tep.at(i).left>0)buf.append(tep.at(i));
        qDebug()<<"ticket "<<buf.size();
    }
    qDebug()<<"fl2 "<<buf.size();
    int s_type=ui->sort_by->currentIndex();
    buf=man->filter_site(buf,6,"");
    qDebug()<<"s_type "<<buf.size();
    if(s_type==1) buf=man->filter_site(buf,4,""),qDebug()<<111;
    if(s_type==2) buf=man->filter_site(buf,5,""),qDebug()<<222;
    for(int i=0;i<buf.size();i++) create_item(buf.at(i));//向景点list添加景点
}

//搜索
void allsite::show_info()
{
    int cnt=ui->site_list->count();
    for(int i=0;i<cnt;i++)
    {
       QListWidgetItem *item =ui->site_list->takeItem(0);
       delete item;
    }
    QList<site>buf;buf=man->get_every_site();//获取每个景点
    if(search_type==1)//搜名字
    {
        buf=man->filter_site(buf,1,ui->search->text());
    }
    else if(search_type==2)//搜地区
    {
        buf=man->filter_site(buf,2,ui->search->text());
    }
    all_site.clear();
    ui->time_La->setText("您的出游时间为"+vis_time.toString("yyyy年MM月dd日hh时mm分"));
    //遍历所有景点
    for(int i=0;i<buf.size();i++)
    {
        if(buf.at(i).is_pub==1)
        {
            buf[i].left=man->get_site_num(buf.at(i).id,vis_time);//获取符合条件的景点
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

//取消搜索和筛选
void allsite::clear_sort()
{
    search_type=0;
    ui->ticket->setChecked(0);
    ui->discount->setChecked(0);
    ui->sort_by->setCurrentIndex(0);
}

//重新刷新
void allsite::refresh()
{
    show_info();
    int cnt=ui->o_list->count();
    //
    for(int i=0;i<cnt;i++)
    {
       QListWidgetItem *item =ui->o_list->takeItem(0);
       delete item;
    }
    QList<order_site>buf=man->get_order_que();//获取当前购物车
    for(int i=0;i<buf.size();i++)
    {
        create_item(buf.at(i));
    }
}

//清空购物车
void allsite::on_clear_o_list_clicked()
{
    man->clear_order();
    refresh();
}

//确认订单
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

//修改出行时间
void allsite::on_pushButton_clicked()
{
    this->hide();
    emit change_time();
}

//选择排序方法
void allsite::on_sort_by_currentIndexChanged(int index)
{
    show_info();
}

//按名字搜索
void allsite::on_name_s_clicked()
{
    if(!ui->search->isEnabled())return;
    if(ui->search->text().size()==0)
    {
        QMessageBox::about(this,"错误","未输入搜索参数");
        return;
    }
    search_type=1;
    ui->tip->setText("已按照名字搜索");
    ui->tip->show();
    ui->search->setEnabled(0);
    show_info();
}

//按地区搜索
void allsite::on_area_s_clicked()
{
    if(!ui->search->isEnabled())return;
    if(ui->search->text().size()==0)
    {
        QMessageBox::about(this,"错误","未输入搜索参数");
        return;
    }
    search_type=2;
    ui->tip->setText("已按照地区搜索");
    ui->tip->show();
    ui->search->setEnabled(0);
    show_info();
}

//点击取消搜索
void allsite::on_pushButton_2_clicked()
{
    search_type=0;
    ui->search->setText("");
    ui->search->setEnabled(1);
    ui->tip->hide();
    show_info();
}
