/*! file: rebates.cpp
 * ====================================================
 * disc:
 *      This window calculates any member's rebate.
 */

#include "rebates.h"
#include "ui_rebates.h"

Rebates::Rebates(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Rebates)
{
    ui->setupUi(this);
    ui->lineEdit->setReadOnly(true);
    ui->comboBox->addItem("Executive");
    ui->comboBox->addItem("Regular");

    db.openDatabase();

    QSqlQuery qry;
    QString cmdIdFromMembers = "SELECT id,type FROM members;";

    QVector <QString> memIds;
    QVector <QString> regIds;

    //! if a user is of one type, push them onto that type's vector
    qry.exec(cmdIdFromMembers);
    while(qry.next())
    {
        bool membershipType = qry.value(1).toBool();

        if(membershipType)
        {
            memIds.push_back(qry.value(0).toString());
        }
        else
        {
            regIds.push_back(qry.value(0).toString());
        }
    }

    // sort both of those vectors
    std::sort(memIds.begin(),memIds.end());
    std::sort(regIds.begin(),regIds.end());

    execMemIds = memIds;
    regMemIds = regIds;

}

Rebates::~Rebates()
{
    db.closeDatabase();
    delete ui;
}

void Rebates::on_pushButton_clicked()
{
    ui->listWidget->clear();
    ui->lineEdit->clear();

    double grandTotal = 0;
    int recommend = 0;

    QSqlQuery qry;

    //combo box selector
    int comboSelection = ui->comboBox->currentIndex();

    //combobox set to exec
    if(comboSelection == 0){
        for(int i = 0; i < execMemIds.size(); i++){
            grandTotal = 0;
            QString cmdSumEverythingQry = "SELECT quantityPurchased * priceOfPurchase AS moneySpent FROM id" + execMemIds[i] +"; ";

            //!queries their information and sums a grand total.
            qry.exec(cmdSumEverythingQry);
            qDebug() << cmdSumEverythingQry;
            while(qry.next())
            {
                grandTotal += qry.value(0).toDouble();

            }

            //! the math winds up being, if you dont spend over $2750 as a member, it's not worth it.
            double rebate = grandTotal * 0.02;
            QString justified = "No.";

            if(rebate >= 55)
            {
                justified = "Yes.";
            } else recommend++;

            ui->listWidget->addItem("Member id: " + execMemIds[i] + "    Rebate: $" +
                                   (QString::number(rebate,'f',2)) + " \tShould be Exec: " + justified);
        }

        ui->lineEdit->setText(QString::number(recommend));

        qDebug() << grandTotal;
    }

    //regular is chosen
    if(comboSelection == 1)
    {
        for(int i = 0; i < regMemIds.size(); i++){
            grandTotal = 0;
            QString cmdSumEverythingQry = "SELECT quantityPurchased * priceOfPurchase AS moneySpent FROM id" + regMemIds[i] +"; ";

            qry.exec(cmdSumEverythingQry);
            qDebug() << cmdSumEverythingQry;
            while(qry.next())
            {
                grandTotal += qry.value(0).toDouble();

            }

            double rebate = grandTotal * 0.02;
            QString justified = "No.";

            if(rebate >= 55)
            {
                justified = "Yes.";
            } else recommend++;

            ui->listWidget->addItem("Member id: " +  regMemIds[i] + "    potential Rebate: $" +
                                   QString("%1").arg((QString::number(rebate,'f',2)),-8, QChar(' ')) + " \tShould be Exec: " + justified);
        }
        ui->lineEdit->setText(QString::number(recommend));

        qDebug() << grandTotal;
    }

}
