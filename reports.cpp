#include "reports.h"
#include "ui_reports.h"

Reports::Reports(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reports)
{
    ui->setupUi(this);
    //! prepping date line edit for proper data.
    ui->lineEdit_date->setPlaceholderText("YYYY-MM-DD");
    ui->lineEdit_date->setMaxLength(10);
    //! populating membership combobox.
    ui->comboBox_membership->addItem("All");
    ui->comboBox_membership->addItem("Regular");
    ui->comboBox_membership->addItem("Executive");
    //making total rev line edit non-editable.
    ui->lineEdit_totalRev->setReadOnly(true);

    db.openDatabase();
}

Reports::~Reports()
{
    db.closeDatabase();
    delete ui;
}

void Reports::on_pushButton_clicked()
{
    //clearing the list/table incase there was a previous execution.
    ui->listWidget->clear();
    ui->tableView->clearSpans();
    ui->label_execMember->clear();
    ui->label_regMember->clear();

    QSqlQuery query;
    QString dateStringKey;
    bool keyFound = false;

   //! Grab user entered date and comboBox selection.
    QString date = ui->lineEdit_date->text();
    int memberChoice = ui->comboBox_membership->currentIndex();
    date.remove('-');

    query.exec("SHOW TABLES");

    // If the user date matches with a table name then save it.
    // otherwise inform the user.
    while(query.next())
    {
        QString tableName = query.value(0).toString();
        tableName.remove('d');
        if(tableName == date)
        {
            dateStringKey = date;
            keyFound = true;
        }

    }

    if(keyFound == false)
    {
        QMessageBox::information(this, "Cound not find Date.",
                                 "<b>Cannot find entered date.</b>\nThe date you entered might not "
                                 "be in the database yet. Make sure input is in the form YYYY-MM-DD.");
        return;
    }

    //dateStringKey.insert(4,"-");
    //dateStringKey.insert(7,"-");
    dateStringKey.prepend('d');

    switch(memberChoice)
    {
        case 0:
            displayBothRoles(dateStringKey);
            break;
        case 1:
            displayRegular(dateStringKey);
            break;
        case 2:
            displayExecutive(dateStringKey);
            break;
    }

}

//! Sets the tableViews to display all items, and customers
//! that shopped that day.
void Reports::displayBothRoles(QString tableName)
{
    this->itemModel = new QSqlQueryModel();
    itemModel->setQuery("SELECT itemDisc, quantity FROM " + tableName + ";");

    ui->tableView->setModel(itemModel);

    QSqlQuery query;
    QSqlQuery comparisonQuery;
    QVector <int> idVec(db.numOfMembers());


    //create a vector of id's from the user selected date.
    query.exec("SELECT id FROM " + tableName + ";");

    while(query.next())
    {
        int reportId = query.value(0).toInt();
        idVec.push_back(reportId);
    }
    //remove any unique dates to improve search time later.
    std::sort(idVec.begin(),idVec.end());
    idVec.erase(std::unique(idVec.begin(), idVec.end()), idVec.end());

    // compare items in the id vector against member ids.
    // corrisponding names are added to the list widget.
    query.exec("SELECT id,fName,lName FROM members;");
    while(query.next())
    {
        QString firstName;
        QString LastName;

        int memberId = query.value(0).toInt();

        for(int i = 0; i < idVec.length(); i++)
        {
            if (memberId == idVec[i])
            {
                firstName = query.value(1).toString();
                LastName = query.value(2).toString();
                //add to the list widget
                ui->listWidget->addItem(firstName + ", " + LastName);
            }
        }
    } // end query.exec()

    updateRevenueTotal("SELECT price, quantity FROM " + tableName + ";", idVec);
}

void Reports::displayRegular(QString tableName)
{
    QSqlQuery query;
    QVector <int> idVec(db.numOfMembers());
    QVector <int> justRegularIds(db.numOfMembers());


    //create a vector of id's from the user selected date.
    query.exec("SELECT id FROM " + tableName + ";");

    while(query.next())
    {
        int reportId = query.value(0).toInt();
        idVec.push_back(reportId);
    }
    //remove any unique dates to improve search time later.
    std::sort(idVec.begin(),idVec.end());
    idVec.erase(std::unique(idVec.begin(), idVec.end()), idVec.end());

    // compare items in the id vector against  REGULAR member ids.
    // corrisponding names are added to the list widget.
    query.exec("SELECT id,fName,lName FROM members WHERE type = 0;");
    while(query.next())
    {
        QString firstName;
        QString LastName;

        int memberId = query.value(0).toInt();

        for(int i = 0; i < idVec.length(); i++)
        {
            if (memberId == idVec[i])
            {
                firstName = query.value(1).toString();
                LastName = query.value(2).toString();
                //add to the list widget
                ui->listWidget->addItem(firstName + ", " + LastName);
                justRegularIds.push_back(query.value(0).toInt()); //populating regular members id.
            }
        }
    } // end query.exec()

    // A really REALLY dumb script to auto generate queries.
    // Im 100% sure there is a better way of doing this.
    this->itemModel = new QSqlQueryModel();
    QString ghettoQuery = "SELECT itemDisc, quantity FROM " + tableName + " WHERE id = ";
    QString ghettoPriceQuery = "SELECT price, quantity FROM " + tableName + " WHERE id = ";
    for(int i = 0; i < justRegularIds.length(); i++)
    {
        if (i == (justRegularIds.length() - 1))
        {
            ghettoQuery.append(QString::number(justRegularIds[i]) + ";");
            ghettoPriceQuery.append(QString::number(justRegularIds[i]) + ";");
        }
        else
        {
            ghettoQuery.append(QString::number(justRegularIds[i]) + " OR id = ");
            ghettoPriceQuery.append(QString::number(justRegularIds[i]) + " OR id = ");
        }
    }

    //display the items in table view.
    itemModel->setQuery(ghettoQuery);
    ui->tableView->setModel(itemModel);

    updateRevenueTotal(ghettoPriceQuery, justRegularIds);

}

