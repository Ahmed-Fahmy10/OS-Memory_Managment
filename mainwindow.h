#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QVector"
#include "QString"
#include <QMessageBox>

#include "my_memory.h"
#include "secondwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_add_hole_clicked();

    void on_add_process_clicked();

    void on_pushButton_clicked();

    void on_deallocate_clicked();

    void on_allocate_clicked();

    void on_add_segment_clicked();

    void on_finishHoles_clicked();

    void on_actionQuit_triggered();

    void on_actionNew_triggered();

    void on_drawButton_clicked();

    void on_CompactMemory_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
