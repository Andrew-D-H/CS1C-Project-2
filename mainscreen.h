/*! file: mainscreen.h
 * ====================================================
 * disc:
 *      this is the main hub where all other aspects of
 * the ui can be acessed.
 */

#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <QDialog>
#include <QMessageBox>
#include <QDebug>
#include <QSqlDatabase>
#include <QSql>
#include <QPixmap>
#include <QMovie>

#include "reports.h"
#include "expirations.h"
#include "memberpurchases.h"
#include "rebates.h"
#include "addndelete.h"
#include "inventory.h"
#include "createpurchase.h"
#include "updateinventory.h"
#include "updatedreports.h"

namespace Ui {
class MainScreen;
}

class MainScreen : public QDialog
{
    Q_OBJECT

public:
    explicit MainScreen(QWidget *parent = nullptr);
    explicit MainScreen(bool isAdminFlag, bool isManagerFlag, QWidget *parent = nullptr);
    ~MainScreen();

private slots:


    void on_pushButton_reports_clicked();

    void on_pushButton_expirations_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainScreen *ui;
    bool isAdmin;
    bool isManager;

};

#endif // MAINSCREEN_H
