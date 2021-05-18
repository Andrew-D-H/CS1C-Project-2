#ifndef ADDNDELETE_H
#define ADDNDELETE_H

#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QtSql>
#include <QSqlDatabase>
#include <QVector>
#include <QWidgetItem>

#include "database.h"

namespace Ui {
class AddnDelete;
}

class AddnDelete : public QDialog
{
    Q_OBJECT

public:
    explicit AddnDelete(QWidget *parent = nullptr);
    ~AddnDelete();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::AddnDelete *ui;
    Database db;
    QVector<int> ids;
};

#endif // ADDNDELETE_H
