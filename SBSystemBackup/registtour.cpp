//旅游团注册
#include "registtour.h"
#include "ui_registtour.h"

RegistTour::RegistTour(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegistTour)
{
    ui->setupUi(this);
    ui->id->setMaxLength(10);
    ui->passwd->setMaxLength(15);ui->passwd_2->setMaxLength(15);
    ui->phone->setMaxLength(11);
    QRegExp regx("^[A-Za-z0-9]+$");
    QRegExpValidator *va=new QRegExpValidator(regx,this);
    ui->id->setValidator(va);
    ui->phone->setValidator(va);
    ui->passwd->setEchoMode(QLineEdit::Password);
    ui->passwd_2->setEchoMode(QLineEdit::Password);
    this->setWindowFlags(this->windowFlags()&~Qt::WindowMaximizeButtonHint);
    this->setMaximumSize(this->size());
    this->setMinimumSize(this->size());
}

RegistTour::~RegistTour()
{
    delete ui;
}

void RegistTour::clear_all()
{
    ui->id->clear();
    ui->passwd->clear();
    ui->passwd_2->clear();
    ui->phone->clear();
    ui->max_age->setValue(0);
    ui->min_age->setValue(0);
    ui->num->setValue(1);
    ui->pro_id->show();
    ui->pro_pa->show();
    ui->pro_ph->show();
}

//检查id
void RegistTour::on_id_textChanged(const QString &arg1)
{
    if(arg1.size()<6)ui->pro_id->show();
    else ui->pro_id->hide();
}

//检查密码
void RegistTour::on_passwd_textChanged(const QString &arg1)
{
    if(arg1.size()<6)ui->pro_pa->show();
    else ui->pro_pa->hide();
}

//检查电话
void RegistTour::on_phone_textChanged(const QString &arg1)
{
    if(arg1.size()<11)ui->pro_ph->show();
    else ui->pro_ph->hide();
}

//注册
void RegistTour::on_pushButton_clicked()
{
    if(ui->max_age->value()<ui->min_age->value())
    {
        QMessageBox::about(this,"失败","最大年龄不得小于最小年龄");
        return;
    }
    if(ui->pro_id->isVisible()||ui->pro_pa->isVisible()||ui->pro_ph->isVisible())
    {
        QMessageBox::about(this,"失败","信息格式不正确");
        return;
    }
    if(ui->passwd->text()!=ui->passwd_2->text())
    {
        QMessageBox::about(this,"失败","两次密码不一样");
        return;
    }

    tourist user;
    user.id=ui->id->text();
    user.num=ui->num->value();
    user.password=ui->passwd->text();
    user.age_low=ui->min_age->value();
    user.age_max=ui->max_age->value();
    user.phone=ui->phone->text();
    //注册成功
    if(man->reg(user))
    {
        QMessageBox::about(this,"成功","注册成功，你的id为:"+user.id);
        this->hide();
    }
    else QMessageBox::about(this,"失败","注册失败，可能是因为ID冲突");
}
