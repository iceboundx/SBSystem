//用户个人信息
#include "touristinfo.h"
#include "ui_touristinfo.h"
#include "global.h"

#include <QString>

#define TEL_LEN 11
#define PASS_LEN 15
int isnum;
int length;
struct tourist tchange;

touristinfo::touristinfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::touristinfo)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags()&~Qt::WindowMaximizeButtonHint);
    this->setMaximumSize(this->size());
    this->setMinimumSize(this->size());
    QRegExp regx("^[A-Za-z0-9]+$");
    QRegExpValidator *va=new QRegExpValidator(regx,this);
    ui->changePasswd->setValidator(va);
    ui->changePasswd->setMaxLength(20);
}

void touristinfo::send_info(tourist usr)
{
    user=usr;
    ui->changePasswd->hide();
    ui->changeTel->hide();
    ui->changePasswd->clear();
    ui->changeTel->clear();

    ui->promptTel->hide();
    ui->promptpasswd->hide();

    ui->id->setText(user.id);
    ui->passwd->setText("*******");
    ui->tel->setText(user.phone);
    ui->agehigh->setNum(user.age_max);
    ui->agelow->setNum(user.age_low);
    ui->num->setNum(user.num);
}

touristinfo::~touristinfo()
{
    delete ui;
}

//点击修改密码
void touristinfo::on_changePasswd_2_clicked()
{
    if(!ui->changePasswd->isVisible())
    ui->changePasswd->show(),ui->changePasswd_2->setText("取消");
    else
    ui->changePasswd->setText(""),ui->changePasswd->hide(),ui->changePasswd_2->setText("修改"),ui->promptpasswd->hide();
}

//点击修改电话
void touristinfo::on_changeTel_2_clicked()
{
    if(!ui->changeTel->isVisible())
    ui->changeTel->show(),ui->changeTel_2->setText("取消"),ui->promptTel->show();
    else
    ui->changeTel->setText(""),ui->changeTel->hide(),ui->changeTel_2->setText("修改"),ui->promptTel->hide();
}

//点击保存
void touristinfo::on_save_clicked()
{
    if(ui->promptTel->isVisible())
    {
        QMessageBox::critical(NULL, "错误", "信息有误，请您仔细检查", QMessageBox::Yes, QMessageBox::Yes);
    }
    else
    {
        tourist new_user;
        bool is_pa=0;
        bool flag=0;
        new_user=man->get_tourist();
        if(ui->changePasswd->isVisible())
        new_user.password=ui->changePasswd->text(),is_pa=1,flag=1;
        if(ui->changeTel->isVisible())
        new_user.phone=ui->changeTel->toPlainText(),flag=1;
        if(flag)
        {
            man->change_tourist(new_user,is_pa);
            QMessageBox::about(NULL, "设置成功", "设置成功了！");
        }
        this->hide();
    }
}

//检查电话
void touristinfo::on_changeTel_textChanged()
{
    QString now_text=ui->changeTel->toPlainText();
    int length=now_text.size();
    if(length==0)return;
    QString textContent;
    bool flag=0;
    for(int i=0;i<length;i++)
    {
        if(now_text.at(i).isDigit())  textContent.append(now_text.at(i));
        else flag=1;
    }
    QChar ed=now_text.at(length-1);
    qDebug()<<ed;
    if(length>TEL_LEN||flag){
        ui->promptTel->show();
        if(flag && ed.isDigit()) ui->changeTel->setText(textContent);
        else
        ui->changeTel->setText(now_text.left(length-1));
        int position = ui->changeTel->textCursor().position();
        QTextCursor textCursor= ui->changeTel->textCursor();
        textCursor.setPosition(position + length-1);
        ui->changeTel->setTextCursor(textCursor);
    }
    if(length==TEL_LEN) ui->promptTel->hide();
    if(length<TEL_LEN) ui->promptTel->show();
}
