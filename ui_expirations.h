/********************************************************************************
** Form generated from reading UI file 'expirations.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPIRATIONS_H
#define UI_EXPIRATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Expirations
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QDialog *Expirations)
    {
        if (Expirations->objectName().isEmpty())
            Expirations->setObjectName(QString::fromUtf8("Expirations"));
        Expirations->resize(400, 300);
        Expirations->setStyleSheet(QString::fromUtf8("background-color: #55ffff"));
        verticalLayout = new QVBoxLayout(Expirations);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(Expirations);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Expirations);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(Expirations);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: #feff57"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(Expirations);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #feff57"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(Expirations);

        QMetaObject::connectSlotsByName(Expirations);
    } // setupUi

    void retranslateUi(QDialog *Expirations)
    {
        Expirations->setWindowTitle(QCoreApplication::translate("Expirations", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Expirations", "Enter a Month:", nullptr));
        pushButton->setText(QCoreApplication::translate("Expirations", "Generate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Expirations: public Ui_Expirations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPIRATIONS_H
