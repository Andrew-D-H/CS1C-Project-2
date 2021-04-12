#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_salesReport_button_clicked();

    void on_reviewMember_button_clicked();

    void on_manageInventory_button_clicked();

    void on_memberRebates_button_clicked();

    void on_memberExpiration_button_clicked();

    void on_add_remove_button_clicked();

    void on_managerLogin_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
