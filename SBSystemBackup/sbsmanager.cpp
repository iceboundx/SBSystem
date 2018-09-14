#include "sbsmanager.h"

SBSmanager::SBSmanager(QString db_name,QObject *parent) : QObject(parent)
{
    db=new SBSdatabase(db_name);
    Is_admin=0;
    if(!db->exist("name","tourist","sqlite_master"))//7
    db->create("tourist (id varchar(40) primary key, password varchar(35), salt varchar(16), num int, age_low int, age_max int, phone varchar(15))");
    if(!db->exist("name","admin","sqlite_master"))//5
    db->create("admin (id varchar(40) primary key, password varchar(35), salt varchar(16), phone varchar(15), mail varchar(30))");
    if(!db->exist("name","site","sqlite_master"))//13
    db->create("site (id varchar(40) primary key, name nvarchar(50), profile nvarchar(300), price_low int, price_high int, time int, level int, area nvarchar(50), maintenance float, is_pub int, begin_time varchar(30), end_time varchar(30), age_type int)");
    if(!db->exist("name","site_discount","sqlite_master"))//3
    db->create("site_discount (id varchar(40), price float, type nvarchar(100))");
    if(!db->exist("name","site_lim","sqlite_master"))//4
    db->create("site_lim (id varchar(40), time_begin varchar(20), time_end varchar(20), num int)");
    if(!db->exist("name","sorder","sqlite_master"))//3
    db->create("sorder (id varchar(60) primary key, tourist_id varchar(35), order_time varchar(20))");
    if(!db->exist("name","order_site","sqlite_master"))//6
    db->create("order_site (id varchar(60) , site_id varchar(20), time_begin varchar(20), num int, type nvarchar(20), price float)");
    site_buf=get_all_site();
    order_buf=get_all_order();
}

QString SBSmanager::get_salt(int lenth)
{
    QString ret;
    for(int i=0;i<lenth;i++)
    {
        int t=qrand()%26+'A';
        ret.append((char)t);
    }
    return ret;
}

bool SBSmanager::is_in(QDateTime vis_time, t_lim lim)
{
    QDateTime l=QDateTime::fromString(lim.begin.toString("MM:dd:HH:mm"),"MM:dd:HH:mm");
    QDateTime r=QDateTime::fromString(lim.end.toString("MM:dd:HH:mm"),"MM:dd:HH:mm");
    QDateTime now=QDateTime::fromString(vis_time.toString("MM:dd:HH:mm"),"MM:dd:HH:mm");
    return is_in(now,l,r);
    return 0;
}

bool SBSmanager::is_in(QDateTime now, QDateTime l, QDateTime r)
{
    if(l<r)
    return l<=now&&r>=now;
    else return l<=now||r>=now;
}

int SBSmanager::get_site_num(QString site_id, QDateTime vis_time)
{
    site now=get_site(site_id);
    for(int i=0;i<(int)now.lim.size();i++)
    {
        if(is_in(vis_time,now.lim.at(i)))
        {
            return get_now_site_num(vis_time,now.lim.at(i));//注意是now!
        }
    }
    return MAX_NUM;
}

site SBSmanager::get_site(QString id)
{
    for(int i=0;i<(int)site_buf.size();i++)
    {
        if(site_buf.at(i).id==id)return site_buf.at(i);
    }
    site_empty.id="0";
    return site_empty;
}

order SBSmanager::get_order(QString id)
{
    for(int i=0;i<(int)order_buf.size();i++)
        if(order_buf.at(i).id==id)return order_buf.at(i);
    order_empty.id="0";
    return order_empty;
}

bool SBSmanager::login(QString id, QString password, bool is_admin)
{
    QString name=is_admin?"admin":"tourist";
    int value_len=is_admin?5:7;
    if(!db->exist("id",id,name))return 0;
    QVariantList buf=db->search("id",id,name,value_len);
    QString salt=buf.at(2).toString();
    QString MD5_password=md5(password+salt);
    if(MD5_password==buf.at(1))
    {
        now_id=id;
        Is_admin=is_admin;
        site_buf=get_all_site();
        order_buf=get_all_order();
        return 1;
    }
    else return 0;
}

