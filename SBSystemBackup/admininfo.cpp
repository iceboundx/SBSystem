#include "global.h"
#include "admininfo.h"
#include "ui_admininfo.h"
#define TEL_LEN 11

struct admin change;

admininfo::admininfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admininfo)
{
    ui->setupUi(this);

    ui->newemail->hide();
    ui->newpasswd->hide();
    ui->newtel->hide();
    ui->promptemail->hide();
    ui->prompttel->hide();
}

admininfo::~admininfo()
{
    delete ui;
}

void admininfo::on_editpasswd_clicked()
{
    ui->newpasswd->show();
    change.password = ui->newpasswd->toPlainText();
}

void admininfo::on_edittel_clicked()
{
    //控制电话输入长度
    ui->newtel->show();
    QString textContent;
    int length;
    textContent = ui->newtel->toPlainText();
    if(length==TEL_LEN) ui->prompttel->hide();
    else if(length>TEL_LEN){
        int position;
        position = ui->newtel->textCursor().position();
        QTextCursor textCursor = ui->newtel->textCursor();
        textContent.remove(position - (length - TEL_LEN), length - TEL_LEN);
        ui->newtel->setText(textContent);
        textCursor.setPosition(position - (length - TEL_LEN));
        ui->newtel->setTextCursor(textCursor);
    }
}

void admininfo::on_editemail_clicked()
{
    ui->newemail->show();
    QString textContent;
    textContent = ui->newemail->text();

    //控制输入的邮箱格式
    QRegExp regexpEmail ("^[a-zA-Z][\\w\\.-]*[a-zA-Z0-9]@[a-zA-Z0-9][\\w\\.-]*[a-zA-Z0-9]\\.[a-zA-Z][a-zA-Z\\.]*[a-zA-Z]$");
    ui->newemail->setValidator(new QRegExpValidator(regexpEmail,this));

}

void admininfo::on_save_clicked()
{
    int telValid, mailValid;

    //检查电话规范
    if(ui->newtel->isVisible()){
        QString textContent;
        int length;
        textContent = ui->newtel->toPlainText();
        length = textContent.count();

        int is_num;
        for(int i=0; i<length;i++){
            if(textContent[i].isDigit()){
                is_num = 0;
                break;
            }break;
        }
        if(!is_num) ui->prompttel->show(); //电话是否纯数字

        if(length!=TEL_LEN){
            ui->prompttel->show();
        }
    }
    else telValid = 1;

     //检查邮箱规范
    if(ui->newemail->isVisible()){
        if(QValidator::Acceptable!=2)
            ui->promptemail->show();
    }
    else mailValid = 1;

    qDebug()<<telValid<< " "<<mailValid;

    //成功更新信息
    if(telValid == 1 && mailValid == 1){
        1;
    }

}
