//! Main.cpp
/*!
Programmer: Eric Jeffcoat

Main contains The connection to the database, and a login to
gain access to the event loop.
*/

#include "mainscreen.h"
#include "ui_mainscreen.h"

MainScreen::MainScreen(bool isAdminFlag, bool isManagerFlag, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainScreen)
{
    ui->setupUi(this);

    QPixmap logo(":/img/resources/Bulk Club Logo.png");
    ui->Logo->setPixmap(logo.scaled(877,152,Qt::KeepAspectRatio));
    isAdmin = isAdminFlag;
    isManager = isManagerFlag;

    if (isManager == true)
    {
        qDebug() << "Manager recognized.";
    }

    if (isAdmin == true)
    {
        qDebug() << "Admin recognized.";
    }



}

MainScreen::~MainScreen()
{

    delete ui;
}



void MainScreen::on_pushButton_reports_clicked()
{
    Reports r;
    r.setModal(true);
    r.exec();
}

void MainScreen::on_pushButton_expirations_clicked()
{
    Expirations e;
    e.setModal(true);
    e.exec();
}
