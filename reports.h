#ifndef REPORTS_H
#define REPORTS_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>
#include <QVector>

#include "database.h"

namespace Ui {
class Reports;
}

class Reports : public QDialog
{
    Q_OBJECT

public:
    explicit Reports(QWidget *parent = nullptr);
    ~Reports();

private slots:
    void on_pushButton_clicked();

private:
    void displayBothRoles(QString tableName);
    void displayRegular(QString tableName);
    void displayExecutive(QString tableName);
    void updateMemberCounts(QVector<int> idVec);
    void updateRevenueTotal(QString qry, QVector<int> idVec);

    Ui::Reports *ui;
    Database db;
    QSqlQueryModel *itemModel;
};

#endif // REPORTS_H
