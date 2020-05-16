#include "secondwindow.h"
#include "ui_secondwindow.h"
#include "callout.h"

secondwindow::secondwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secondwindow)
{
    ui->setupUi(this);

    extern Memory *m;
//    QStringList categories;

    QT_CHARTS_USE_NAMESPACE

    QStackedBarSeries *series = new QStackedBarSeries();
    QStringList range;

    //![1]
    QValueAxis *axis_y = new QValueAxis();
    axis_y->setTickCount(5);


        std::list<Block>::reverse_iterator it;
        for (it = m->memory.rbegin(); it != m->memory.rend(); ++it)
        {


            QBarSet *memorySet = new QBarSet(it->getProcessName() == ""
                                             ? "HOLE"
                                             : it->getProcessName() + ": " +  it->getSegmentName());

            if (it->getProcessName() == "")
            {
                memorySet->setColor(QColor(125, 125, 125));
            }
            else if (it->getProcessName().contains("Old Process"))
            {
                memorySet->setColor(QColor(255, 0, 0));
            }

            *memorySet <<it->getSize();

            series->append(memorySet);

            //range << QString::number(it->getEnd()) + 1;
            //axis_y->append(QString::number(it->getEnd()) + 1, it->getEnd() + 1);
        }



        m_chart = new QChart();
        m_chart->addSeries(series);
        m_chart->setTitle("Memory visualization");
        m_chart->setAnimationOptions(QChart::SeriesAnimations);

        QBarCategoryAxis *axis_x = new QBarCategoryAxis();

        axis_x->setReverse(true);


        axis_y->setReverse(true);

        m_chart->createDefaultAxes();
        m_chart->setAxisX(axis_x, series);
        m_chart->setAxisY(axis_y,series);

        m_chart->legend()->setVisible(true);
        m_chart->legend()->setAlignment(Qt::AlignBottom);

        QChartView *chartView = new QChartView(m_chart, this);
        chartView->setRenderHint(QPainter::Antialiasing);

        //chart->hoverEnterEvent();

        ui->verticalLayout->addWidget(chartView);

}

//void secondwindow::mouseMoveEvent(QMouseEvent *event)
//{
//    m_coordX->setText(QString("X: %1").arg(m_chart->mapToValue(event->pos()).x()));
//    m_coordY->setText(QString("Y: %1").arg(m_chart->mapToValue(event->pos()).y()));
//    QGraphicsView::mouseMoveEvent(event);
//}

//void secondwindow::keepCallout()
//{
//    m_callouts.append(m_tooltip);
//    m_tooltip = new Callout(m_chart);
//}

//void secondwindow::tooltip(QPointF point, bool state)
//{
//    if (m_tooltip == 0)
//        m_tooltip = new Callout(m_chart);

//    if (state) {
//        m_tooltip->setText(QString("X: %1 \nY: %2 ").arg(point.x()).arg(point.y()));
//        m_tooltip->setAnchor(point);
//        m_tooltip->setZValue(11);
//        m_tooltip->updateGeometry();
//        m_tooltip->show();
//    } else {
//        m_tooltip->hide();
//    }
//}
secondwindow::~secondwindow()
{
    delete ui;
}

void secondwindow::on_pushButton_clicked()
{
    this->close();
}
