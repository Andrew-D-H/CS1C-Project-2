#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <QDialog>
#include <QMessageBox>
#include <QDebug>
#include <QSqlDatabase>
#include <QSql>
#include <QPixmap>

#include "reports.h"
#include "expirations.h"

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

private:
    Ui::MainScreen *ui;
    bool isAdmin;
    bool isManager;

};

#endif // MAINSCREEN_H
