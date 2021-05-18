/********************************************************************************
** Form generated from reading UI file 'reports.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTS_H
#define UI_REPORTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reports
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_date;
    QLineEdit *lineEdit_date;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_membership;
    QComboBox *comboBox_membership;
    QPushButton *pushButton;
    QLabel *label_tableTitle;
    QLabel *label_miniLogo;
    QLabel *label_totalRevTitle;
    QLineEdit *lineEdit_totalRev;
    QLabel *label_titleItemsSold;
    QLabel *label_titleShoppers;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_titleRegMembers;
    QLabel *label_regMember;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_titleExecMember;
    QLabel *label_execMember;
    QListWidget *listWidget_shoppers;
    QTableView *tableView;

    void setupUi(QDialog *Reports)
    {
        if (Reports->objectName().isEmpty())
            Reports->setObjectName(QString::fromUtf8("Reports"));
        Reports->resize(500, 450);
        Reports->setStyleSheet(QString::fromUtf8("background-color: #55ffff"));
        label = new QLabel(Reports);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 340, 47, 13));
        groupBox = new QGroupBox(Reports);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 310, 261, 131));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_date = new QLabel(groupBox);
        label_date->setObjectName(QString::fromUtf8("label_date"));

        horizontalLayout->addWidget(label_date);

        lineEdit_date = new QLineEdit(groupBox);
        lineEdit_date->setObjectName(QString::fromUtf8("lineEdit_date"));
        lineEdit_date->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));

        horizontalLayout->addWidget(lineEdit_date);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_membership = new QLabel(groupBox);
        label_membership->setObjectName(QString::fromUtf8("label_membership"));

        horizontalLayout_2->addWidget(label_membership);

        comboBox_membership = new QComboBox(groupBox);
        comboBox_membership->setObjectName(QString::fromUtf8("comboBox_membership"));
        comboBox_membership->setStyleSheet(QString::fromUtf8("background-color: #feff57"));

        horizontalLayout_2->addWidget(comboBox_membership);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #feff57"));

        verticalLayout->addWidget(pushButton);

        label_tableTitle = new QLabel(Reports);
        label_tableTitle->setObjectName(QString::fromUtf8("label_tableTitle"));
        label_tableTitle->setGeometry(QRect(20, 10, 101, 21));
        label_miniLogo = new QLabel(Reports);
        label_miniLogo->setObjectName(QString::fromUtf8("label_miniLogo"));
        label_miniLogo->setGeometry(QRect(360, 400, 111, 41));
        label_totalRevTitle = new QLabel(Reports);
        label_totalRevTitle->setObjectName(QString::fromUtf8("label_totalRevTitle"));
        label_totalRevTitle->setGeometry(QRect(300, 340, 74, 20));
        lineEdit_totalRev = new QLineEdit(Reports);
        lineEdit_totalRev->setObjectName(QString::fromUtf8("lineEdit_totalRev"));
        lineEdit_totalRev->setGeometry(QRect(300, 370, 181, 20));
        lineEdit_totalRev->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));
        label_titleItemsSold = new QLabel(Reports);
        label_titleItemsSold->setObjectName(QString::fromUtf8("label_titleItemsSold"));
        label_titleItemsSold->setGeometry(QRect(20, 40, 61, 16));
        label_titleShoppers = new QLabel(Reports);
        label_titleShoppers->setObjectName(QString::fromUtf8("label_titleShoppers"));
        label_titleShoppers->setGeometry(QRect(270, 40, 61, 16));
        layoutWidget = new QWidget(Reports);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(280, 300, 89, 34));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_titleRegMembers = new QLabel(layoutWidget);
        label_titleRegMembers->setObjectName(QString::fromUtf8("label_titleRegMembers"));

        verticalLayout_2->addWidget(label_titleRegMembers);

        label_regMember = new QLabel(layoutWidget);
        label_regMember->setObjectName(QString::fromUtf8("label_regMember"));
        label_regMember->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_2->addWidget(label_regMember);

        layoutWidget1 = new QWidget(Reports);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(380, 300, 99, 34));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_titleExecMember = new QLabel(layoutWidget1);
        label_titleExecMember->setObjectName(QString::fromUtf8("label_titleExecMember"));

        verticalLayout_3->addWidget(label_titleExecMember);

        label_execMember = new QLabel(layoutWidget1);
        label_execMember->setObjectName(QString::fromUtf8("label_execMember"));
        label_execMember->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_3->addWidget(label_execMember);

        listWidget_shoppers = new QListWidget(Reports);
        listWidget_shoppers->setObjectName(QString::fromUtf8("listWidget_shoppers"));
        listWidget_shoppers->setGeometry(QRect(270, 60, 211, 231));
        listWidget_shoppers->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));
        tableView = new QTableView(Reports);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 60, 241, 231));
        tableView->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));

        retranslateUi(Reports);

        QMetaObject::connectSlotsByName(Reports);
    } // setupUi

    void retranslateUi(QDialog *Reports)
    {
        Reports->setWindowTitle(QCoreApplication::translate("Reports", "Dialog", nullptr));
        label->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("Reports", "Enter Report Information:", nullptr));
        label_date->setText(QCoreApplication::translate("Reports", "Date:", nullptr));
        label_membership->setText(QCoreApplication::translate("Reports", "Membership Type:", nullptr));
        pushButton->setText(QCoreApplication::translate("Reports", "Generate Report", nullptr));
        label_tableTitle->setText(QCoreApplication::translate("Reports", "Generated Report:", nullptr));
        label_miniLogo->setText(QString());
        label_totalRevTitle->setText(QCoreApplication::translate("Reports", "Total Revenue:", nullptr));
        label_titleItemsSold->setText(QCoreApplication::translate("Reports", "Items Sold:", nullptr));
        label_titleShoppers->setText(QCoreApplication::translate("Reports", "Shoppers:", nullptr));
        label_titleRegMembers->setText(QCoreApplication::translate("Reports", "Regular Members:", nullptr));
        label_regMember->setText(QCoreApplication::translate("Reports", "0", nullptr));
        label_titleExecMember->setText(QCoreApplication::translate("Reports", "Executive Members:", nullptr));
        label_execMember->setText(QCoreApplication::translate("Reports", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reports: public Ui_Reports {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTS_H
