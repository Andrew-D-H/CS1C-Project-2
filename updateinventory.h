/*! file: updateInventory
 * ====================================================
 * disc:
 *      This class allows the user to enter and delete
 *  items from the database. It also allows a user to
 *  update the price of an item.
 */

#ifndef UPDATEINVENTORY_H
#define UPDATEINVENTORY_H

#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QtSql>
#include <QSqlDatabase>
#include <QVector>
#include <QWidgetItem>

#include "database.h"

namespace Ui {
class updateInventory;
}

class updateInventory : public QDialog
{
    Q_OBJECT

public:
    explicit updateInventory(QWidget *parent = nullptr);
    ~updateInventory();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_delete_clicked();

private:
    Ui::updateInventory *ui;
    Database db;
};

#endif // UPDATEINVENTORY_H