bool SBSmanager::reg(admin user)
{
    if(db->exist("id",user.id,"admin"))return 0;
    QString salt=get_salt(salt_lenth);
    QString MD5_password=md5(user.password+salt);
    QVariantList buf;
    buf.append(user.id),buf.append(MD5_password),buf.append(salt);
    buf.append(user.phone),buf.append(user.mail);
    return db->insert(buf,"admin");
}

bool SBSmanager::reg(tourist user)
{
    if(db->exist("id",user.id,"tourist"))return 0;
    QString salt=get_salt(salt_lenth);
    QString MD5_password=md5(user.password+salt);
    QVariantList buf;
    buf.append(user.id),buf.append(MD5_password),buf.append(salt);
    buf.append(user.num),buf.append(user.age_low),buf.append(user.age_max),buf.append(user.phone);
    return db->insert(buf,"tourist");
}

QList<site> SBSmanager::get_all_site()
{
    QList<site> ret;
    QVariantList buf=db->get_all("site",13);
    for(int i=0;i<(int)buf.size();i+=13)
    {
       site now;
       //at!!!
       now.id=buf[i].toString();
       now.name=buf[i+1].toString();
       now.profile=buf[i+2].toString();
       now.price_low=buf[i+3].toInt();
       now.price_high=buf[i+4].toInt();
       now.time=buf[i+5].toInt();
       now.level=buf[i+6].toInt();
       now.area=buf[i+7].toString();
       now.ma_price=buf[i+8].toInt();
       now.is_pub=buf[i+9].toInt();
       now.begin_time=QDateTime::fromString(buf[i+10].toString(),DATE_FM);
       now.end_time=QDateTime::fromString(buf[i+11].toString(),DATE_FM);
       now.num=get_already_site_num(now.id);
       now.age_type=buf[i+12].toInt();
       QVariantList d_buf=db->search("id",now.id,"site_discount",3);
       for(int j=0;j<(int)d_buf.size();j+=3)
       {
           discount d_now;
           d_now.d_price=d_buf.at(j+1).toDouble();
           d_now.type=d_buf.at(j+2).toString();
           now.dis.append(d_now);//add
       }
       QVariantList s_buf=db->search("id",now.id,"site_lim",4);
       for(int j=0;j<(int)s_buf.size();j+=4)
       {
           t_lim t_now;
           t_now.begin=QDateTime::fromString(s_buf.at(j+1).toString(),TIME_FM);
           t_now.end=QDateTime::fromString(s_buf.at(j+2).toString(),TIME_FM);
           t_now.lim=s_buf.at(j+3).toInt();
           now.lim.append(t_now);//add
       }
       ret.append(now);//add all
    }
    return ret;
}

bool SBSmanager::is_admin() const
{
    return Is_admin;
}

bool SBSmanager::add_site(site now)
{
    if(db->exist("id",now.id,"site"))return 0;
    QVariantList buf;
    buf.append(now.id);
    buf.append(now.name);
    buf.append(now.profile);
    buf.append(now.price_low);
    buf.append(now.price_high);
    buf.append(now.time);
    buf.append(now.level);
    buf.append(now.area);
    buf.append(now.ma_price);
    buf.append(now.is_pub);
    buf.append(now.begin_time.toString(DATE_FM));
    buf.append(now.end_time.toString(DATE_FM));
    buf.append(now.age_type);
    if(!db->insert(buf,"site"))return 0;
    for(int i=0;i<(int)now.dis.size();i++)
    {
        buf.clear();
        buf.append(now.id);
        buf.append(now.dis.at(i).d_price);
        buf.append(now.dis.at(i).type);
        if(!db->insert(buf,"site_discount"))return 0;
    }
    for(int i=0;i<(int)now.lim.size();i++)
    {
        buf.clear();
        buf.append(now.id);
        buf.append(now.lim.at(i).begin.toString(TIME_FM));
        buf.append(now.lim.at(i).end.toString(TIME_FM));
        buf.append(now.lim.at(i).lim);
        if(!db->insert(buf,"site_lim"))return 0;
    }
    site_buf.clear();
    site_buf=get_all_site();
    clear_lim();
    return 1;
}

bool SBSmanager::del_site(QString site_id)
{
    if(!db->exist("id",site_id,"site"))return 0;
    if(!db->del(site_id,"site"))return 0;
    if(!db->del(site_id,"site_discount"))return 0;
    if(!db->del(site_id,"site_lim"))return 0;
    return 1;
}

