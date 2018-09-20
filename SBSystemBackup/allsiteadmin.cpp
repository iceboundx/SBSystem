#include "allsiteadmin.h"
#include "ui_allsiteadmin.h"
#include "global.h"
#include "show_site.h"

allsiteadmin::allsiteadmin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::allsiteadmin)
{
    ui->setupUi(this);
    show_info();
    AddSite=new addsite(this);
    AddSite->setWindowModality(Qt::WindowModal);
    connect(AddSite,SIGNAL(now_hide()),this,SLOT(close_sub_window()));
    this->setWindowFlags(this->windowFlags()&~Qt::WindowMaximizeButtonHint);
    this->setMaximumSize(this->size());
    this->setMinimumSize(this->size());
}

allsiteadmin::~allsiteadmin()
{
    delete ui;

}

void allsiteadmin::close_sub_window()
{
    show_info();
}

//向已发布列表中添加景点
void allsiteadmin:: create_item_pub(site sites)
{
    ui->pub->addItem("ID:"+sites.id+"   "+sites.name);
}

//向未发布列表中添加景点
void allsiteadmin::create_item_unpub(site sites){
    ui->unpub->addItem("ID:"+sites.id+"   "+sites.name);
}

//列表显示
void allsiteadmin::show_info()
{
    QList<site>buf=man->get_every_site();
    buf_pu.clear();
    buf_unpu.clear();
    int cnt=ui->pub->count();
    //清除列表
    for(int i=0;i<cnt;i++)
    {
       QListWidgetItem *item =ui->pub->takeItem(0);
       delete item;
    }
    cnt=ui->unpub->count();
    for(int i=0;i<cnt;i++)
    {
       QListWidgetItem *item =ui->unpub->takeItem(0);
       delete item;
    }
    qDebug()<<buf.size();
    //重建列表
    for(int i=0;i<buf.size();i++){
        if(buf.at(i).is_pub==1)
        {
            create_item_pub(buf.at(i));
            buf_pu.append(buf.at(i));
        }
        else if(buf.at(i).is_pub==0)
        {
            create_item_unpub(buf.at(i));
            buf_unpu.append(buf.at(i));
        }
    }
}

//双击已发布景点查看详细信息
void allsiteadmin::on_pub_doubleClicked(const QModelIndex &index)
{
    int i=index.row();
    qDebug()<<buf_pu.at(i).name;
    if(!AddSite->isVisible())
    {
        AddSite->clear_all();
        AddSite->send_info(buf_pu.at(i));
        AddSite->set_mode(1);
        AddSite->show();
    }
}

//双击未发布景点编辑并发布
void allsiteadmin::on_unpub_doubleClicked(const QModelIndex &index)
{
    int i=index.row();
    if(!AddSite->isVisible())
    {
        AddSite->clear_all();
        AddSite->send_info(buf_unpu.at(i));
        AddSite->set_mode(1);
        AddSite->show();
    }
}
