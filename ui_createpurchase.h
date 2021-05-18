/********************************************************************************
** Form generated from reading UI file 'createpurchase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPURCHASE_H
#define UI_CREATEPURCHASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_createPurchase
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_date;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_price;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_quantity;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEditID;
    QPushButton *pushButton;

    void setupUi(QDialog *createPurchase)
    {
        if (createPurchase->objectName().isEmpty())
            createPurchase->setObjectName(QString::fromUtf8("createPurchase"));
        createPurchase->resize(281, 300);
        createPurchase->setStyleSheet(QString::fromUtf8("background-color: #55ffff"));
        groupBox = new QGroupBox(createPurchase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 261, 291));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        lineEdit_name = new QLineEdit(groupBox);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));

        horizontalLayout_4->addWidget(lineEdit_name);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEdit_date = new QLineEdit(groupBox);
        lineEdit_date->setObjectName(QString::fromUtf8("lineEdit_date"));
        lineEdit_date->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));

        horizontalLayout_5->addWidget(lineEdit_date);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_price = new QLineEdit(groupBox);
        lineEdit_price->setObjectName(QString::fromUtf8("lineEdit_price"));
        lineEdit_price->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));

        horizontalLayout_3->addWidget(lineEdit_price);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_quantity = new QLineEdit(groupBox);
        lineEdit_quantity->setObjectName(QString::fromUtf8("lineEdit_quantity"));
        lineEdit_quantity->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));

        horizontalLayout_2->addWidget(lineEdit_quantity);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        lineEditID = new QLineEdit(groupBox);
        lineEditID->setObjectName(QString::fromUtf8("lineEditID"));
        lineEditID->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));

        horizontalLayout_6->addWidget(lineEditID);


        verticalLayout->addLayout(horizontalLayout_6);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #feff57"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(createPurchase);

        QMetaObject::connectSlotsByName(createPurchase);
    } // setupUi

    void retranslateUi(QDialog *createPurchase)
    {
        createPurchase->setWindowTitle(QCoreApplication::translate("createPurchase", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_3->setText(QCoreApplication::translate("createPurchase", "Name of Item", nullptr));
        label_4->setText(QCoreApplication::translate("createPurchase", "Date of Purchase", nullptr));
        label_2->setText(QCoreApplication::translate("createPurchase", "Cost", nullptr));
        label->setText(QCoreApplication::translate("createPurchase", "Quantity", nullptr));
        label_5->setText(QCoreApplication::translate("createPurchase", "ID of purchaser", nullptr));
        pushButton->setText(QCoreApplication::translate("createPurchase", "Enter ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class createPurchase: public Ui_createPurchase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPURCHASE_H
