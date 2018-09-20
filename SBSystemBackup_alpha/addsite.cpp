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
    Timelim->setWindowModality(Qt::WindowModal);
    //设置折扣系数范围
    QDoubleValidator *double_v=new QDoubleValidator(0.01,0.99,2,ui->dis_num);
    double_v->setNotation(QDoubleValidator::StandardNotation);
    ui->dis_num->setValidator(double_v);
    ui->id->setMaxLength(ID_LEN);
    //设置id范围
    QIntValidator *int_q=new QIntValidator(0,999999,ui->id);
    ui->id->setValidator(int_q);
    ui->name->setMaxLength(R_LEN);
    ui->area->setMaxLength(R_LEN);
    ui->dis_name->setMaxLength(4);
    //设置游览时间范围
    QIntValidator *int_v=new QIntValidator(0,60*24,ui->time);
    ui->time->setValidator(int_v);

    this->setWindowFlags(this->windowFlags()&~Qt::WindowMaximizeButtonHint);
    this->setMaximumSize(this->size());
    this->setMinimumSize(this->size());
}

addsite::~addsite()
{
    delete ui;
}

//清空所有文本框
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
    man->clear_lim();
    now_site=empty_site;
}

//未发布重新编辑
void addsite::set_mode(bool is_ch)
{
    is_change=is_ch;
    ui->id->setEnabled(!is_ch);
    ui->name->setEnabled(!is_ch);
}

//显示编辑内容
void addsite::send_info(site now)
{
    clear_all();
    ui->date_begin->setDateTime(now.begin_time);
    ui->date_end->setDateTime(now.end_time);
    ui->area->setText(now.area);
    ui->name->setText(now.name);
    ui->profile->setText(now.profile);
    ui->pricehigh->setValue(now.price_high);
    ui->pricelow->setValue(now.price_low);
    ui->price_list->clear();
    ui->level->setValue(now.level);
    ui->maprice->setValue(now.ma_price);
    ui->time->setText(QString::number(now.time));
    ui->id->setText(now.id);
    ui->people->setCurrentIndex(now.age_type);
    for(int i=0;i<now.dis.size();i++)
    {
        discount now_dis=now.dis.at(i);
        set_dis(now_dis);
    }
    for(int i=0;i<now.lim.size();i++)
    {
        t_lim now_lim=now.lim.at(i);
        man->add_time_lim(now_lim);
    }
}

//添加按时间段限制票价
void addsite::get_lim(t_lim lim)
{
    now_site.lim.append(lim);
}


void addsite::on_timelimit_clicked()
{
    Timelim->show();
}

//检查内容并保存草稿
void addsite::on_save_clicked()
{
    save_site();
    if(now_site.id=="")
    {
        QMessageBox::about(this,"错误","id不能为空");
        return;
    }
    if(now_site.name=="")
    {
        QMessageBox::about(this,"错误","名字不能为空");
        return;
    }
    if(ui->time->text()=="")
    {
        QMessageBox::about(this,"错误","时间不能为空");
        return;
    }
    if(now_site.area=="")
    {
        QMessageBox::about(this,"错误","区域不能为空");
        return;
    }
    if(now_site.profile=="")
    {
        QMessageBox::about(this,"错误","简介不能为空");
        return;
    }
    //重新编辑后保存
    if(is_change)
    {
        man->change_site(now_site);
        QMessageBox::about(this,"修改成功","修改成功了！");
        man->clear_lim();
        Timelim->clear_all();
        now_site=empty_site;
        emit now_hide();
        this->hide();
    }
    else
    {
        if(man->add_site(now_site))//向数据库成功添加
        {
            QMessageBox::about(this,"添加成功","添加成功了！");
            man->clear_lim();
            Timelim->clear_all();
            now_site=empty_site;
            emit now_hide();
            this->hide();
        }
        else
        {
            QMessageBox::about(this,"添加失败","添加失败，可能是ID或景点名称冲突");
        }
    }
    now_site=empty_site;
}


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

//检查内容并发布景点
void addsite::on_publish_clicked()
{
    save_site();//保存
    if(now_site.id=="")
    {
        QMessageBox::about(this,"错误","id不能为空");
        return;
    }
    if(now_site.name=="")
    {
        QMessageBox::about(this,"错误","名字不能为空");
        return;
    }
    if(ui->time->text()=="")
    {
        QMessageBox::about(this,"错误","时间不能为空");
        return;
    }
    if(now_site.area=="")
    {
        QMessageBox::about(this,"错误","区域不能为空");
        return;
    }
    if(now_site.profile=="")
    {
        QMessageBox::about(this,"错误","简介不能为空");
        return;
    }
    now_site.is_pub=1;
    if(is_change)
    {
        man->change_site(now_site);
        QMessageBox::about(this,"修改成功","修改成功了！");
        man->clear_lim();
        Timelim->clear_all();
        now_site=empty_site;
        this->hide();
        emit now_hide();
    }
    else
    {
        if(man->add_site(now_site))
        {
            QMessageBox::about(this,"添加成功","添加成功了！");
            man->clear_lim();
            Timelim->clear_all();
            now_site=empty_site;
            this->hide();
            emit now_hide();
        }
        else
        {
            QMessageBox::about(this,"添加失败","添加失败，可能是ID或景点名称冲突");
        }
    }
}

//控制id输入长度
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

//保存
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
    now_site.lim=Timelim->get_lim();
    now_site.is_pub=0;
}

//检查淡旺季日期
void addsite::change_date_tip()
{
    QDate l=ui->date_begin->date(),r=ui->date_end->date();
    if(l<=r)
    {
        ui->label_y->setText("至今年");
    }
    else ui->label_y->setText("至明年");
}

//向折扣list添加折扣
void addsite::set_dis(discount d)
{
    ui->price_list->addItem(d.type+"  折扣:"+QString::number(d.d_price));
    ui->dis_name->clear();
    ui->dis_num->clear();
}

//检查并添加折扣
void addsite::on_saveprice_clicked()
{
    QString now_type=ui->dis_name->text();
    //遍历现有所有discount检查冲突
    for(int i=0;i<now_site.dis.size();i++)
        if(now_site.dis.at(i).type==now_type)
        {
            QMessageBox::about(this,"错误","折扣种类错误");
            return;
        }
    if(ui->dis_num->text().toDouble()>1)
    {
        QMessageBox::about(this,"错误","折扣系数错误");
        return;
    }
    QString now_num=ui->dis_num->text();
    discount dis;
    dis.d_price =now_num.toDouble();
    dis.type=now_type;
    now_site.dis.append(dis);
    set_dis(dis);//添加折扣
}

//双击删除折扣list中的折扣
void addsite::on_price_list_itemDoubleClicked(QListWidgetItem *item)
{
    //获取双击的item的行数并移除出list
    int row=ui->price_list->currentRow();
    ui->price_list->takeItem(row);

    QList<discount> buf;
    //遍历所有discount，将非当前row保存
    for(int i=0;i<now_site.dis.size();i++){
        if(i==row)continue;
        buf.append(now_site.dis.at(i));
    }
    now_site.dis=buf;
}