bool SBSmanager::pub_site(QString site_id)
{
    return db->change(site_id,"is_pub",1,"site");
}

bool SBSmanager::add_time_lim(t_lim time_lim)
{
    for(int i=0;i<(int)lim_que.size();i++)
    {
        QDateTime l1=lim_que.at(i).begin;
        QDateTime r1=lim_que.at(i).end;
        QDateTime l2=time_lim.begin,r2=time_lim.end;
        if(r2<l1||r1<l2)continue;
        l1=QDateTime::fromString(l1.toString("HH:mm"));
        l2=QDateTime::fromString(l2.toString("HH:mm"));
        r1=QDateTime::fromString(l1.toString("HH:mm"));
        r2=QDateTime::fromString(l2.toString("HH:mm"));
        if(r1<l1||r1<l2)continue;
    }
    lim_que.append(time_lim);
    return 1;
}

double SBSmanager::get_price(site now, QDateTime vis_time, QString type)
{
    double now_price=0;
    if(now.begin_time>now.end_time)
    {
        if(vis_time>=now.begin_time||vis_time<=now.end_time)now_price=now.price_low;
        else now_price=now.price_high;
    }
    else
    {
        if(vis_time>=now.begin_time&&vis_time<=now.end_time)now_price=now.price_low;
        else now_price=now.price_high;
    }
    if(type!="")
    {
        for(int i=0;i<(int)now.dis.size();i++)
            if(now.dis.at(i).type==type)
            {
                return now_price*now.dis.at(i).d_price;
            }
    }
    return now_price;
}

bool SBSmanager::del_order(QString order_id)
{
    order now=get_order(order_id);
    QDateTime now_time=QDateTime::currentDateTime();
    now.order_time.addDays(1);
    if(now.order_time<now_time)return 0;
    if(!db->del(now.id,"sorder"))return 0;
    if(!db->del(now.id,"order_site"))return 0;
    return 1;
}

int SBSmanager::add_order(QString site_id, QDateTime vis_time, QString type, int num)
{
    site now=get_site(site_id);
    if(get_site_num(site_id,vis_time)<num)return 0;
    order_site o_now;
    o_now.site_id=now.id;
    o_now.vis_time=vis_time;
    o_now.type=type;
    o_now.num=num;
    o_now.price=get_price(now,vis_time,type)*num;
    for(int i=0;i<(int)order_que.size();i++)
    {
        if(order_que.at(i).site_id==site_id)continue;
        site tep=get_site(order_que.at(i).site_id);
        QDateTime l1=order_que.at(i).vis_time;
        QDateTime r1=l1.addSecs(tep.time*60);
        QDateTime l2=vis_time,r2=vis_time.addSecs(now.time*60);
        if(r2<l1||r1<l2)continue;
        else return -1;
    }
    order_que.append(o_now);
    return 1;
}

bool SBSmanager::set_order(QDateTime order_time)
{
    QVariantList buf;
    QString id=now_id+order_time.toString(TIME_FM);
    buf.append(id);buf.append(now_id);buf.append(order_time.toString(TIME_FM));
    if(!db->insert(buf,"sorder"))return 0;
    for(int i=0;i<(int)order_que.size();i++)
    {
        buf.clear();
        buf.append(id);
        buf.append(order_que.at(i).site_id);
        buf.append(order_que.at(i).vis_time);
        buf.append(order_que.at(i).num);
        buf.append(order_que.at(i).type);
        buf.append(order_que.at(i).price);
        if(!db->insert(buf,"order_site"))return 0;
    }
    qDebug()<<"get set";
    order_buf.clear();order_buf=get_all_order();
    site_buf.clear();site_buf=get_all_site();
    qDebug()<<"set ok";
    clear_order();
    return 1;
}

void SBSmanager::clear_order()
{
    order_que.clear();
}

void SBSmanager::clear_lim()
{
    lim_que.clear();
}

int SBSmanager::get_already_site_num(QString site_id)
{
    int ret=0;
    order_buf=get_all_order();
    for(int i=0;i<order_buf.size();i++)
    {
        for(int j=0;j<(int)order_buf.at(i).o_site.size();j++)
        {
            if(order_buf.at(i).o_site.at(j).site_id==site_id)
            {
                ret+=order_buf.at(i).o_site.at(j).num;
            }
        }
    }
    return ret;
}

