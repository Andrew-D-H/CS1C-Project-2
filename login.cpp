#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    isAdmin = false;
    isManager = false;
    loginAttempts = 3;
    ui->setupUi(this);

    //! Setting the background image and resizing.
    setFixedSize(640,360);
    QPixmap background(":/img/resources/Bulk Club Login.png");
    background = background.scaled(this->size());
    QPalette palette;
    palette.setBrush(QPalette::Background,background);
    this->setPalette(palette);
}

Login::~Login()
{
    delete ui;
}

// if someone brings up Yandere dev I swear...
void Login::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_user->text();
    QString password = ui->lineEdit_pass->text();
    QString attempts = QString::number(loginAttempts);

    if(loginAttempts == 0){
        this->close();
    }


    /*!< if login is successful, bring them to the homepage
     *   & give them their credentials. */
    if(username == "admin" && password == "1234")
    {
        qDebug() << "login sucessful.";
        isAdmin = true;
        this->hide();
        MainScreen m(isAdmin,isManager);
        m.setModal(true);
        m.exec();
    }

    else if(username == "manager" && password == "666")
    {
        qDebug() << "login sucessful.";
        isManager = true;
        this->hide();
        MainScreen m(isAdmin,isManager);
        m.setModal(true);
        m.exec();
    }

    else if (loginAttempts > 0){
        QMessageBox::warning(this,"Incorrect Login Credentials.",
        "Please enter a correct username and password.\nAttempts left: " + attempts);
    }

    // decrement attempts.
    loginAttempts--;
}
