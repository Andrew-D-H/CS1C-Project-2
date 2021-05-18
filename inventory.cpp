/*! file: inventory.h
 * ====================================================
 * disc:
 *      Allows the users to view and interact with
 * the databases inventory.
 */

#include "inventory.h"
#include "ui_inventory.h"

Inventory::Inventory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inventory)
{
    ui->setupUi(this);
    ui->lineEdit_revenue->setReadOnly(true);
    ui->lineEdit_item->setPlaceholderText("Search");
    db.openDatabase();

    QSqlQuery qry;

    QVector <QString> vecIds;

    //!grabs every table with a name similar for the search.
    QString cmdShowIdTables = "SHOW TABLES LIKE 'id%';";
    qry.exec(cmdShowIdTables);

    //!pushes all related tables into a vector
    while (qry.next())
    {
        vecIds.push_back(qry.value(0).toString());
    }

    //!clear function.
    QString cmdClear = "UPDATE inventory SET quantity = 0;";
    qry.exec(cmdClear);


    //! joins inventory and users purchase tables to
    //! see what they bought.
    for(int i =0; i<vecIds.size();i++)
    {                           // TMHWW
    QString cmdTransferQuantity = "UPDATE inventory JOIN "+ vecIds[i] +" ON "+ vecIds[i] + ".itemDisc = inventory.itemDisc "
                                  "SET quantity = quantity + "  + vecIds[i] + ".quantityPurchased;";

        qry.exec(cmdTransferQuantity);
    }

    //! gets the rowCount from the inventory.
    QString cmdGetRowCount = "SELECT COUNT(itemDisc) FROM inventory;";
    qry.exec(cmdGetRowCount);

    int rowCount = 0;
    while(qry.next())
    {
        rowCount = qry.value(0).toInt();
    }

    qDebug() << "rowcount is: " << rowCount;

    double totalRevenue = 0;

    //!Display the item name, quantity, and price of the item.
    QString cmdTerryDavisScreen = "SELECT itemDisc, quantity * price AS moneySpent, quantity FROM inventory ORDER BY itemDisc;";
    qry.exec(cmdTerryDavisScreen);
    while(qry.next())
    {
        QString ItemName = qry.value(0).toString();
        int quantity = qry.value(2).toInt();

         totalRevenue += qry.value(1).toDouble();

        ui->listWidget->addItem(QString("%1").arg(ItemName,-28,QChar(' ')) + " \tQuantity: " + QString::number(quantity));
    }

    ui->lineEdit_revenue->setText("$" + QString::number(totalRevenue,'f',2));


}

Inventory::~Inventory()
{
    db.closeDatabase();
    delete ui;
}

//! This allows the user to search for a specific item in the list.
void Inventory::on_pushButton_clicked()
{
    ui->listWidget->clear();
    QSqlQuery qry;
    QString userInput = ui->lineEdit_item->text();
    QString cmdTerryDavisScreenSearch = "SELECT itemDisc, quantity * price AS moneySpent, "
    "quantity FROM inventory WHERE itemDisc LIKE '" + userInput + "%' ORDER BY itemDisc;";
    qry.exec(cmdTerryDavisScreenSearch);

    qDebug() << cmdTerryDavisScreenSearch;

    double totalRevenue = 0;

    while(qry.next())
    {
        QString ItemName = qry.value(0).toString();
        int quantity = qry.value(2).toInt();

        totalRevenue = qry.value(1).toDouble();

         ui->listWidget->addItem(QString("%1").arg(ItemName,-28,QChar(' ')) + " \tQuantity: " + QString::number(quantity) + " \t Total Revenue: $" + QString::number(totalRevenue,'f',2));
    }

}
