#ifndef MOREADMINSITE_H
#define MOREADMINSITE_H

#include "global.h"
#include <QMainWindow>
#include <QChartView>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include "donutbreakdownchart.h"
#include "mainslice.h"
QT_CHARTS_USE_NAMESPACE

namespace Ui {
class moreadminsite;
}

class moreadminsite : public QMainWindow
{
    Q_OBJECT

public:
    explicit moreadminsite(QWidget *parent = 0);
    ~moreadminsite();
    void send_info(QString site_id);

private:
    Ui::moreadminsite *ui;
    QChartView *view;
};

#endif // MOREADMINSITE_H