void SBSmanager::change_admin(admin user,bool is_pa)
{
    if(is_pa)
    {
        db->del(now_id,"admin");
        reg(user);
    }
    else
    {
        db->change(now_id,"phone",user.phone,"admin");
        db->change(now_id,"mail",user.mail,"admin");
    }
}

void SBSmanager::change_tourist(tourist user,bool is_pa)
{
    if(is_pa)
    {
        db->del(now_id,"tourist");
        reg(user);
    }
    else
    {
        db->change(now_id,"num",user.num,"tourist");
        db->change(now_id,"age_low",user.age_low,"tourist");
        db->change(now_id,"age_max",user.age_max,"tourist");
        db->change(now_id,"phone",user.phone,"tourist");
    }
}

admin SBSmanager::get_admin()
{
    QVariantList buf=db->search("id",now_id,"admin",5);
    admin ret;
    ret.id=buf.at(0).toString();
    ret.password=buf.at(1).toString();
    ret.phone=buf.at(3).toString();
    ret.mail=buf.at(4).toString();
    return ret;
}

tourist SBSmanager::get_tourist()
{
    QVariantList buf=db->search("id",now_id,"tourist",7);
    tourist ret;
    ret.id=buf.at(0).toString();
    ret.password=buf.at(1).toString();
    ret.num=buf.at(3).toInt();
    ret.age_low=buf.at(4).toInt();
    ret.age_max=buf.at(5).toInt();
    ret.phone=buf.at(6).toString();
    return ret;
}

QList<site> SBSmanager::get_every_site(QDateTime vis_time)
{
    QList<site>buf;
    for(int i=0;i<site_buf.size();i++)
    {
        int site_num=get_site_num(site_buf.at(i).id,vis_time);
        if(site_num>0)buf.append(site_buf.at(i));
    }
    return buf;
}

QList<order> SBSmanager::get_every_order()
{
    return order_buf;
}

QList<site> SBSmanager::get_every_site()
{
    return site_buf;
}

QList<site> SBSmanager::filter_site(QList<site> site_buf, int type, QString str)
{
    QList<site>buf;
    if(type==0)
    return site_buf;
    else if(type==1)//搜名字
    {
        for(int i=0;i<site_buf.size();i++)
        {
            if(site_buf.at(i).name.contains(str))buf.append(site_buf.at(i));
        }
        return buf;
    }
    else if(type==2)//搜地区
    {
        for(int i=0;i<site_buf.size();i++)
        {
            if(site_buf.at(i).area==str)buf.append(site_buf.at(i));
        }
        return buf;
    }
    else if(type==3)//是否折扣
    {
        for(int i=0;i<site_buf.size();i++)
        {
            if(site_buf.at(i).dis.size()>0)buf.append(site_buf.at(i));
        }
        return buf;
    }
    else if(type==4)//价格排序
    {
        buf=site_buf;
        qSort(buf.begin(),buf.end(),
             [](site a,site b){if(a.price_low==b.price_low)return a.price_high<b.price_high;return a.price_low<b.price_low;});
        return buf;
    }
    else if(type==5)//总预订量 排序
    {
        buf=site_buf;
        qSort(buf.begin(),buf.end(),[](site a,site b){return a.num>b.num;});
        return buf;
    }
    else if(type==6)//推荐顺序
    {
        //推荐
        buf=site_buf;
        QList<order>o_buf=get_every_order();
        QMap<QString,int>cnt;
        for(int i=0;i<o_buf.size();i++)
        {
            order now=o_buf.at(i);
            for(int j=0;j<now.o_site.size();j++)
            {
                QString now_area=get_site(now.o_site.at(j).site_id).area;
                cnt[now_area]++;
                if(qrand()%5)cnt[now_area]++;
            }
        }
        qSort(buf.begin(),buf.end(),[cnt](site a,site b){return cnt[a.area]>cnt[b.area];});
        return buf;
    }
    else if(type==7)//访问人数
    {
        buf=site_buf;
        QList<order>o_buf=get_every_order();
        QMap<QString,int>cnt;
        for(int i=0;i<o_buf.size();i++)
        {
            order now=o_buf.at(i);
            for(int j=0;j<now.o_site.size();j++)
            {
                QString now_id=now.o_site.at(j).site_id;
                if(now.o_site.at(j).vis_time<QDateTime::currentDateTime())
                cnt[now_id]+=now.o_site.at(j).num;
            }
        }
        qSort(buf.begin(),buf.end(),[cnt](site a,site b){return cnt[a.id]>cnt[b.id];});
        return buf;
    }
    else if(type==8)//今年利润
    {
        buf=site_buf;
        QList<order>o_buf=get_every_order();
        QMap<QString,double>cnt;
        for(int i=0;i<o_buf.size();i++)
        {
            order now=o_buf.at(i);
            if(now.order_time.addYears(1)<QDateTime::currentDateTime())continue;//一年前订单
            if(now.order_time>QDateTime::currentDateTime().addYears(1))continue;//一年后订单
            for(int j=0;j<now.o_site.size();j++)
            {
                QString now_id=now.o_site.at(j).site_id;
                cnt[now_id]+=now.o_site.at(j).price;
            }
        }
        qSort(buf.begin(),buf.end(),[cnt](site a,site b){return cnt[a.id]-1.0*a.ma_price>cnt[b.id]-1.0*b.ma_price;});
        return buf;
    }
    else if(type==9)//季节排序
    {
        QDateTime l,r;
        l=r=QDateTime::currentDateTime();
        l=QDateTime::fromString(l.toString("yyyy")+":01:01","yyyy:MM:dd");
        if(str=="春")l=l.addMonths(3),r=l.addMonths(2);
        else if(str=="夏")l=l.addMonths(6),r=l.addMonths(2);
        else if(str=="秋")l=l.addMonths(9),r=l.addMonths(2);
        else l=l.addMonths(12),r=r.addMonths(2);
        buf=site_buf;
        QList<order>o_buf=get_every_order();
        QMap<QString,int>cnt;
        for(int i=0;i<o_buf.size();i++)
        {
            order now=o_buf.at(i);
            for(int j=0;j<now.o_site.size();j++)
            {
                QString now_id=now.o_site.at(j).site_id;
                QDateTime tep=now.o_site.at(j).vis_time;
                if(is_in(tep,l,r))
                cnt[now_id]+=now.o_site.at(j).num;
            }
        }
        qSort(buf.begin(),buf.end(),[cnt](site a,site b){return cnt[a.id]>cnt[b.id];});
        return buf;
    }
}

