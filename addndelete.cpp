/*! file: AddnDelete.cpp
 * ====================================================
 * disc:
 *      This segment is responcable for the addition
 * and subtraction of memebers from the the sql database.
 */
#include "addndelete.h"
#include "ui_addndelete.h"

AddnDelete::AddnDelete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddnDelete)
{
    //! Setting up the gui enviroment.
    ui->setupUi(this);
    ui->lineEdit_Date->setPlaceholderText("YYYY-MM-DD");
    ui->lineEdit_Date->setMaxLength(10);
    ui->lineEdit_memberId->setPlaceholderText("#00000");
    ui->lineEdit_memberId->setMaxLength(5);
    ui->lineEdit_fName->setPlaceholderText("John");
    ui->lineEdit_fName->setMaxLength(50);
    ui->lineEdit_lName->setPlaceholderText("Doe");
    ui->lineEdit_lName->setMaxLength(50);
    db.openDatabase();

}

AddnDelete::~AddnDelete()
{
    db.closeDatabase();
    delete ui;
}

//! When the generate button is clicked, it checks the database to
//! see if the id generated was is the same as anyone else in the
//! list, if not a new person is inserted based into the database.
void AddnDelete::on_pushButton_clicked()
{
    QSqlQuery qry;
    int memberId = (ui->lineEdit_memberId->text()).toInt();
    QString datefromLEdit = ui->lineEdit_Date->text();
    QString lName = ui->lineEdit_lName->text();
    QString fName = ui->lineEdit_fName->text();
    bool isExec = ui->checkBox->isChecked();

     QVector <int> idVec(15);
     qry.exec("SELECT id FROM members");

     while (qry.next())
     {
         idVec.push_back(qry.value(0).toInt());
     }

     for(int i = 0; i < idVec.size(); i++)
     {
         if(idVec[i] == memberId)
         {
             QMessageBox::warning(this,"ID Already In Use.", "This ID belongs to another member.\n "
                                       "Please choose a different 5-digit ID.");
             return;
         }
     }


    datefromLEdit.remove('/');

    //make sure that id is 5 chars long

    QString cmdAddtoDatabase = "INSERT INTO members VALUE (" + QString::number(memberId) + ",'" +
                                fName + "','" + lName + "'," + QString::number(isExec) + ",'" + datefromLEdit +
                                "'," + "0" + ","+ "0" + ");";
    qDebug() << cmdAddtoDatabase;
    qry.exec(cmdAddtoDatabase);

    QString cmdAddItemTableToDataBase = ("CREATE TABLE id" + QString::number(memberId) + " (inventoryId INT, itemDisc VARCHAR(50), "
                                         "quantityPurchased INT, datePurchased DATE, priceOfPurchase DECIMAL(5,2));");
    qry.exec(cmdAddItemTableToDataBase);

    qDebug() << cmdAddItemTableToDataBase;

    ids = idVec;

}

//! This function clears all the text fields.
void AddnDelete::on_pushButton_2_clicked()
{
    ui->lineEdit_Date->clear();
    ui->lineEdit_fName->clear();
    ui->lineEdit_lName->clear();
    ui->lineEdit_memberId->clear();
    ui->checkBox->setCheckState(Qt::CheckState(false));
}

//! This function deletes a member given their first and
//! last name or id.
void AddnDelete::on_pushButton_3_clicked()
{
    QSqlQuery qry;

    int memberId = (ui->lineEdit_memberId->text()).toInt();
    QString datefromLEdit = ui->lineEdit_Date->text();
    QString lName = ui->lineEdit_lName->text();
    QString fName = ui->lineEdit_fName->text();
   // bool isExec = ui->checkBox->isChecked();
    int idBeingDeleted = memberId;

    qry.exec("SELECT * FROM members WHERE id = " + QString::number(idBeingDeleted) + ";");

    QString fNameFound;
    QString lNameFound;

    while(qry.next())
    {
        fNameFound = qry.value(1).toString();
        lNameFound = qry.value(2).toString();
    }

    QMessageBox::StandardButton reply = QMessageBox::question(this,"Delete a Member",
                                "Are you sure you would like to delete this member?\n"
                                "Name: " + fNameFound + " " + lNameFound + " ID: " +
                                QString::number(idBeingDeleted),QMessageBox::Yes | QMessageBox::No);

    if(reply == QMessageBox::No)
    {
        return;
    }

    QString cmdDeleteMember = "DELETE FROM members WHERE id = " + QString::number(idBeingDeleted) + ";";
    qry.exec(cmdDeleteMember);
    qDebug() << cmdDeleteMember;

    QMessageBox::information(this, "Member Deleted.", "The member with ID: " + QString::number(idBeingDeleted)
                             + " was successfully deleted.");
}
