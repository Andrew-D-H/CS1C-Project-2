/********************************************************************************
** Form generated from reading UI file 'addndelete.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNDELETE_H
#define UI_ADDNDELETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddnDelete
{
public:
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_fName;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_lName;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_Date;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_memberId;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *AddnDelete)
    {
        if (AddnDelete->objectName().isEmpty())
            AddnDelete->setObjectName(QString::fromUtf8("AddnDelete"));
        AddnDelete->resize(280, 300);
        AddnDelete->setStyleSheet(QString::fromUtf8("background-color:#55ffff;"));
        horizontalLayout_3 = new QHBoxLayout(AddnDelete);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        groupBox = new QGroupBox(AddnDelete);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: #feff57"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: #55ffff"));

        verticalLayout->addWidget(pushButton_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_fName = new QLineEdit(groupBox);
        lineEdit_fName->setObjectName(QString::fromUtf8("lineEdit_fName"));
        lineEdit_fName->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));

        horizontalLayout->addWidget(lineEdit_fName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_lName = new QLineEdit(groupBox);
        lineEdit_lName->setObjectName(QString::fromUtf8("lineEdit_lName"));
        lineEdit_lName->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));

        horizontalLayout_4->addWidget(lineEdit_lName);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEdit_Date = new QLineEdit(groupBox);
        lineEdit_Date->setObjectName(QString::fromUtf8("lineEdit_Date"));
        lineEdit_Date->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));

        horizontalLayout_6->addWidget(lineEdit_Date);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_memberId = new QLineEdit(groupBox);
        lineEdit_memberId->setObjectName(QString::fromUtf8("lineEdit_memberId"));
        lineEdit_memberId->setStyleSheet(QString::fromUtf8("background-color: #ffffff"));

        horizontalLayout_5->addWidget(lineEdit_memberId);


        verticalLayout->addLayout(horizontalLayout_5);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #55ffff"));

        verticalLayout->addWidget(pushButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_2->addWidget(checkBox);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #55ffff"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addWidget(groupBox);

        horizontalSpacer = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        retranslateUi(AddnDelete);

        QMetaObject::connectSlotsByName(AddnDelete);
    } // setupUi

    void retranslateUi(QDialog *AddnDelete)
    {
        AddnDelete->setWindowTitle(QCoreApplication::translate("AddnDelete", "Dialog", nullptr));
        groupBox->setTitle(QString());
        pushButton_3->setText(QCoreApplication::translate("AddnDelete", "Delete Member with this ID?", nullptr));
        label->setText(QCoreApplication::translate("AddnDelete", "First Name:", nullptr));
        label_4->setText(QCoreApplication::translate("AddnDelete", "Last Name:", nullptr));
        label_6->setText(QCoreApplication::translate("AddnDelete", "Date:", nullptr));
        label_5->setText(QCoreApplication::translate("AddnDelete", "Member Id:", nullptr));
        pushButton->setText(QCoreApplication::translate("AddnDelete", "Create", nullptr));
        checkBox->setText(QCoreApplication::translate("AddnDelete", "Executive?", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddnDelete", "Clear Fields", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddnDelete: public Ui_AddnDelete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNDELETE_H
