//管理员添加景点功能
#include "global.h"
#include "addsite.h"
#include "ui_addsite.h"
#define MAX_LEN 200
#define ID_LEN 6
#define R_LEN 15

addsite::addsite(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addsite)
{
    ui->setupUi(this);
    Timelim = new timelim(this);
    connect(Timelim,SIGNAL(add_lim(t_lim)),this,SLOT(get_lim(t_lim)));
    QDoubleValidator *double_v=new QDoubleValidator(0.01,0.99,2,ui->dis_num);
    double_v->setNotation(QDoubleValidator::StandardNotation);
    ui->dis_num->setValidator(double_v);
    ui->id->setMaxLength(ID_LEN);
    ui->name->setMaxLength(R_LEN);
    ui->area->setMaxLength(R_LEN);
    ui->dis_name->setMaxLength(4);
    QIntValidator *int_v=new QIntValidator(0,60*24,ui->time);
    ui->time->setValidator(int_v);
}

addsite::~addsite()
{
    delete ui;
}

void addsite::clear_all()
{
    ui->disprompt->hide();
    ui->date_begin->clear();
    ui->date_end->clear();
    ui->area->clear();
    ui->dis_name->clear();
    ui->dis_num->clear();
    ui->id->clear();
    ui->name->clear();
    ui->profile->clear();
    ui->pricehigh->clear();
    ui->pricelow->clear();
    ui->price_list->clear();
    ui->level->clear();
    ui->maprice->clear();
    ui->time->clear();
    ui->ticketnum->clear();
}

void addsite::get_lim(t_lim lim)
{
    now_site.lim.append(lim);
}

void addsite::on_timelimit_clicked()
{
    Timelim->show();
}



//保存草稿
void addsite::on_save_clicked()
{
    save_site();
    if(man->add_site(now_site))
    {
        QMessageBox::about(this,"添加成功","添加成功了！");
    }
    else
    {
        QMessageBox::about(this,"添加失败","添加失败，可能是ID冲突");
    }
}

//添加特殊票价

//保存特殊票价

//控制profile输入长度
void addsite::on_profile_textChanged()
{
    QString textContent;
    textContent = ui->profile->toPlainText();
    int length = textContent.count();

    if(length>MAX_LEN){
        int position;
        position = ui->profile->textCursor().position();
        QTextCursor textCursor = ui->profile->textCursor();
        textContent.remove(position - (length - MAX_LEN), length - MAX_LEN);
        ui->profile->setText(textContent);
        textCursor.setPosition(position - (length - MAX_LEN));
        ui->profile->setTextCursor(textCursor);
    }
}

//发布景点
void addsite::on_publish_clicked()
{
    save_site();
    now_site.is_pub=1;
    if(man->add_site(now_site))
    {
        QMessageBox::about(this,"添加成功","添加成功了！");
    }
    else
    {
        QMessageBox::about(this,"添加失败","添加失败，可能是ID冲突");
    }
}


void addsite::on_id_textChanged(const QString &arg1)
{
    int len=ui->id->text().size();
    if(len==6)ui->disprompt->hide();
    else ui->disprompt->show();
}

void addsite::on_date_begin_userDateChanged(const QDate &date)
{
    change_date_tip();
}

void addsite::on_date_end_userDateChanged(const QDate &date)
{
    change_date_tip();
}

void addsite::save_site()
{
    now_site.id=ui->id->text();
    now_site.name=ui->name->text();
    now_site.area=ui->area->text();
    now_site.profile=ui->profile->toPlainText();
    now_site.price_high=ui->pricehigh->value();
    now_site.price_low=ui->pricelow->value();
    now_site.time=ui->time->text().toInt();
    now_site.level=ui->level->value();
    now_site.ma_price=ui->maprice->value();
    now_site.age_type=ui->people->currentIndex();
    now_site.begin_time=ui->date_begin->dateTime();
    now_site.end_time=ui->date_end->dateTime();
    now_site.is_pub=0;
}

void addsite::change_date_tip()
{
    QDate l=ui->date_begin->date(),r=ui->date_end->date();
    if(l<=r)
    {
        ui->label_y->setText("至今年");
    }
    else ui->label_y->setText("至明年");
}

void addsite::on_saveprice_clicked()
{
    QString now_type=ui->dis_name->text();
    QString now_num=ui->dis_num->text();
    discount dis;
    dis.d_price =now_num.toDouble();
    dis.type=now_type;
    now_site.dis.append(dis);
    ui->price_list->addItem(now_type+"  折扣:"+now_num);
    ui->dis_name->clear();
    ui->dis_num->clear();
}
