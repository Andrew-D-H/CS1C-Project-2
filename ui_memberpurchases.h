/********************************************************************************
** Form generated from reading UI file 'memberpurchases.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERPURCHASES_H
#define UI_MEMBERPURCHASES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_memberPurchases
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLabel *label_shopperName;
    QListWidget *listWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_search;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QComboBox *comboBox;

    void setupUi(QDialog *memberPurchases)
    {
        if (memberPurchases->objectName().isEmpty())
            memberPurchases->setObjectName(QString::fromUtf8("memberPurchases"));
        memberPurchases->resize(400, 300);
        memberPurchases->setStyleSheet(QString::fromUtf8("background-color: #55ffff"));
        verticalLayout_2 = new QVBoxLayout(memberPurchases);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(memberPurchases);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        label_shopperName = new QLabel(memberPurchases);
        label_shopperName->setObjectName(QString::fromUtf8("label_shopperName"));

        horizontalLayout_5->addWidget(label_shopperName);


        verticalLayout_2->addLayout(horizontalLayout_5);

        listWidget = new QListWidget(memberPurchases);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));

        verticalLayout_2->addWidget(listWidget);

        groupBox = new QGroupBox(memberPurchases);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #feff57"));

        horizontalLayout_4->addWidget(pushButton_2);

        lineEdit_search = new QLineEdit(groupBox);
        lineEdit_search->setObjectName(QString::fromUtf8("lineEdit_search"));
        lineEdit_search->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));

        horizontalLayout_4->addWidget(lineEdit_search);


        horizontalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #feff57"));

        horizontalLayout->addWidget(pushButton);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: #feff57"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(memberPurchases);

        QMetaObject::connectSlotsByName(memberPurchases);
    } // setupUi

    void retranslateUi(QDialog *memberPurchases)
    {
        memberPurchases->setWindowTitle(QCoreApplication::translate("memberPurchases", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("memberPurchases", "Shopper: ", nullptr));
        label_shopperName->setText(QString());
        groupBox->setTitle(QString());
        pushButton_2->setText(QCoreApplication::translate("memberPurchases", "Search", nullptr));
        label->setText(QCoreApplication::translate("memberPurchases", "Grand Total w/tax ", nullptr));
        pushButton->setText(QCoreApplication::translate("memberPurchases", "Generate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class memberPurchases: public Ui_memberPurchases {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERPURCHASES_H
