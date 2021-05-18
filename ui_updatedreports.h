/********************************************************************************
** Form generated from reading UI file 'updatedreports.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEDREPORTS_H
#define UI_UPDATEDREPORTS_H

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

class Ui_UpdatedReports
{
public:
    QListWidget *listWidget;
    QLabel *label_tableTitle;
    QLabel *label_titleShoppers;
    QLabel *label_totalRevTitle;
    QLabel *label_titleItemsSold;
    QLabel *label;
    QLabel *label_miniLogo;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_titleExecMember;
    QLabel *label_execMember;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_date;
    QLineEdit *lineEdit_date;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_membership;
    QComboBox *comboBox_membership;
    QPushButton *pushButton_generate;
    QTableView *tableView;
    QLineEdit *lineEdit_totalRev;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_titleRegMembers;
    QLabel *label_regMember;

    void setupUi(QDialog *UpdatedReports)
    {
        if (UpdatedReports->objectName().isEmpty())
            UpdatedReports->setObjectName(QString::fromUtf8("UpdatedReports"));
        UpdatedReports->resize(500, 450);
        listWidget = new QListWidget(UpdatedReports);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(270, 60, 211, 231));
        label_tableTitle = new QLabel(UpdatedReports);
        label_tableTitle->setObjectName(QString::fromUtf8("label_tableTitle"));
        label_tableTitle->setGeometry(QRect(20, 10, 101, 21));
        label_titleShoppers = new QLabel(UpdatedReports);
        label_titleShoppers->setObjectName(QString::fromUtf8("label_titleShoppers"));
        label_titleShoppers->setGeometry(QRect(270, 40, 61, 16));
        label_totalRevTitle = new QLabel(UpdatedReports);
        label_totalRevTitle->setObjectName(QString::fromUtf8("label_totalRevTitle"));
        label_totalRevTitle->setGeometry(QRect(300, 340, 74, 20));
        label_titleItemsSold = new QLabel(UpdatedReports);
        label_titleItemsSold->setObjectName(QString::fromUtf8("label_titleItemsSold"));
        label_titleItemsSold->setGeometry(QRect(20, 40, 61, 16));
        label = new QLabel(UpdatedReports);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 340, 47, 13));
        label_miniLogo = new QLabel(UpdatedReports);
        label_miniLogo->setObjectName(QString::fromUtf8("label_miniLogo"));
        label_miniLogo->setGeometry(QRect(360, 400, 111, 41));
        layoutWidget = new QWidget(UpdatedReports);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(380, 300, 99, 34));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_titleExecMember = new QLabel(layoutWidget);
        label_titleExecMember->setObjectName(QString::fromUtf8("label_titleExecMember"));

        verticalLayout_3->addWidget(label_titleExecMember);

        label_execMember = new QLabel(layoutWidget);
        label_execMember->setObjectName(QString::fromUtf8("label_execMember"));
        label_execMember->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_3->addWidget(label_execMember);

        groupBox = new QGroupBox(UpdatedReports);
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

        horizontalLayout->addWidget(lineEdit_date);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_membership = new QLabel(groupBox);
        label_membership->setObjectName(QString::fromUtf8("label_membership"));

        horizontalLayout_2->addWidget(label_membership);

        comboBox_membership = new QComboBox(groupBox);
        comboBox_membership->setObjectName(QString::fromUtf8("comboBox_membership"));

        horizontalLayout_2->addWidget(comboBox_membership);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_generate = new QPushButton(groupBox);
        pushButton_generate->setObjectName(QString::fromUtf8("pushButton_generate"));

        verticalLayout->addWidget(pushButton_generate);

        tableView = new QTableView(UpdatedReports);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 60, 241, 231));
        lineEdit_totalRev = new QLineEdit(UpdatedReports);
        lineEdit_totalRev->setObjectName(QString::fromUtf8("lineEdit_totalRev"));
        lineEdit_totalRev->setGeometry(QRect(300, 370, 181, 20));
        layoutWidget_2 = new QWidget(UpdatedReports);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(280, 300, 89, 34));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_titleRegMembers = new QLabel(layoutWidget_2);
        label_titleRegMembers->setObjectName(QString::fromUtf8("label_titleRegMembers"));

        verticalLayout_2->addWidget(label_titleRegMembers);

        label_regMember = new QLabel(layoutWidget_2);
        label_regMember->setObjectName(QString::fromUtf8("label_regMember"));
        label_regMember->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_2->addWidget(label_regMember);


        retranslateUi(UpdatedReports);

        QMetaObject::connectSlotsByName(UpdatedReports);
    } // setupUi

    void retranslateUi(QDialog *UpdatedReports)
    {
        UpdatedReports->setWindowTitle(QCoreApplication::translate("UpdatedReports", "Dialog", nullptr));
        label_tableTitle->setText(QCoreApplication::translate("UpdatedReports", "Generated Report:", nullptr));
        label_titleShoppers->setText(QCoreApplication::translate("UpdatedReports", "Shoppers:", nullptr));
        label_totalRevTitle->setText(QCoreApplication::translate("UpdatedReports", "Total Revenue:", nullptr));
        label_titleItemsSold->setText(QCoreApplication::translate("UpdatedReports", "Items Sold:", nullptr));
        label->setText(QString());
        label_miniLogo->setText(QString());
        label_titleExecMember->setText(QCoreApplication::translate("UpdatedReports", "Executive Members:", nullptr));
        label_execMember->setText(QCoreApplication::translate("UpdatedReports", "0", nullptr));
        groupBox->setTitle(QCoreApplication::translate("UpdatedReports", "Enter Report Information:", nullptr));
        label_date->setText(QCoreApplication::translate("UpdatedReports", "Date:", nullptr));
        label_membership->setText(QCoreApplication::translate("UpdatedReports", "Membership Type:", nullptr));
        pushButton_generate->setText(QCoreApplication::translate("UpdatedReports", "Generate", nullptr));
        label_titleRegMembers->setText(QCoreApplication::translate("UpdatedReports", "Regular Members:", nullptr));
        label_regMember->setText(QCoreApplication::translate("UpdatedReports", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdatedReports: public Ui_UpdatedReports {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEDREPORTS_H
