#ifndef REBATES_H
#define REBATES_H

#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QtSql>
#include <QSqlDatabase>
#include <QVector>
#include <QWidgetItem>

#include "database.h"

namespace Ui {
class Rebates;
}

class Rebates : public QDialog
{
    Q_OBJECT

public:
    explicit Rebates(QWidget *parent = nullptr);
    ~Rebates();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Rebates *ui;
    Database db;
    QVector <QString> execMemIds;
    QVector <QString> regMemIds;
};

#endif // REBATES_H
