#include "mainwindow.h"
#include "ui_mainwindow.h"

QVector<int> holeStartVector;
QVector<int> holeSizeVector;
QVector<int> segmentSizeVector;
QVector<QString> processName;
QVector<QString> segmentName;

QVector<QString> current_segments;
Memory *m=new Memory();
Process *p_ptr;
int memSize;
QTreeWidgetItem *prnt = new QTreeWidgetItem();


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->holeList->setColumnCount(2);
    ui->holeList->setHeaderLabels(QStringList()<<"Hole Start"<<"Hole Size");
    ui->processTree->setColumnCount(3);
    ui->processTree->setHeaderLabels(QStringList()<<"Process Name"<<"Segment Name"<<"Segment Size");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_hole_clicked()
{
    int holeSize = ui->holeSize->value();
    int holeStart= ui->holeStart->value();

    if(m->Is_Empty_Boolean(holeStart,(holeStart+holeSize-1)))
    {
            m->Add_Block("", "", holeStart, holeSize);
            holeSizeVector.push_back(ui->holeSize->value());
            holeStartVector.push_back(ui->holeStart->value());
            QTreeWidgetItem *itm = new QTreeWidgetItem(ui->holeList);
            itm->setText(0,QString::number(ui->holeStart->value()));
            itm->setText(1,QString::number(ui->holeSize->value()));
            ui->holeList->addTopLevelItem(itm);
            ui->holeSize->setValue(0);
            ui->holeStart->setValue(0);
    }
    else
    {
        QMessageBox::information(this,"Error","Hole is Already Declared");
        return;

    }


}

void MainWindow::on_add_segment_clicked()
{
    if (current_segments.contains(ui->SegmentName->text()))
    {
        QMessageBox::information(this,"Error","Segments already exists");
        return;
    }
    else  if (ui->SegmentName->text() == "")
    {
        QMessageBox::information(this,"Error","Segment name can't be empty");
        return;
    }

    current_segments.push_back(ui->SegmentName->text());

    if (p_ptr->segments.size() ==ui->noSegments->value()-1){
        ui->allocate->setEnabled(true);
        ui->add_segment->setEnabled(false);
        ui->segmentSize->setEnabled(false);
        ui->SegmentName->setEnabled(false);
    }

    segmentName.push_back(ui->SegmentName->text());
    segmentSizeVector.push_back(ui->segmentSize->value());


    QTreeWidgetItem *itm = new QTreeWidgetItem(prnt);
    itm->setText(1,ui->SegmentName->text());
    itm->setText(2,QString::number(ui->segmentSize->value()));

    ui->processTree->addTopLevelItem(itm);

    Segment s;
    s.name = ui->SegmentName->text();
    s.size = ui->segmentSize->value();

    p_ptr->segments.push_back(s);

}

void MainWindow::on_pushButton_clicked()
{
    memSize=ui->memSize->value();
    m->setSize(memSize);
    ui->memSize->setEnabled(false);
    ui->pushButton->setEnabled(false);
    ui->holeSize->setEnabled(true);
    ui->holeStart->setEnabled(true);
    ui->add_hole->setEnabled(true);
    ui->finishHoles->setEnabled(true);
    ui->drawButton->setEnabled(true);

}

void MainWindow::on_deallocate_clicked()
{
    m->Deallocate_Process(ui->processes->currentText());

    QTreeWidgetItem *i;

    ui->allocate->setEnabled(false);

    if(ui->processTree->findItems(ui->processes->currentText(), Qt::MatchExactly, 0).size()!=0){
        i=ui->processTree->findItems(ui->processes->currentText(), Qt::MatchExactly, 0)[0];
        processName.remove(processName.indexOf(ui->processes->currentText()));
        delete ui->processTree->takeTopLevelItem(ui->processTree->indexOfTopLevelItem(i));
    }
    for(int i=0;i<processName.size();i++) {
        qDebug()<<processName[i];
    }

    ui->processes->removeItem(ui->processes->currentIndex());
    secondwindow drawWindow;
    drawWindow.setModal(true);
    drawWindow.exec();
}

