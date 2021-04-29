#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_report_clicked()
{
    QString enteredId = ui->lineEdit_memberId->text();

    //QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    //db.setHostName("localhost");
    //db.setUserName("root");
    //db.setPassword("Imaginebreaker1");
    //db.setDatabaseName("Database");
    //db.open();

    ui->listWidget->addItem("Generating Report:");
    QSqlQuery query;
    query.exec("SELECT fname, lname, amountSpent FROM members WHERE number_id = " + enteredId);

    while (query.next()){
        QString first_name = query.value(0).toString();
        QString last_name = query.value(1).toString();
        double amount_spent = query.value(2).toDouble();
        //adding the tax:
        amount_spent = amount_spent * 1.075;
        QString amount_spent_string = QString::number(amount_spent);
        ui->listWidget->addItem(last_name + ", " + first_name + ": Money Spent: $" + amount_spent_string);
    }
}

void Dialog::on_pushButton_exit_clicked()
{
    Dialog::close();
}
