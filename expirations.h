/*! file: expirations.h
 * ====================================================
 * disc:
 *      This window allows the user to select from a
 * dropdown of months and returns every member that
 * expires that month.
 */
#ifndef EXPIRATIONS_H
#define EXPIRATIONS_H

#include <QDialog>
#include <QtSql>
#include <QVector>
#include <QMessageBox>

#include "database.h"

namespace Ui {
class Expirations;
}

class Expirations : public QDialog
{
    Q_OBJECT

public:
    explicit Expirations(QWidget *parent = nullptr);
    ~Expirations();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Expirations *ui;
    Database db;
};

#endif // EXPIRATIONS_H
