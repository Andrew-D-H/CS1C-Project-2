#ifndef MEMBERPURCHASES_H
#define MEMBERPURCHASES_H

#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QtSql>
#include <QSqlDatabase>
#include <QVector>
#include <QWidgetItem>

#include "database.h"

namespace Ui {
class memberPurchases;
}

class memberPurchases : public QDialog
{
    Q_OBJECT

public:
    explicit memberPurchases(QWidget *parent = nullptr);
    ~memberPurchases();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::memberPurchases *ui;
    Database db;
    QVector<QString> ids;


};

#endif // MEMBERPURCHASES_H
