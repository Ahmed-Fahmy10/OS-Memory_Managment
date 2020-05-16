/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_secondwindow
{
public:
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *secondwindow)
    {
        if (secondwindow->objectName().isEmpty())
            secondwindow->setObjectName(QStringLiteral("secondwindow"));
        secondwindow->resize(775, 477);
        secondwindow->setAutoFillBackground(true);
        secondwindow->setSizeGripEnabled(false);
        secondwindow->setModal(false);
        horizontalLayout_3 = new QHBoxLayout(secondwindow);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton = new QPushButton(secondwindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_3->addLayout(horizontalLayout);


        retranslateUi(secondwindow);

        QMetaObject::connectSlotsByName(secondwindow);
    } // setupUi

    void retranslateUi(QDialog *secondwindow)
    {
        secondwindow->setWindowTitle(QApplication::translate("secondwindow", "Visualization Window", 0));
        pushButton->setText(QApplication::translate("secondwindow", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class secondwindow: public Ui_secondwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
