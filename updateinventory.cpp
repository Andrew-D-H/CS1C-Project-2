/*! file: updateinventory.cpp
 * ====================================================
 * disc:
 *     Just takes the users input and adds it to the
 *     database as a new member.
 */

#include "updateinventory.h"
#include "ui_updateinventory.h"

updateInventory::updateInventory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updateInventory)
{
    ui->setupUi(this);
    db.openDatabase();
}

updateInventory::~updateInventory()
{
    db.closeDatabase();
    delete ui;
}

//! Calls delete and then replaces the item with an updated version.
void updateInventory::on_pushButton_clicked()
{
    QSqlQuery qry;
    QString itemDisc = ui->lineEdit_name->text();
    QString price = ui->lineEdit_price->text();
    QString quantity = ui->lineEdit_quantity->text();


    QString cmdDelete = "delete from inventory where itemDisc = '"+ itemDisc +"';";
    qDebug() << cmdDelete;
    qry.exec(cmdDelete);

    if(true)
    {
        QString cmdCreate = "INSERT INTO inventory VALUES ( 0, '" + itemDisc + "', '" + price + "', 0 ," + quantity + ");";
        qDebug() << cmdCreate;
        qry.exec(cmdCreate);
    }

}

//! deletes the id entered from the database table.
void updateInventory::on_pushButton_delete_clicked()
{
    QSqlQuery qry;
    QString itemDisc = ui->lineEdit_name->text();

    QString cmdDelete = "delete from inventory where itemDisc = '"+ itemDisc +"';";
    qDebug() << cmdDelete;
    qry.exec(cmdDelete);
}
