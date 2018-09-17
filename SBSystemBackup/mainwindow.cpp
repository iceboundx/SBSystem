//登录界面
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "global.h"
#include "touristfunctionlist.h"
#include "adminfuntionlist.h"

#define MIN_LEN 6
#define MAX_LEN 10


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    touristfunction = new TouristFunctionList();
    adminfunction = new AdminFuntionList();

    ui->warn->hide();
    ui->warn_2->hide();
    ui->tprompt->hide();
    ui->aprompt->hide();
    ui->tpasswd->setEchoMode(QLineEdit::Password);
    ui->apasswd->setEchoMode(QLineEdit::Password);
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

    tou.id = ui->tusername->toPlainText();
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
    ad.id = ui->ausername->toPlainText();
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
    exit(0);
}

//控制ID输入长度
void MainWindow::on_tusername_textChanged()
{
    QString textContent;
    textContent = ui->tusername->toPlainText();
    int length = textContent.count();

    if(length>MAX_LEN){
        ui->tprompt->show();
        int position;
        position = ui->tusername->textCursor().position();
        QTextCursor textCursor = ui->tusername->textCursor();
        textContent.remove(position - (length - MAX_LEN), length - MAX_LEN);
        ui->tusername->setText(textContent);
        textCursor.setPosition(position - (length - MAX_LEN));
        ui->tusername->setTextCursor(textCursor);
    }

}


//控制ID输入长度
void MainWindow::on_ausername_textChanged()
{
    QString textContent;
    textContent = ui->ausername->toPlainText();
    int length = textContent.count();
    if(length>MAX_LEN){
        ui->aprompt->show();
        int position;
        position = ui->ausername->textCursor().position();
        QTextCursor textCursor = ui->ausername->textCursor();
        textContent.remove(position - (length - MAX_LEN), length - MAX_LEN);
        ui->ausername->setText(textContent);
        textCursor.setPosition(position - (length - MAX_LEN));
        ui->ausername->setTextCursor(textCursor);
    }
}
