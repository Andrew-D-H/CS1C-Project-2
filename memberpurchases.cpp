/*! file: memberPurchases.h
 * ====================================================
 * disc:
 *      Allows the user to view all of a member's
 *  purchases.
 */

#include "memberpurchases.h"
#include "ui_memberpurchases.h"

memberPurchases::memberPurchases(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::memberPurchases)
{
    ui->setupUi(this);
    ui->lineEdit->setReadOnly(true);
    ui->lineEdit_search->setPlaceholderText("Enter a member id or name");


    db.openDatabase();

    QSqlQuery qry;
    QString cmdIdFromMembers = "SELECT id FROM members;";

    QVector <QString> memIds;

    //! vector fill with ids of members.
    qry.exec(cmdIdFromMembers);
    while(qry.next())
    {
        memIds.push_back(qry.value(0).toString());
    }

    //! sort them then add to a combo box.
    std::sort(memIds.begin(),memIds.end());
    for(int i = 0; i < memIds.size(); i++)
    {
        ui->comboBox->insertItem(i, memIds[i]);
        qDebug() << memIds[i] << i;
    }

    ids = memIds;

}

memberPurchases::~memberPurchases()
{
    db.closeDatabase();
    delete ui;
}


void memberPurchases::on_pushButton_clicked()
{
    ui->listWidget->clear();
    ui->lineEdit->clear();

    double grandTotal = 0;

    QSqlQuery qry;

    QString comboChoice = (ui->comboBox->currentText());

    comboChoice.prepend("id");

    //! queries sql for a user's purchases
    QString cmdGetPurchases = "SELECT itemDisc, quantityPurchased, "
                               "datePurchased, priceOfPurchase FROM " + comboChoice + ";";

    qry.exec(cmdGetPurchases);
    int quantity = -7;
    while(qry.next())
    {
        QString itemName = qry.value(0).toString();
        quantity = qry.value(1).toInt();
        QString date = qry.value(2).toString();
        double price = qry.value(3).toDouble();

        QString listString = itemName + ", Quant: " + QString::number(quantity) + ", $" + QString::number(price * 1.0725,'f',2) + ", DOP:" +date;
        //! displays these purchases in a list.
        ui->listWidget->addItem(listString);
    }

    if (quantity == -7){
        QMessageBox::information(this, "No Purchases.", "This person never bought anything.");
    }

    //! Sums up the queried tables and returns a grand total.
    for(int i = 0; i < ids.size(); i++){
        QString cmdSumEverythingQry = "SELECT quantityPurchased * priceOfPurchase AS moneySpent FROM id" + ids[i] +"; ";

        qry.exec(cmdSumEverythingQry);
        qDebug() << cmdSumEverythingQry;
        while(qry.next())
        {
            grandTotal += qry.value(0).toDouble();

        }

    }

    grandTotal *= 1.0725;

    ui->lineEdit->setText("$" + QString::number(grandTotal,'f',2));

    qDebug() << grandTotal;
}


void memberPurchases::on_pushButton_2_clicked()
{
    ui->listWidget->clear();
    ui->label_shopperName->clear();
    QSqlQuery qry;

    double totalWhatever = 0;

    QString searchEntry = ui->lineEdit_search->text();
    QString foundMember = searchEntry;
    QString fName ="";
    QString lName ="";

    //! Run from front to back until you hit a space, dump result in fName.
    for (int i=0; i<foundMember.length(); ++i){
        if (foundMember[i] == ' ')
            break;
        fName += foundMember[i];
    }

    //! We do things as follows so as to account for people entering middle names.
    int i = foundMember.length()-1;

    //! Run from back to front until you hit a space.
    for (i=foundMember.length()-1; (i>=0) && (foundMember[i]!=' '); --i);

    //! Now run from there until the end, put the result in lName.
    for (++i; i < foundMember.length(); ++i)
        lName += foundMember[i];

    if(lName == fName)
    {
        lName = "";
    }

    // searches the tables for members with names like the entery in the lineEdit.
    QString cmdFindMember = "SELECT * FROM members WHERE id = '" + searchEntry +
                            "' OR fName LIKE '"+ fName +"%' AND lName LIKE '" + lName + "%' ORDER BY id;";

    qDebug() << cmdFindMember;
    qry.exec(cmdFindMember);

    while(qry.next())
    {
        foundMember = qry.value(0).toString();
        fName = qry.value(1).toString();
        lName = qry.value(2).toString();
    }

    qDebug() << foundMember;

    QString cmdGetIndividualReprt = "SELECT itemDisc, quantityPurchased * priceOfPurchase AS moneySpent, "
    "quantityPurchased, priceOfPurchase FROM id" + foundMember + " ORDER BY itemDisc;";

    qry.exec(cmdGetIndividualReprt);

    qDebug() << cmdGetIndividualReprt;

    double totalRevenue = 0;

    //! Returns a shoppers total, their name, and their id.
    while(qry.next())
    {
        QString ItemName = qry.value(0).toString();
        int quantity = qry.value(2).toInt();
        double price = qry.value(3).toDouble();
        totalRevenue = qry.value(1).toDouble();

        totalWhatever += totalRevenue;
         ui->listWidget->addItem(QString("%1").arg(ItemName,-28,QChar(' ')) + " \tQuantity: " + QString::number(quantity) + " \tPrice: " +
                                 QString::number(price) + " \t Total Purchases: $" + QString::number(totalRevenue * 1.0775,'f',2));
         ui->label_shopperName->setText(fName + " " + lName + ", id = " + foundMember);
    }

    ui->lineEdit->setText("$" + QString::number(totalWhatever * 1.0775,'f',2));


}
