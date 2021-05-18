/*! file: Database.h
 * ====================================================
 * disc:
 *      This database object allows us to use the
 * database anywhere else in the program just by
 * accessing it's functions.
 */
#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>
#include <QSqlDatabase>
#include <QVector>

class Database
{
public:
    Database();
    ~Database();
    void openDatabase();
    void closeDatabase();
    int tableCount();
    int numOfMembers();

private:
    QSqlDatabase db;

};

#endif // DATABASE_H
