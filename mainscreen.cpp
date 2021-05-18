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

    QMovie *movie = new QMovie("C:\\Users\\ericj\\Documents\\BulkClub_GME_v2_0_2\\resources\\Best_Team_Ever.gif");
//    QLabel *processLabel = new QLabel(this);
    ui->label_2->setMovie(movie);
    movie->start();

    QPixmap tDavis("C:\\Users\\ericj\\Documents\\BulkClub_GME_v2_0_2\\resources\\Best_Team_Ever.gif");
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

void MainScreen::on_pushButton_3_clicked()
{
    memberPurchases m;
    m.setModal(true);
    m.exec();
}

void MainScreen::on_pushButton_2_clicked()
{
    if(!isAdmin)
    {
        QMessageBox::warning(this, "Invalid Credentials.", "Only Administrators can view the members rebate information.");
    }
    else
    {
        Rebates r;
        r.setModal(true);
        r.exec();
    }
}

void MainScreen::on_pushButton_6_clicked()
{
    if(!isAdmin)
    {
        QMessageBox::warning(this, "Invalid Credentials.", "Only Administrators can add or delete members.");
    }
    else
    {
        AddnDelete a;
        a.setModal(true);
        a.exec();
    }

}

void MainScreen::on_pushButton_5_clicked()
{
    Inventory i;
    i.setModal(true);
    i.exec();
}

void MainScreen::on_pushButton_clicked()
{
    createPurchase p;
    p.setModal(true);
    p.exec();
}

void MainScreen::on_pushButton_4_clicked()
{
    if(!isAdmin)
    {
        QMessageBox::warning(this, "Invalid Credentials.", "Only Administrators can add or delete items from the inventory.");
    }
    else
    {
        updateInventory uI;
        uI.setModal(true);
        uI.exec();
    }

}
