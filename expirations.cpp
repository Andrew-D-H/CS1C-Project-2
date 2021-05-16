#include "expirations.h"
#include "ui_expirations.h"


Expirations::Expirations(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Expirations)
{
    ui->setupUi(this);


    ui->comboBox->insertItem(0,"January");
    ui->comboBox->insertItem(1,"February");
    ui->comboBox->insertItem(2,"March");
    ui->comboBox->insertItem(3,"April");
    ui->comboBox->insertItem(4,"May");
    ui->comboBox->insertItem(5,"June");
    ui->comboBox->insertItem(6,"July");
    ui->comboBox->insertItem(7,"August");
    ui->comboBox->insertItem(8,"September");
    ui->comboBox->insertItem(9,"October");
    ui->comboBox->insertItem(10,"November");
    ui->comboBox->insertItem(11,"December");
    db.openDatabase();
}

Expirations::~Expirations()
{
    db.closeDatabase();
    delete ui;
}

void Expirations::on_pushButton_clicked()
{
    QString month;
    switch(ui->comboBox->currentIndex())
    {
        case 0:
            month = "01";
            break;
        case 1:
            month = "02";
            break;
        case 2:
            month = "03";
            break;
        case 3:
            month = "04";
            break;
        case 4:
            month = "05";
            break;
        case 5:
            month = "06";
            break;
        case 6:
            month = "07";
            break;
        case 7:
            month = "08";
            break;
        case 8:
            month = "09";
            break;
        case 9:
            month = "10";
            break;
        case 10:
            month = "11";
            break;
        case 11:
            month = "12";
            break;
    }

    QSqlQuery qry;

    qry.exec("Select expirationDate from members;");
    while(qry.next()){
        QString test = qry.value(0).toString();
        qDebug() << test;
    }

}