void Reports::displayExecutive(QString tableName)
{
    QSqlQuery query;
    QVector <int> idVec(db.numOfMembers());
    QVector <int> justExecIds(db.numOfMembers());


    //create a vector of id's from the user selected date.
    query.exec("SELECT id FROM " + tableName + ";");

    while(query.next())
    {
        int reportId = query.value(0).toInt();
        idVec.push_back(reportId);
    }

    //remove any unique dates to improve search time later.
    std::sort(idVec.begin(),idVec.end());
    idVec.erase(std::unique(idVec.begin(), idVec.end()), idVec.end());

    // compare items in the id vector against  EXECUTIVE member ids.
    // corrisponding names are added to the list widget.
    query.exec("SELECT id,fName,lName FROM members WHERE type = 1;");
    while(query.next())
    {
        QString firstName;
        QString LastName;

        int memberId = query.value(0).toInt();

        for(int i = 0; i < idVec.length(); i++)
        {
            if (memberId == idVec[i])
            {
                firstName = query.value(1).toString();
                LastName = query.value(2).toString();
                //add to the list widget
                ui->listWidget->addItem(firstName + ", " + LastName);
                justExecIds.push_back(query.value(0).toInt()); //populating executive members id.
            }
        }
    } // end query.exec()

    // A really REALLY dumb script to auto generate queries.
    // Im 100% sure there is a better way of doing this.
    this->itemModel = new QSqlQueryModel();
    QString ghettoQuery = "SELECT itemDisc, quantity FROM " + tableName + " WHERE id = ";
    QString ghettoPriceQuery = "SELECT price, quantity FROM " + tableName + " WHERE id = ";
    for(int i = 0; i < justExecIds.length(); i++)
    {
        if (i == (justExecIds.length() - 1))
        {
            ghettoQuery.append(QString::number(justExecIds[i]) + ";");
            ghettoPriceQuery.append(QString::number(justExecIds[i]) + ";");
        }
        else
        {
            ghettoQuery.append(QString::number(justExecIds[i]) + " OR id = ");
            ghettoPriceQuery.append(QString::number(justExecIds[i]) + " OR id = ");
        }
    }

    //display the items in table view.
    itemModel->setQuery(ghettoQuery);
    ui->tableView->setModel(itemModel);

    updateRevenueTotal(ghettoPriceQuery, justExecIds);
}

//! Function that reads in a vector of MemberIds and updates the
//! member counts of each field accordingly.
void Reports::updateMemberCounts(QVector<int> idVec)
{
    int numOfRegs = 0;
    int numOfExecs = 0;
    QSqlQuery query;

    for(int i = 0; i < idVec.length(); i++)
    {
        query.exec("SELECT type FROM members WHERE id = " + QString::number(idVec[i]) + ";");

        while(query.next())
        {
            bool type = query.value(0).toBool();

            if (type)
            {
                numOfExecs++;
            }
            else
            {
                numOfRegs++;
            }
        }
    }
    ui->label_execMember->setText(QString::number(numOfExecs));
    ui->label_regMember->setText(QString::number(numOfRegs));
}

void Reports::updateRevenueTotal(QString qry, QVector<int> idVec)
{
    QSqlQuery query;
    double totalRevenue = 0;
    double tempPrice;
    double tempQuant;

    query.exec(qry);

    while (query.next())
    {
        tempPrice = query.value(0).toDouble();
        tempQuant = query.value(1).toDouble();

        totalRevenue = (tempPrice * tempQuant) + totalRevenue;
    }

    updateMemberCounts(idVec);
    //applying the tax to totalRevenue.
    totalRevenue = 1.0775 * totalRevenue;
    ui->lineEdit_totalRev->setText("$" + QString::number(totalRevenue,'f',2));
}