void MainWindow::on_allocate_clicked()
{
    bool fit = false;
    ui->processes->addItem(ui->processName->text());
    ui->allocate->setEnabled(false);


    ui->add_process->setEnabled(true);
    ui->processName->setEnabled(true);
    ui->noSegments->setEnabled(true);

    switch (ui->processes_2->currentIndex()) {
    case 0:
       fit = m->first_fit(*p_ptr);
       break;
    case 1:
        fit = m->best_fit(*p_ptr);
        break;
    case 2:
        fit = m->worst_fit(*p_ptr);
        break;
    default:
        break;
    }

    if (!fit)
    {
        QMessageBox::information(this, "Error", "Couldn't allocate");
        ui->processes->removeItem(ui->processes->currentIndex());
    }

    else
    {
        secondwindow drawWindow;
        drawWindow.setModal(true);
        drawWindow.exec();

    }
}

void MainWindow::on_add_process_clicked()
{
    if (processName.count(ui->processName->text()) == 1)
    {
        QMessageBox::information(this,"Error","Process already exists");
        return;
    }
    else if (ui->processName->text() == "")
    {
        QMessageBox::information(this,"Error","Process name can't be empty");
        return;
    }

    current_segments.clear();

    ui->add_process->setEnabled(false);
    ui->processName->setEnabled(false);
    ui->noSegments->setEnabled(false);
    ui->add_segment->setEnabled(true);
    ui->segmentSize->setEnabled(true);
    ui->SegmentName->setEnabled(true);

    processName.push_back(ui->processName->text());


    static Process P;
    p_ptr = &P;

    P.segments.clear();
    P.name = ui->processName->text();
    P.num_of_segments = ui->noSegments->value();

    prnt = new QTreeWidgetItem(ui->processTree);
    prnt->setText(0,ui->processName->text());
    ui->processTree->addTopLevelItem(prnt);


}

void MainWindow::on_finishHoles_clicked()
{
    ui->holeSize->setEnabled(false);
    ui->holeStart->setEnabled(false);
    ui->add_hole->setEnabled(false);
    ui->finishHoles->setEnabled(false);
    ui->processName->setEnabled(true);
    ui->noSegments->setEnabled(true);
    ui->add_process->setEnabled(true);
    ui->deallocate->setEnabled(true);
    ui->CompactMemory->setEnabled(true);

    QVector<QString> old_Processes = m->Flip_Blocks();

    for (QString s : old_Processes)
    {
        ui->processes->addItem(s);
    }
}

void MainWindow::on_actionQuit_triggered()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::warning(this,"Quit","Are you sure you want to quit?",  QMessageBox::Yes | QMessageBox::No, QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {
      QApplication::quit();
    }
    else
    {
        return;
    }

}

void MainWindow::on_actionNew_triggered()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::warning(this,"New","Are you sure you want to restart?",  QMessageBox::Yes | QMessageBox::No, QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {


        m->newMem();

        ui->processTree->clear();
        ui->processes->clear();
        ui->holeList->clear();


      ui->memSize->setValue(0);
      ui->memSize->setEnabled(true);
      ui->pushButton->setEnabled(true);

      ui->holeStart->setEnabled(false);
      ui->holeStart->setValue(0);

      ui->holeSize->setEnabled(false);
      ui->holeSize->setValue(1);

      ui->add_hole->setEnabled(false);

      ui->add_process->setEnabled(false);

      ui->add_segment->setEnabled(false);

      ui->allocate->setEnabled(false);

      ui->deallocate->setEnabled(false);

      ui->segmentSize->setEnabled(false);

      ui->SegmentName->setEnabled(false);

      ui->processName->clear();
      ui->processName->setEnabled(false);

      ui->noSegments->setEnabled(false);
      ui->noSegments->setValue(1);



    }
    else
    {
        return;
    }

}


void MainWindow::on_drawButton_clicked()
{
    secondwindow drawWindow;
    drawWindow.setModal(true);
    drawWindow.exec();
}

void MainWindow::on_CompactMemory_clicked()
{
    m->Compact_Memory();
    secondwindow drawWindow;
    drawWindow.setModal(true);
    drawWindow.exec();
}
