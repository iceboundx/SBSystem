//登录界面
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "global.h"
#include "touristfunctionlist.h"
#include "adminfuntionlist.h"
#include <QTextCursor>

#define MIN_LEN 6
#define MAX_LEN 10


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    touristfunction = new TouristFunctionList();
    adminfunction = new AdminFuntionList();
    regtour=new RegistTour(this);
    ui->warn->hide();
    ui->warn_2->hide();
    ui->tprompt->hide();
    ui->aprompt->hide();
    ui->tpasswd->setMaxLength(20);
    ui->apasswd->setMaxLength(20);
    ui->tusername->setMaxLength(10);
    ui->ausername->setMaxLength(10);
    QRegExp regx("^[A-Za-z0-9]+$");
    QRegExpValidator *va=new QRegExpValidator(regx,this);
    ui->tpasswd->setValidator(va);
    ui->apasswd->setValidator(va);
    ui->tusername->setValidator(va);
    ui->ausername->setValidator(va);
    ui->tpasswd->setEchoMode(QLineEdit::Password);
    ui->apasswd->setEchoMode(QLineEdit::Password);
    this->setWindowFlags(this->windowFlags()&~Qt::WindowMaximizeButtonHint);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete touristfunction;
    delete adminfunction;
}

//游客团登录
void MainWindow::on_touristlogin_clicked()
{
    struct tourist tou;

    tou.id = ui->tusername->text();
    tou.password = ui->tpasswd->text();
    qDebug()<<tou.id<<" "<<tou.password;

    if(man->login(tou.id,tou.password,0)){  //登录成功
        this->hide();
        touristfunction->show();
    }
    else ui->warn->show();  //用户名或密码错误提示

    qDebug()<<"login";
}

//管理员登录
void MainWindow::on_adminlogin_clicked()
{
    struct admin ad;
    ad.id = ui->ausername->text();
    ad.password = ui->apasswd->text();
    qDebug()<<ad.id<<" "<<ad.password;

    if(man->login(ad.id,ad.password,1)){
        this->hide();
        //now_window=3;
        adminfunction->show();
    }
    else ui->warn_2->show();

    qDebug()<<"login";
}

void MainWindow::on_cancel_2_clicked()
{
    exit(0);
}

void MainWindow::on_cancel_3_clicked()
{
    regtour->clear_all();
    regtour->show();
}

//控制ID输入长度
void MainWindow::on_ausername_textChanged()
{
    QString textContent;
    textContent = ui->ausername->text();
    int length = textContent.count();
    if(length>=MIN_LEN&&length<MAX_LEN) ui->aprompt->hide();
    else ui->aprompt->show();
/*    if(length>MAX_LEN){
        ui->aprompt->show();
        int position;
        position = ui->ausername->textCursor().position();
        QTextCursor textCursor = ui->ausername->textCursor();
        textContent.remove(position - (length - MAX_LEN), length - MAX_LEN);
        ui->ausername->setText(textContent);
        textCursor.setPosition(position - (length - MAX_LEN));
        ui->ausername->setTextCursor(textCursor);
    }*/
}

void MainWindow::on_tusername_textChanged(const QString &arg1)
{
    QString textContent;
    textContent = ui->tusername->text();
    int length = textContent.count();
    if(length>=MIN_LEN&&length<MAX_LEN) ui->tprompt->hide();
    else ui->tprompt->show();

}
