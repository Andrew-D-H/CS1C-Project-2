/********************************************************************************
** Form generated from reading UI file 'rebates.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REBATES_H
#define UI_REBATES_H

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

class Ui_Rebates
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Rebates)
    {
        if (Rebates->objectName().isEmpty())
            Rebates->setObjectName(QString::fromUtf8("Rebates"));
        Rebates->resize(475, 327);
        Rebates->setStyleSheet(QString::fromUtf8("background-color: #55ffff"));
        verticalLayout = new QVBoxLayout(Rebates);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(Rebates);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Rebates);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(Rebates);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));

        horizontalLayout->addWidget(lineEdit);

        comboBox = new QComboBox(Rebates);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: #feff57"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        groupBox = new QGroupBox(Rebates);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #feff57"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addWidget(groupBox);


        retranslateUi(Rebates);

        QMetaObject::connectSlotsByName(Rebates);
    } // setupUi

    void retranslateUi(QDialog *Rebates)
    {
        Rebates->setWindowTitle(QCoreApplication::translate("Rebates", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Rebates", "Recommended Conversions", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("Rebates", "Generate Rebates", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Rebates: public Ui_Rebates {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REBATES_H
