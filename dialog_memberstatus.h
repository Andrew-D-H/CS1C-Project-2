#ifndef DIALOG_MEMBERSTATUS_H
#define DIALOG_MEMBERSTATUS_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QStandardItemModel>
#include <QMessageBox>

namespace Ui {
class Dialog_MemberStatus;
}

class Dialog_MemberStatus : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_MemberStatus(QWidget *parent = nullptr);
    ~Dialog_MemberStatus();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog_MemberStatus *ui;
};

#endif // DIALOG_MEMBERSTATUS_H
