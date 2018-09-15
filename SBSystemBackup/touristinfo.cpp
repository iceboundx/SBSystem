#include "touristinfo.h"
#include "ui_touristinfo.h"
#include "global.h"


#define TEL_LEN 11

int isnum;
int length;
struct tourist tchange;

touristinfo::touristinfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::touristinfo)
{
    ui->setupUi(this);

    ui->changePasswd->hide();
    ui->changeTel->hide();
    ui->promptTel->hide();

    //显示个人信息
    ui->id->text() = tchange.id;
    ui->passwd->text() = tchange.password;
    ui->tel->text() = tchange.phone;
    ui->agehigh->text() = tchange.age_max;
    ui->agelow->text() = tchange.age_low;
    ui->num->text() = tchange.num;

}

touristinfo::~touristinfo()
{
    delete ui;
}

void touristinfo::on_changePasswd_2_clicked()
{
    ui->changePasswd->show();
    tchange.password = ui->changePasswd->toPlainText();
}

void touristinfo::on_changeTel_2_clicked()
{
    ui->changeTel->show();

    //控制电话输入长度
    QString textContent;
    textContent = ui->changeTel->toPlainText();
    if(length==TEL_LEN) ui->promptTel->hide();
    else if(length>TEL_LEN){
        int position;
        position = ui->changeTel->textCursor().position();
        QTextCursor textCursor = ui->changeTel->textCursor();
        textContent.remove(position - (length - TEL_LEN), length - TEL_LEN);
        ui->changeTel->setText(textContent);
        textCursor.setPosition(position - (length - TEL_LEN));
        ui->changeTel->setTextCursor(textCursor);
    }
}

void touristinfo::on_save_clicked()
{
    //检查电话规范
    if(ui->changeTel->isVisible()){
        QString textContent;
        textContent = ui->changeTel->toPlainText();
        length = textContent.count();

        int is_num;
        for(int i=0; i<length;i++){
            if(textContent[i].isDigit()){
                is_num = 0;
                break;
            }break;
        }
        if(!is_num) ui->promptTel->show(); //电话是否纯数字

        if(length!=TEL_LEN){
            ui->promptTel->show();
        }
    }

    //成功更新信息
}
