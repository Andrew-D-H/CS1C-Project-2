#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QStandardItemModel>
#include "dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_updateTableButton_clicked();


    void on_pushButton_Login_clicked();

    void on_purchaseReport_Button_clicked();

    void on_pushButton_clicked();

    void on_purchaseReport_Button_2_clicked();

    void on_pushButton_2_clicked();

    void on_purchaseReport_Button_3_clicked();

    void on_pushButton_3_clicked();

    void on_purchaseReport_Button_4_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    QSqlQueryModel *model;
    QString permissions;
    Dialog *Dialog;
    //Dialog *Dialog_memberStatus;
};
#endif // MAINWINDOW_H
