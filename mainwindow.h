#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QLabel>
#include<QtSql/QSqlDatabase>
#include <QMessageBox>

QT_BEGIN_NAMESPACE

namespace Ui {
class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:

    void on_pushButtonlogin_clicked();

    void on_pushButtonCreateAccount_clicked();

    void on_pushButtonconfirm_clicked();

    void on_pushButtonback_e_clicked();

    void on_pushButtonConfirmExpense_clicked();

    void on_pushButtonadd_clicked();

    void on_pushButtonAddIncome_clicked();

    void on_pushButtonAddExpense_clicked();

    void on_pushButtoncancel_clicked();

    void on_pushButtongback_in_clicked();

    void on_pushButtonConfirmIncome_clicked();

    void on_pushButtonsignup_clicked();

    
    //void on_pushButtonAddExpense_clicked();
    //
    //

    void on_nickname_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    void initializeDatabase();
    QLabel *dateLabel;
    QLabel *monthYearLabel;
    void addTransaction(double amount,const QString& category, const QString& description);
    void viewTransactions();
    void createUser(const QString &firstName, const QString &middleName, const QString &lastName, const QString &username, const QString &mobileNumber, const QString &password,  const QString &answer1, const QString &answer2, const QString &answer3);
};
#endif // MAINWINDOW_H
