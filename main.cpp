#include "login.h"
#include "database.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //! Everything launches from the base login class.
    QApplication a(argc, argv);
    Login l;
    l.show();
    return a.exec();
}
