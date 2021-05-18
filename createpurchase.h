#ifndef CREATEPURCHASE_H
#define CREATEPURCHASE_H

#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QtSql>
/*! file: createpurchase.h
 * ====================================================
 * disc:
 *      This segment of the code handles the creation
 * and deletion of members to the database.
 */

#include <QSqlDatabase>
#include <QVector>
#include <QWidgetItem>

#include "database.h"

namespace Ui {
class createPurchase;
}

class createPurchase : public QDialog
{
    Q_OBJECT

public:
    explicit createPurchase(QWidget *parent = nullptr);
    ~createPurchase();

private slots:
    void on_pushButton_clicked();

private:
    Ui::createPurchase *ui;
    Database db;
};

#endif // CREATEPURCHASE_H
