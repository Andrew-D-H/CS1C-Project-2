#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_updateTableButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("Imaginebreaker1");
    db.setDatabaseName("Database");
    db.open();
    QSqlQuery qry;
    db.close();
}


void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if (username == "manager" && password == "123"){
        QMessageBox::information(this, "Login", "You have sucessfully logged in\nas a Bulk Club store Manager!");
        permissions = "granted";
    }
    else if (username == "admin" && password == "123"){
        QMessageBox::information(this, "Login", "You have sucessfully logged in\nas a Bulk Club system Administrator!");
        permissions = "granted";
    }
    else {
        QMessageBox::warning(this,"Login","Sorry, Those credentials are invalid. ");
    }
}

void MainWindow::on_purchaseReport_Button_clicked()
{
    qDebug() << permissions;
    if (QString::compare(permissions,"granted")){
             QMessageBox::warning(this,"Please log in", "Sorry, you must login to use this feature.");
    }
    else {
        Dialog = new class Dialog(this);
        Dialog->show();
    }
}

void MainWindow::on_pushButton_clicked()
{
    //Dialog_memberStatus = new class Dialog(this);
    //Dialog->show();
}

void MainWindow::on_purchaseReport_Button_2_clicked()
{
    QMessageBox::warning(this,"Coming Soon!", "Feature Not Implemented Yet.");
}

void MainWindow::on_pushButton_2_clicked()
{
     QMessageBox::warning(this,"Coming Soon!", "Feature Not Implemented Yet.");
}


void MainWindow::on_purchaseReport_Button_3_clicked()
{
     QMessageBox::warning(this,"Coming Soon!", "Feature Not Implemented Yet.");
}


void MainWindow::on_pushButton_3_clicked()
{
     QMessageBox::warning(this,"Coming Soon!", "Feature Not Implemented Yet.");
}



void MainWindow::on_purchaseReport_Button_4_clicked()
{
     QMessageBox::warning(this,"Coming Soon!", "Feature Not Implemented Yet.");
}



void MainWindow::on_pushButton_4_clicked()
{
     QMessageBox::warning(this,"Coming Soon!", "Feature Not Implemented Yet.");
}
