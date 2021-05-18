/*! file: createPurchase.cpp
 * ====================================================
 * disc:
 *      Given user input, this class allows a user to
 *  create a purchase.
 */
#include "createpurchase.h"
#include "ui_createpurchase.h"

createPurchase::createPurchase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createPurchase)
{
    ui->setupUi(this);
    db.openDatabase();
    ui->lineEditID->setMaxLength(5);
    ui->lineEdit_date->setMaxLength(10);
    ui->lineEdit_date->setPlaceholderText("YYYY-MM-DD");
    ui->lineEditID->setPlaceholderText("#00000");
}

createPurchase::~createPurchase()
{
    db.closeDatabase();
    delete ui;
}

void createPurchase::on_pushButton_clicked()
{
    QString idEntered = ui->lineEditID->text();
    QString date = ui->lineEdit_date->text();
    QString itemName = ui->lineEdit_name->text();
    QString price = ui->lineEdit_price->text();
    QString quantity = ui->lineEdit_quantity->text();
    QSqlQuery qry;

    QString cmdIsEmpty = "SELECT * FROM members WHERE id = '" + idEntered + "';";

    qry.exec(cmdIsEmpty);

    if(!(qry.next()))
    {
        QMessageBox::warning(this,"Person does not Exsist.","The id you entered does not exist.");
        return;
    }

    QString cmdCreateTable = "CREATE TABLE id" + idEntered + " (inventoryId INT, itemDisc VARCHAR(50), "
                            "quantityPurchased INT, datePurchased DATE, priceOfPurchase DECIMAL(5,2));";

    qry.exec(cmdCreateTable);


    QString cmdMakePurchase = "INSERT INTO id" + idEntered + " VALUE (" + "0" + ", '" + itemName +
                               "', " + quantity + ", '" + date + "', " + price + ");";

    qry.exec(cmdMakePurchase);
    qDebug() << cmdMakePurchase;


}
