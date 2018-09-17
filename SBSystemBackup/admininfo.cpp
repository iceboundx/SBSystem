//管理员个人信息
#include "global.h"
#include "admininfo.h"
#include "ui_admininfo.h"
#define TEL_LEN 11
#define PASS_LEN 15
struct admin change;
QString MAIL_NAME="^[a-zA-Z0-9_.-]+@[a-zA-Z0-9-]+(\\.[a-zA-Z0-9-]+)*\\.[a-zA-Z0-9]{2,6}$";
admininfo::admininfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admininfo)
{
    ui->setupUi(this);
    qDebug()<<MAIL_NAME;
}

admininfo::~admininfo()
{
    delete ui;
}

void admininfo::send_info(admin usr)
{
    user=usr;
    ui->newemail->hide();
    ui->newpasswd->hide();
    ui->newtel->hide();
    ui->newemail->clear();
    ui->newpasswd->clear();
    ui->newtel->clear();
    ui->promptemail->hide();
    ui->prompttel->hide();
    ui->promptpas->hide();
    ui->id->setText(user.id);
    ui->editemail->setText("修改");
    ui->editpasswd->setText("修改");
    ui->edittel->setText("修改");
    ui->password->setText("********");
    ui->phone->setText(user.phone);
    ui->email->setText(user.mail);
}

void admininfo::on_editpasswd_clicked()
{
    if(!ui->newpasswd->isVisible())
    ui->newpasswd->show(),ui->editpasswd->setText("取消"),ui->promptpas->show();
    else
    ui->newpasswd->setText(""),ui->newpasswd->hide(),ui->editpasswd->setText("修改"),ui->promptpas->hide();
}


void admininfo::on_edittel_clicked()
{    
    if(!ui->newtel->isVisible())
    ui->newtel->show(),ui->edittel->setText("取消"),ui->prompttel->show();
    else
    ui->newtel->setText(""),ui->newtel->hide(),ui->edittel->setText("修改"),ui->prompttel->hide();
}

void admininfo::on_editemail_clicked()
{
    if(!ui->newemail->isVisible())
    ui->newemail->show(),ui->editemail->setText("取消"),ui->promptemail->show();
    else
    ui->newemail->setText(""),ui->newemail->hide(),ui->editemail->setText("修改"),ui->promptemail->hide();;
}

//点击保存修改
void admininfo::on_save_clicked()
{
    if(ui->promptemail->isVisible()||ui->prompttel->isVisible())
    {
        QMessageBox::critical(NULL, "错误", "信息有误，请您仔细检查", QMessageBox::Yes, QMessageBox::Yes);
    }
    else
    {
        admin new_user;
        bool is_pa=0;
        bool flag=0;
        new_user=man->get_admin();
        if(ui->newpasswd->isVisible())
        new_user.password=ui->newpasswd->toPlainText(),is_pa=1,flag=1;
        if(ui->newemail->isVisible())
        new_user.mail=ui->newemail->text(),flag=1;
        if(ui->newtel->isVisible())
        new_user.phone=ui->newtel->toPlainText(),flag=1;
        if(flag)
        {
            man->change_admin(new_user,is_pa);
            QMessageBox::about(NULL, "设置成功", "设置成功了！");
        }
        this->hide();
    }
}

void admininfo::on_newpasswd_textChanged()
{
    QString now_text=ui->newpasswd->toPlainText();
    int length=now_text.size();
     if(length==0)return;
    QString textContent=now_text;
    if(length>PASS_LEN){
        int position;
        ui->promptpas->show();
        position = ui->newpasswd->textCursor().position();
        QTextCursor textCursor = ui->newpasswd->textCursor();
        textContent.remove(position - (length - PASS_LEN), length - PASS_LEN);
        ui->newpasswd->setText(textContent);
        textCursor.setPosition(position - (length - PASS_LEN));
        ui->newpasswd->setTextCursor(textCursor);
    }
}

void admininfo::on_newtel_textChanged()
{
    QString now_text=ui->newtel->toPlainText();
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
        ui->prompttel->show();
        if(flag && ed.isDigit()) ui->newtel->setText(textContent);
        else
        ui->newtel->setText(now_text.left(length-1));
        int position = ui->newtel->textCursor().position();
        QTextCursor textCursor= ui->newtel->textCursor();
        textCursor.setPosition(position + length-1);
        ui->newtel->setTextCursor(textCursor);
    }
    if(length==TEL_LEN) ui->prompttel->hide();
    if(length<TEL_LEN) ui->prompttel->show();
}

void admininfo::on_newemail_textChanged(const QString &arg1)
{
    QString now=ui->newemail->text();
    if(!is_email((now)))
    {
        ui->promptemail->show();
    }
    else ui->promptemail->hide();
}

bool admininfo::is_email(QString now)
{
    QRegExp rx(MAIL_NAME);
    qDebug()<<now;
    //rx.setPatternSyntax(QRegExp::Wildcard);
    if(rx.exactMatch(now))
    {
        qDebug()<<now;
        return 1;
    }
    return 0;
}
