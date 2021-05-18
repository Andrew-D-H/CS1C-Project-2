/*! file: Database.cpp
 * ====================================================
 * disc:
 *      Just a simple class that holds the dataBase
 * information.
 *
 */

#include "database.h"

Database::Database()
{
    //!connecting to the database:
    db = QSqlDatabase::addDatabase("QODBC3"); /*!< database connnected to MySql Server. */
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("1234");
    db.setDatabaseName("Database");
}

Database::~Database()
{

}
//! Opens the database for use.
void Database::openDatabase()
{
    db.open();
}
//! Closes the database.
void Database::closeDatabase()
{
    db.close();
}

//!returns number of tables in the database
int Database::tableCount()
{
    QSqlQuery query;
    int tableCount = 0;

    query.exec("SHOW TABLES");

    while(query.next())
    {
        tableCount++;
    }

    return tableCount;
}

int Database::numOfMembers()
{
    QSqlQuery query;
    int memberCount = 0;

    query.exec("SELEC * FROM members");

    while(query.next())
    {
        memberCount++;
    }

    return memberCount;
}
