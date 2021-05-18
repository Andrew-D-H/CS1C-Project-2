#include "updatedreports.h"
#include "ui_updatedreports.h"

UpdatedReports::UpdatedReports(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdatedReports)
{
    ui->setupUi(this);
    ui->setupUi(this);
    //! prepping date line edit for proper data.
    ui->lineEdit_date->setPlaceholderText("YYYY-MM-DD");
    ui->lineEdit_date->setMaxLength(10);
    //! populating membership combobox.
    ui->comboBox_membership->addItem("All");
    ui->comboBox_membership->addItem("Regular");
    ui->comboBox_membership->addItem("Executive");
    //making total rev line edit non-editable.
    ui->lineEdit_totalRev->setReadOnly(true);

    db.openDatabase();

    QSqlQuery qry;
    QString cmdGetAllTables = "SHOW TABLES;";

    qry.exec(cmdGetAllTables);
    while(qry.next())
    {
        tableNames.push_back(qry.value(0).toString());
    }

    for(int i = 0; i < tableNames.size(); i++)
    {
        if(tableNames[i][0] == 'i' && tableNames[i][1] == 'd')
        {
            continue;
        }
        else
        {
            tableNames[i] = "zzzzzz";
        }
    }
    std::sort(tableNames.begin(),tableNames.end());







}

UpdatedReports::~UpdatedReports()
{
    db.closeDatabase();
    delete ui;
}

//void UpdatedReports::on_pushButton_clicked()
//{
//    QSqlQuery qry;
//    QString dateInput = ui->lineEdit_date->text();

//    qDebug() << "in the button";

//    for(int i = 0; i < tableNames.size(); i++)
//    {

//        QString cmdSelectPurchase = "SELECT datePurchased FROM '" + tableNames[i] +
//                                    "' WHERE datePurchased = '"+ dateInput + "';";

//        qry.exec(cmdSelectPurchase);
//        while(qry.next())
//        {
//            qDebug() << qry.value(0).toString();
//        }

//    }
//}

void UpdatedReports::on_pushButton_generate_clicked()
{
    QSqlQuery qry;
    QString dateInput = ui->lineEdit_date->text();

    qDebug() << "in the button";

    for(int i = 0; i < tableNames.size(); i++)
    {

        QString cmdSelectPurchase = "SELECT datePurchased FROM '" + tableNames[i] +
                                    "' WHERE datePurchased = '"+ dateInput + "';";

        qry.exec(cmdSelectPurchase);
        while(qry.next())
        {
            qDebug() << qry.value(0).toString();
        }

    }
}
