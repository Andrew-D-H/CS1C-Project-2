/*! file: Inventory.h
 * ====================================================
 * disc:
 *      This window allows the user to search every item
 * in the database. They can all be viewed.
 */

#ifndef INVENTORY_H
#define INVENTORY_H

#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QtSql>
#include <QSqlDatabase>
#include <QVector>
#include <QWidgetItem>

#include "database.h"

namespace Ui {

class Inventory;
}

class Inventory : public QDialog
{
    Q_OBJECT

public:
    explicit Inventory(QWidget *parent = nullptr);
    ~Inventory();

private slots:
    void on_pushButton_clicked();

private:
    //maybe put in header
    struct myInventory
    {
        QString itemDisc = "Im a broken boy.";
        double price = -1;
        int quantity = 0;
    };

    Ui::Inventory *ui;
    Database db;
    QVector<myInventory> itemVec;

};

#endif // INVENTORY_H
