#include "global.h"
#include "addsite.h"
#include "ui_addsite.h"
#define MAX_LEN 200
#define ID_LEN 6

struct site save;


addsite::addsite(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addsite)
{
    ui->setupUi(this);
    Timelim = new timelim;

    ui->idprompt->hide();
    ui->newid->hide();
    ui->newlabel->hide();
    ui->newprice->hide();
    ui->disprompt->hide();
    ui->saveprice->hide();

}

addsite::~addsite()
{
    delete ui;
}

void addsite::on_timelimit_clicked()
{
    Timelim->show();
}




void addsite::on_save_clicked()//保存草稿
{

    save.is_pub = 0;
    if(1)
    {   //成功保存
        save.id = ui->id->toPlainText();
        save.name = ui->name->toPlainText();
        save.price_high = ui->pricehigh->value();
        save.price_low = ui->pricelow->value();
        save.profile = ui->profile->toPlainText();
        save.level = ui->level->value();
        save.area = ui->area->toPlainText();
        save.ma_price = ui->maprice->value();
        save.begin_time = ui->dateEdit->dateTime();
        save.end_time = ui->dateEdit_3->dateTime();
        QString time;
        time = ui->time->toPlainText();
        save.time = time.toInt();

        qDebug()<<"savesuccess";
    }


}

void addsite::on_listWidget_itemClicked(QListWidgetItem *item)//添加特殊票价
{
    ui->newid->show();
    ui->newlabel->show();
    ui->newprice->show();    
}

void addsite::on_saveprice_clicked()//保存特殊票价
{    
    QString newid, newprice;
    //判断输入的折扣格式为 0.xx
    QString textContent;
    int judge = 1;
    textContent = ui->newprice->text();
    if(textContent[0] != 0) judge = 0;
    else if(textContent[1] != ".") judge = 0;
    else {
        for(int i=2; i<=newprice.size(); i++){
            if(!textContent[i].isDigit()) {
                judge = 0;
                break;
             }break;
         }
    }

    if(judge){
        newid = ui->newid->toPlainText();
        ui->listWidget->addItem(newid);

        struct discount dis;
        dis.d_price = textContent.toDouble();
        dis.type = newid;
    }
    else ui->disprompt->show();

    ui->newid->clear();
    ui->newprice->clear();        
}

void addsite::on_id_textChanged()//景点id检查
{
    QString textContent;
    textContent = ui->id->toPlainText();
    int length = textContent.count();

    int is_num;
    is_num = 1;
    for(int i=0; i<length;i++){
        if(!textContent[i].isDigit()){
            is_num = 0;
            break;
        }
    }
    if(!is_num) ui->idprompt->show(); //id是否纯数字

    if(length<ID_LEN){
        ui->idprompt->show();
    }
    else if(length==ID_LEN && is_num) ui->idprompt->hide();
    else if(length>ID_LEN){  //控制id输入长度
        int position;
        position = ui->id->textCursor().position();
        QTextCursor textCursor = ui->id->textCursor();
        textContent.remove(position - (length - ID_LEN), length - ID_LEN);
        ui->id->setText(textContent);
        textCursor.setPosition(position - (length - ID_LEN));
        ui->id->setTextCursor(textCursor);
    }

    qDebug()<<is_num;
}


void addsite::on_comboBox_activated(int index)
{
    save.age_type = 0;
    switch (index) {
    case 0:
        save.age_type = 0;
        break;
    case 1:
        save.age_type = 1;
        break;
    case 2:
        save.age_type = 2;
        break;
    case 3:
        save.age_type = 3;
        break;
    default:
        break;
    }

    qDebug()<<save.age_type;
}


void addsite::on_profile_textChanged()
{
    QString textContent;
    textContent = ui->profile->toPlainText();
    int length = textContent.count();

    //控制profile输入长度
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


void addsite::on_publish_clicked()//发布景点
{
    save.is_pub = 1;
}