int SBSmanager::get_now_site_num(QDateTime vis_time, t_lim lim)
{
    QString year=vis_time.toString("yyyy");
    QDateTime l=QDateTime::fromString(year+lim.begin.toString("MM:dd:HH:mm"),TIME_FM);
    QDateTime r=QDateTime::fromString(year+lim.end.toString("MM:dd:HH:mm"),TIME_FM);
    int ret=lim.lim;
    for(int i=0;i<(int)order_buf.size();i++)
    {
        order now=order_buf.at(i);
        for(int j=0;j<(int)now.o_site.size();j++)
        {
            if(is_in(now.o_site.at(j).vis_time,l,r))ret-=now.o_site.at(j).num;
        }
    }
    return ret;
}

QList<order> SBSmanager::get_all_order()
{
    QList<order>ret;
    QVariantList buf;
    buf=db->get_all("sorder",3);
    for(int i=0;i<(int)buf.size();i+=3)
    {
        order now;
        now.tour_id=buf.at(i+1).toString();
        if(!Is_admin&&now.tour_id!=now_id)continue;
        now.id=buf.at(i).toString();
        now.order_time==QDateTime::fromString(buf.at(i+2).toString(),TIME_FM);
        QVariantList o_buf;
        o_buf=db->search("id",now.id,"order_site",6);
        for(int j=0;j<(int)o_buf.size();j+=6)
        {
            order_site o_now;
            o_now.site_id=o_buf.at(j+1).toString();
            o_now.vis_time=QDateTime::fromString(o_buf.at(j+2).toString(),TIME_FM);
            o_now.num=o_buf.at(j+3).toInt();
            o_now.type=o_buf.at(j+4).toString();
            o_now.price=o_buf.at(j+5).toDouble();
            now.o_site.append(o_now);
        }
        ret.append(now);
    }
    return ret;
}
QString SBSmanager::md5(QString text)
{
    QString MD5;
    QByteArray ba_md5;
    ba_md5=QCryptographicHash::hash(text.toLocal8Bit(),QCryptographicHash::Md5);
    MD5.append(ba_md5.toHex().toUpper());
    qDebug()<<MD5;
    return MD5;
}
