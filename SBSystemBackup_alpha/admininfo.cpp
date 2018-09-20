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
    this->setWindowFlags(this->windowFlags()&~Qt::WindowMaximizeButtonHint);
    this->setMaximumSize(this->size());
    this->setMinimumSize(this->size());
    QRegExp regx("^[A-Za-z0-9]+$");
    QRegExpValidator *va=new QRegExpValidator(regx,this);
    ui->newpasswd->setValidator(va);
    ui->newpasswd->setMaxLength(15);
}

admininfo::~admininfo()
{
    delete ui;
}

//获取并显示信息
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

//点击修改密码
void admininfo::on_editpasswd_clicked()
{
    if(!ui->newpasswd->isVisible())
    ui->newpasswd->show(),ui->editpasswd->setText("取消"),ui->promptpas->show();
    else
    ui->newpasswd->setText(""),ui->newpasswd->hide(),ui->editpasswd->setText("修改"),ui->promptpas->hide();
}

//点击修改电话
void admininfo::on_edittel_clicked()
{    
    if(!ui->newtel->isVisible())
    ui->newtel->show(),ui->edittel->setText("取消"),ui->prompttel->show();
    else
    ui->newtel->setText(""),ui->newtel->hide(),ui->edittel->setText("修改"),ui->prompttel->hide();
}

//点击修改邮箱
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
        bool is_pa=0;//是否修改密码
        bool flag=0;//是否修改了信息
        new_user=man->get_admin();
        if(ui->newpasswd->isVisible())
        new_user.password=ui->newpasswd->text(),is_pa=1,flag=1;
        if(ui->newemail->isVisible())
        new_user.mail=ui->newemail->text(),flag=1;
        if(ui->newtel->isVisible())
        new_user.phone=ui->newtel->toPlainText(),flag=1;
        if(flag)
        {
            man->change_admin(new_user,is_pa);//修改用户信息
            QMessageBox::about(NULL, "设置成功", "设置成功了！");
        }
        this->hide();
    }
}

//检测电话长度和规范
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
    //控制电话长度
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

//检测邮箱规范
void admininfo::on_newemail_textChanged(const QString &arg1)
{
    QString now=ui->newemail->text();
    if(!is_email((now)))
    {
        ui->promptemail->show();
    }
    else ui->promptemail->hide();
}

//判断邮箱格式
bool admininfo::is_email(QString now)
{
    QRegExp rx(MAIL_NAME);  
    if(rx.exactMatch(now))
    {
        return 1;
    }
    return 0;
}
