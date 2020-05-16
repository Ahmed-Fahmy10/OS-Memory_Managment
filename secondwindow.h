#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>
#include "QString"
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QStackedBarSeries>
#include <QValueAxis>
#include <QtGui/QMouseEvent>
#include "callout.h"

#include "my_memory.h"

class QGraphicsScene;
class QMouseEvent;
class QResizeEvent;

QT_CHARTS_BEGIN_NAMESPACE
class QChart;
QT_CHARTS_END_NAMESPACE

class Callout;

QT_CHARTS_USE_NAMESPACE
namespace Ui {
class secondwindow;
}

class secondwindow : public QDialog
{
    Q_OBJECT

public:
    explicit secondwindow(QWidget *parent = 0);
    ~secondwindow();
public slots:
//    void keepCallout();
//    void tooltip(QPointF point, bool state);
private slots:
    void on_pushButton_clicked();
protected:
//    void resizeEvent(QResizeEvent *event);
//    void mouseMoveEvent(QMouseEvent *event);
private:
    Ui::secondwindow *ui;
    QGraphicsSimpleTextItem *m_coordX;
    QGraphicsSimpleTextItem *m_coordY;
    QChart *m_chart;
    Callout *m_tooltip;
    QList<Callout *> m_callouts;
};

#endif // SECONDWINDOW_H
