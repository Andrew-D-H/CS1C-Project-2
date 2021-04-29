#include "mainwindow.h"
#include <QDebug>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;



    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("Imaginebreaker1");
    db.setDatabaseName("Database");

    if (db.open()){
        qDebug() << "You did it :)";
    }
    else {
         qDebug() << db.lastError().text();
    }

    QSqlQuery query;

    query.exec("SELECT * FROM members;");

    while(query.next()){
        int id = query.value(0).toInt();
        QString name = query.value(1).toString();
        QString major = query.value(2).toString();
        qDebug() << id << name << major;
    }




    w.show();
    return a.exec();
}
