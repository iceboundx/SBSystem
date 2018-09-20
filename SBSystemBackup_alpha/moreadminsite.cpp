#include "moreadminsite.h"
#include "ui_moreadminsite.h"
QT_CHARTS_USE_NAMESPACE
moreadminsite::moreadminsite(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::moreadminsite)
{
    ui->setupUi(this);
    view=new QChartView;
    this->setWindowModality(Qt::ApplicationModal);
    this->setWindowFlags(this->windowFlags()&~Qt::WindowMaximizeButtonHint);
    this->setMaximumSize(this->size());
    this->setMinimumSize(this->size());
}

moreadminsite::~moreadminsite()
{
    delete ui;
}

//创建图表
void moreadminsite::send_info(QString site_id)
{
    QList<int>ls=man->get_age(site_id);
    QPieSeries *series1 = new QPieSeries();
    series1->setName("青少年");
    series1->append("10岁以下",ls.at(0));
    series1->append("10-20岁",ls.at(1));
    series1->append("20-30岁",ls.at(2));
    QPieSeries *series2 = new QPieSeries();
    series2->setName("中青年");
    series2->append("30-40岁",ls.at(3));
    series2->append("40-50岁",ls.at(4));
    series2->append("50-60岁",ls.at(5));
    QPieSeries *series3 = new QPieSeries();
    series3->setName("老年");
    series3->append("60-70岁",ls.at(6));
    series3->append("70-80岁",ls.at(7));
    series3->append("80-90岁",ls.at(8));
    DonutBreakdownChart *donutBreakdown = new DonutBreakdownChart();
    donutBreakdown->setAnimationOptions(QChart::AllAnimations);
    donutBreakdown->setTitle(man->get_site(site_id).name+"景点的年龄分布图");
    donutBreakdown->legend()->setAlignment(Qt::AlignRight);
    donutBreakdown->addBreakdownSeries(series1, Qt::red);
    donutBreakdown->addBreakdownSeries(series2, Qt::darkGreen);
    donutBreakdown->addBreakdownSeries(series3, Qt::darkBlue);
    view->setChart(donutBreakdown);
    view->setRenderHint(QPainter::Antialiasing);
    this->setCentralWidget(view);
}
