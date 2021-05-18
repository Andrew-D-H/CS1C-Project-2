#ifndef UPDATEDREPORTS_H
#define UPDATEDREPORTS_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>
#include <QVector>
#include <QDebug>

#include "database.h"

namespace Ui {
class UpdatedReports;
}

class UpdatedReports : public QDialog
{
    Q_OBJECT

public:
    explicit UpdatedReports(QWidget *parent = nullptr);
    ~UpdatedReports();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_generate_clicked();

private:
    Ui::UpdatedReports *ui;
    Database db;
    QVector<QString> tableNames;
    QVector<QString> regMems;
    QVector<QString> ExecMems;

 };

#endif // UPDATEDREPORTS_H
