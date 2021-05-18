/*! file: expirations.cpp
 * ====================================================
 * disc:
 *      allows the user to choose from a selection of
 * dates, and returns every member who will expire that
 * month.
 */

#include "expirations.h"
#include "ui_expirations.h"


Expirations::Expirations(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Expirations)
{
    ui->setupUi(this);

    //!Populating the combobox.
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

//! Determines which month was selected, and queries the database
//! to find out who exipires then.
void Expirations::on_pushButton_clicked()
{
    ui->listWidget->clear();
    QVector<int> idVec(db.numOfMembers());
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

     //! chops everything but the month from the expirationDate query.
    qry.exec("Select expirationDate, id from members;");
    while(qry.next()){
        QString date = qry.value(0).toString();
        date.remove(0,5);
        date.remove(2,4);

        if (date == month)
        {
            idVec.push_back(qry.value(1).toInt());
        }

        qDebug() << date;
    }

    //! if no-one expires that month let the user know.
    if(idVec.isEmpty())
    {
        QMessageBox::information(this, "No Expirations.", "It looks like no one's Membership expires that month.");
        return;
    }
    else
    {
        QString vecGeneratedQry = "SELECT fName,lName,expirationDate FROM members WHERE type = 0 AND ";

        for(int i = 0; i < idVec.length(); i++)
        {
            if(i == idVec.length() - 1)
            {
                vecGeneratedQry.append(" id = " + QString::number(idVec[i]) + ";");
            }
            else
            {
                vecGeneratedQry.append(" id = " + QString::number(idVec[i]) +" OR ");
            }
        }


        //qDebug() << vecGeneratedQry;

        qry.exec(vecGeneratedQry);

        //!pull out the regular members.
        while (qry.next())
        {
            QString first = qry.value(0).toString();
            QString last = qry.value(1).toString();
            QString date = qry.value(2).toString();
            ui->listWidget->addItem(first + " " + last + ", Expires: " + date + " Renewal Fee: $65");
        }

        //change the query to pull only executive members now.
        vecGeneratedQry.remove(60,1);
        vecGeneratedQry.insert(60,'1');

        qry.exec(vecGeneratedQry);

        while (qry.next())
        {
            QString first = qry.value(0).toString();
            QString last = qry.value(1).toString();
            QString date = qry.value(2).toString();
            ui->listWidget->addItem(first + " " + last + ", Expires: " + date + " Renewal Fee: $120");
        }
    }
}
