#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QDesktopWidget>
#include <QMessageBox>
#include <QDebug>
#include "mainscreen.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::Login *ui;
    bool isAdmin;
    bool isManager;
    int loginAttempts;
};
#endif // LOGIN_H
