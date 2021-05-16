#include "mainwindow.h"
#include <QDebug>
#include <QFile>
#include <QApplication>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    // When you run this, it will populate sql tables with data read in from
    // project test files. It can also create the tables too if you want.

    // before runnning, change the day number in the file name, the dayNo,
    // lcv, and createNewTable (if you have not created the sql table yet).

    QString tableName = "d20210401"; //name your tables like this d20210401
                                     //format for table name: dYYYYMMDD NO SPACES!
                                     // eg. table d20210901 == September 1st 2021.

    bool createNewTable = true;     // set to true if you want the script to create a table
                                     // before tranferring purchases.

    int lcv = 11;   // this controls how many purchases from a file will be read.
                    // Count the number of purchases in a file a and change accordingly.

    // make sure this is reading from a dayNo Text file
    QFile inFile("C:\\Users\\ericj\\Downloads\\CS1C 2021\\Group Project 2\\rules&specs\\day6.txt");

    if(!inFile.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        qDebug() << "File failed to open.";
    }


    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC3");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("1234");
    db.setDatabaseName("Database");

    if (db.open()){
        qDebug() << "You did it :)";
    }
    else {
         qDebug() << db.lastError().text();
    }

    QString someDate;
    int someID;
    QString someIDString;
    QString someName;
    double somePrice;
    QString somePriceString;
    int someQuant;
    QString someQuantString;
    QString FileNameDayNoString;

    QString year;
    QString month;
    QString day;

    QString formattedDate;
    QString formattedQuery;

    QTextStream in(&inFile);

    QSqlQuery query;

    if (createNewTable == true)
    {
       QString createString = " CREATE TABLE " + tableName
       + "( DOP DATE, id INT, itemDisc VARCHAR(50), price DECIMAL(4,2),quantity INT); ";
        qDebug() << "This is the created table: " <<createString;
       //query.exec(createString);
    }


   for (int i = 0; i < lcv; i++)
    {
        someDate = in.readLine();
        in >> someID;
        in.skipWhiteSpace();
        someName = in.readLine();
        in >> somePrice;
        in >> someQuant;
        in.skipWhiteSpace();

        //change numbers to Strings
        someIDString = QString::number(someID);
        somePriceString = QString::number(somePrice);
        someQuantString = QString::number(someQuant);
        FileNameDayNoString = tableName;


        //these change the date's format to ANSI: YYYY-MM-DD
        month = someDate.at(0);
        month.prepend("0");
        day = someDate.mid(2,1);
        day.prepend("0");
        year = someDate.right(4);
        formattedDate = ("'" + year + "-" + month + "-" + day + "'");

        formattedQuery = ("INSERT INTO " + FileNameDayNoString +
                          " VALUES(" + formattedDate + "," + someIDString + "," +
                                       "'" + someName + "'," + somePriceString + ","
                                     + someQuantString + ");");


        qDebug() << "This is the formatted query for this object:";
        qDebug() << formattedQuery;

        qDebug() << someDate;
        qDebug() << someID;
        qDebug() << someName;
        qDebug() << somePrice;
        qDebug() << someQuant;
        //query.exec(formattedQuery);
    }

    inFile.close();

    db.close();

    //w.show();
    return 0;
}
