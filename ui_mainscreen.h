/********************************************************************************
** Form generated from reading UI file 'mainscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCREEN_H
#define UI_MAINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainScreen
{
public:
    QLabel *Logo;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_expirations;
    QPushButton *pushButton_5;
    QPushButton *pushButton_reports;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *MainScreen)
    {
        if (MainScreen->objectName().isEmpty())
            MainScreen->setObjectName(QString::fromUtf8("MainScreen"));
        MainScreen->resize(706, 396);
        MainScreen->setStyleSheet(QString::fromUtf8("background-color: #55ffff"));
        Logo = new QLabel(MainScreen);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(100, 20, 451, 161));
        gridLayoutWidget = new QWidget(MainScreen);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(160, 210, 331, 181));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #feff57"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_expirations = new QPushButton(gridLayoutWidget);
        pushButton_expirations->setObjectName(QString::fromUtf8("pushButton_expirations"));
        sizePolicy.setHeightForWidth(pushButton_expirations->sizePolicy().hasHeightForWidth());
        pushButton_expirations->setSizePolicy(sizePolicy);
        pushButton_expirations->setStyleSheet(QString::fromUtf8("background-color: #feff57"));

        gridLayout->addWidget(pushButton_expirations, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: #feff57"));

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_reports = new QPushButton(gridLayoutWidget);
        pushButton_reports->setObjectName(QString::fromUtf8("pushButton_reports"));
        sizePolicy.setHeightForWidth(pushButton_reports->sizePolicy().hasHeightForWidth());
        pushButton_reports->setSizePolicy(sizePolicy);
        pushButton_reports->setStyleSheet(QString::fromUtf8("background-color: #feff57"));

        gridLayout->addWidget(pushButton_reports, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: #feff57"));

        gridLayout->addWidget(pushButton_6, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: #feff57"));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #feff57"));

        gridLayout->addWidget(pushButton, 3, 1, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: #feff57"));

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        label = new QLabel(MainScreen);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(580, 40, 101, 81));
        label->setStyleSheet(QString::fromUtf8("font: 48pt \"Comic Sans MS\";\n"
"color: #feff57"));
        label_2 = new QLabel(MainScreen);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 210, 127, 186));

        retranslateUi(MainScreen);

        QMetaObject::connectSlotsByName(MainScreen);
    } // setupUi

    void retranslateUi(QDialog *MainScreen)
    {
        MainScreen->setWindowTitle(QCoreApplication::translate("MainScreen", "Dialog", nullptr));
        Logo->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainScreen", "Rebates", nullptr));
        pushButton_expirations->setText(QCoreApplication::translate("MainScreen", "Membership Expirations", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainScreen", "Inventory", nullptr));
        pushButton_reports->setText(QCoreApplication::translate("MainScreen", "Reports", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainScreen", "add/delete member", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainScreen", "Member Purchases", nullptr));
        pushButton->setText(QCoreApplication::translate("MainScreen", "Create Purchase", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainScreen", "Update Inventory", nullptr));
        label->setText(QCoreApplication::translate("MainScreen", "OS", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainScreen: public Ui_MainScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCREEN_H
