#include "dialog_memberstatus.h"
#include "ui_dialog_memberstatus.h"

Dialog_MemberStatus::Dialog_MemberStatus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_MemberStatus)
{
    ui->setupUi(this);
}

Dialog_MemberStatus::~Dialog_MemberStatus()
{
    delete ui;
}

void Dialog_MemberStatus::on_pushButton_clicked()
{
    QString enteredId = ui->lineEdit->text();

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("Imaginebreaker1");
    db.setDatabaseName("Database");
    db.open();

    QSqlQuery query;
    query.exec("SELECT fname, lname, type FROM members WHERE number_id = " + enteredId);

    QString first_name;
    QString last_name;
    int membershipStatus = 42;  //init to 42 cause why not?

    while (query.next()){
        QString first_name = query.value(0).toString();
        QString last_name = query.value(1).toString();
        membershipStatus = query.value(2).toInt();
    }

    QMessageBox::StandardButton reply = QMessageBox::question(this, "Member Found",
                                     "Member Found: " + first_name + " " + last_name + ". Would you "
                                    "like to change their membership status?",QMessageBox::Yes | QMessageBox::No);

    if(reply == QMessageBox::Yes){
        if(membershipStatus == 0){
            membershipStatus = 1;
        }
        if (membershipStatus == 1){
            membershipStatus = 0;
        }

        QString membStat_string = QString::number(membershipStatus);

        query.exec("UPDATE members SET type = " + membStat_string + " WHERE number_id = " + enteredId);
    }

    if(reply == QMessageBox::No){
       Dialog_MemberStatus::close();
    }
}

void Dialog_MemberStatus::on_pushButton_2_clicked()
{
    Dialog_MemberStatus::close();
}
