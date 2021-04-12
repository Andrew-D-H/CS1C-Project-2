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


void MainWindow::on_salesReport_button_clicked()
{
    QMessageBox::about(this,"Sales Report button","Feature Coming Soon.");
}

void MainWindow::on_reviewMember_button_clicked()
{
    QMessageBox::about(this,"Review Member button","Feature Coming Soon.");
}

void MainWindow::on_manageInventory_button_clicked()
{
    QMessageBox::about(this,"Manage Inventory","Feature Coming Soon.");
}

void MainWindow::on_memberRebates_button_clicked()
{
    QMessageBox::about(this,"Member Rebates","Feature Coming Soon.");
}

void MainWindow::on_memberExpiration_button_clicked()
{
    QMessageBox::about(this,"Member Expirations","Feature Coming Soon.");
}

void MainWindow::on_add_remove_button_clicked()
{
    QMessageBox::question(this,"Add/Remove a Member","Would you like to add a member, or remove a member?");
}

void MainWindow::on_managerLogin_clicked()
{
    QMessageBox::about(this,"Login","Feature Coming Soon.");
}
