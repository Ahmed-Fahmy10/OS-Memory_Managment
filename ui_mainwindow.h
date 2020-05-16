/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionQuit;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *memSize;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *holeStart;
    QSpinBox *holeSize;
    QPushButton *add_hole;
    QTreeWidget *holeList;
    QPushButton *finishHoles;
    QHBoxLayout *horizontalLayout_10;
    QComboBox *processes;
    QPushButton *deallocate;
    QHBoxLayout *horizontalLayout_11;
    QComboBox *processes_2;
    QPushButton *allocate;
    QPushButton *CompactMemory;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *processName;
    QSpinBox *noSegments;
    QPushButton *add_process;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QLineEdit *SegmentName;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_7;
    QSpinBox *segmentSize;
    QPushButton *add_segment;
    QTreeWidget *processTree;
    QPushButton *drawButton;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(835, 514);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 9, 304, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        memSize = new QSpinBox(layoutWidget);
        memSize->setObjectName(QString::fromUtf8("memSize"));
        memSize->setMinimum(1);
        memSize->setMaximum(9999999);

        horizontalLayout->addWidget(memSize);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(430, 10, 381, 451));
        verticalLayout_7 = new QVBoxLayout(layoutWidget1);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        holeStart = new QSpinBox(layoutWidget1);
        holeStart->setObjectName(QString::fromUtf8("holeStart"));
        holeStart->setEnabled(false);
        holeStart->setMaximum(9999999);

        horizontalLayout_3->addWidget(holeStart);

        holeSize = new QSpinBox(layoutWidget1);
        holeSize->setObjectName(QString::fromUtf8("holeSize"));
        holeSize->setEnabled(false);
        holeSize->setMinimum(1);
        holeSize->setMaximum(9999999);

        horizontalLayout_3->addWidget(holeSize);

        add_hole = new QPushButton(layoutWidget1);
        add_hole->setObjectName(QString::fromUtf8("add_hole"));
        add_hole->setEnabled(false);

        horizontalLayout_3->addWidget(add_hole);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_4);

        holeList = new QTreeWidget(layoutWidget1);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        holeList->setHeaderItem(__qtreewidgetitem);
        holeList->setObjectName(QString::fromUtf8("holeList"));

        verticalLayout_2->addWidget(holeList);

        finishHoles = new QPushButton(layoutWidget1);
        finishHoles->setObjectName(QString::fromUtf8("finishHoles"));
        finishHoles->setEnabled(false);

        verticalLayout_2->addWidget(finishHoles);


        verticalLayout_7->addLayout(verticalLayout_2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        processes = new QComboBox(layoutWidget1);
        processes->setObjectName(QString::fromUtf8("processes"));

        horizontalLayout_10->addWidget(processes);

        deallocate = new QPushButton(layoutWidget1);
        deallocate->setObjectName(QString::fromUtf8("deallocate"));
        deallocate->setEnabled(false);

        horizontalLayout_10->addWidget(deallocate);


        verticalLayout_7->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        processes_2 = new QComboBox(layoutWidget1);
        processes_2->addItem(QString());
        processes_2->addItem(QString());
        processes_2->addItem(QString());
        processes_2->setObjectName(QString::fromUtf8("processes_2"));

        horizontalLayout_11->addWidget(processes_2);

        allocate = new QPushButton(layoutWidget1);
        allocate->setObjectName(QString::fromUtf8("allocate"));
        allocate->setEnabled(false);

        horizontalLayout_11->addWidget(allocate);


        verticalLayout_7->addLayout(horizontalLayout_11);

        CompactMemory = new QPushButton(layoutWidget1);
        CompactMemory->setObjectName(QString::fromUtf8("CompactMemory"));
        CompactMemory->setEnabled(false);

        verticalLayout_7->addWidget(CompactMemory);

        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(9, 45, 411, 421));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        processName = new QLineEdit(layoutWidget_2);
        processName->setObjectName(QString::fromUtf8("processName"));
        processName->setEnabled(false);

        horizontalLayout_9->addWidget(processName);

        noSegments = new QSpinBox(layoutWidget_2);
        noSegments->setObjectName(QString::fromUtf8("noSegments"));
        noSegments->setEnabled(false);
        noSegments->setMinimum(1);

        horizontalLayout_9->addWidget(noSegments);

        add_process = new QPushButton(layoutWidget_2);
        add_process->setObjectName(QString::fromUtf8("add_process"));
        add_process->setEnabled(false);

        horizontalLayout_9->addWidget(add_process);


        verticalLayout_5->addLayout(horizontalLayout_9);


        verticalLayout_3->addLayout(verticalLayout_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_6->addWidget(label_8);

        SegmentName = new QLineEdit(layoutWidget_2);
        SegmentName->setObjectName(QString::fromUtf8("SegmentName"));
        SegmentName->setEnabled(false);

        verticalLayout_6->addWidget(SegmentName);


        horizontalLayout_5->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        segmentSize = new QSpinBox(layoutWidget_2);
        segmentSize->setObjectName(QString::fromUtf8("segmentSize"));
        segmentSize->setEnabled(false);
        segmentSize->setMinimum(1);
        segmentSize->setMaximum(9999999);

        horizontalLayout_7->addWidget(segmentSize);


        verticalLayout_4->addLayout(horizontalLayout_7);


        horizontalLayout_5->addLayout(verticalLayout_4);

        add_segment = new QPushButton(layoutWidget_2);
        add_segment->setObjectName(QString::fromUtf8("add_segment"));
        add_segment->setEnabled(false);

        horizontalLayout_5->addWidget(add_segment);


        verticalLayout_3->addLayout(horizontalLayout_5);

        processTree = new QTreeWidget(layoutWidget_2);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QString::fromUtf8("1"));
        processTree->setHeaderItem(__qtreewidgetitem1);
        processTree->setObjectName(QString::fromUtf8("processTree"));

        verticalLayout_3->addWidget(processTree);

        drawButton = new QPushButton(layoutWidget_2);
        drawButton->setObjectName(QString::fromUtf8("drawButton"));
        drawButton->setEnabled(false);

        verticalLayout_3->addWidget(drawButton);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(320, 10, 93, 28));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 835, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Memory Allocation Simulator", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("MainWindow", "Memory Size", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Hole Start", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Hole Size", nullptr));
        add_hole->setText(QCoreApplication::translate("MainWindow", "Add Hole", nullptr));
        finishHoles->setText(QCoreApplication::translate("MainWindow", "Finish", nullptr));
        deallocate->setText(QCoreApplication::translate("MainWindow", "Deallocate", nullptr));
        processes_2->setItemText(0, QCoreApplication::translate("MainWindow", "First Fit", nullptr));
        processes_2->setItemText(1, QCoreApplication::translate("MainWindow", "Best Fit", nullptr));
        processes_2->setItemText(2, QCoreApplication::translate("MainWindow", "Worst Fit", nullptr));

        allocate->setText(QCoreApplication::translate("MainWindow", "Allocate", nullptr));
        CompactMemory->setText(QCoreApplication::translate("MainWindow", "Compact Memory", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Process Name", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "No. of Segments", nullptr));
        add_process->setText(QCoreApplication::translate("MainWindow", "Add Process", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Segment Name", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        add_segment->setText(QCoreApplication::translate("MainWindow", "Add Segment", nullptr));
        drawButton->setText(QCoreApplication::translate("MainWindow", "Draw", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
