/********************************************************************************
** Form generated from reading UI file 'updateinventory.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEINVENTORY_H
#define UI_UPDATEINVENTORY_H

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

class Ui_updateInventory
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_price;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_quantity;
    QPushButton *pushButton;
    QPushButton *pushButton_delete;

    void setupUi(QDialog *updateInventory)
    {
        if (updateInventory->objectName().isEmpty())
            updateInventory->setObjectName(QString::fromUtf8("updateInventory"));
        updateInventory->resize(280, 236);
        updateInventory->setStyleSheet(QString::fromUtf8("background-color: #55ffff"));
        verticalLayout_2 = new QVBoxLayout(updateInventory);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(updateInventory);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_name = new QLineEdit(groupBox);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));

        horizontalLayout_2->addWidget(lineEdit_name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_price = new QLineEdit(groupBox);
        lineEdit_price->setObjectName(QString::fromUtf8("lineEdit_price"));
        lineEdit_price->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));

        horizontalLayout_3->addWidget(lineEdit_price);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_quantity = new QLineEdit(groupBox);
        lineEdit_quantity->setObjectName(QString::fromUtf8("lineEdit_quantity"));
        lineEdit_quantity->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));

        horizontalLayout_4->addWidget(lineEdit_quantity);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #background-color: #feff57"));

        verticalLayout->addWidget(pushButton);

        pushButton_delete = new QPushButton(groupBox);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setStyleSheet(QString::fromUtf8("background-color: #feff57"));

        verticalLayout->addWidget(pushButton_delete);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(updateInventory);

        QMetaObject::connectSlotsByName(updateInventory);
    } // setupUi

    void retranslateUi(QDialog *updateInventory)
    {
        updateInventory->setWindowTitle(QCoreApplication::translate("updateInventory", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("updateInventory", "New Name", nullptr));
        label_3->setText(QCoreApplication::translate("updateInventory", "New Price", nullptr));
        label_4->setText(QCoreApplication::translate("updateInventory", "Current Quantity", nullptr));
        pushButton->setText(QCoreApplication::translate("updateInventory", "Create or Update Item", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("updateInventory", "Delete Item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updateInventory: public Ui_updateInventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEINVENTORY_H
