#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<vector>
#include<string>
#include<QString>
#include<fstream>
#include<QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QDate>
#include<QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

     // Initialize the database
    initializeDatabase();
    // Assuming ui->stackedWidget is your QStackedWidget
    ui->stackedWidget->setCurrentIndex(0); // Set to the first page by default

    // Make sure the stacked widget fits the window
    setCentralWidget(ui->stackedWidget);
     
    // Get the current date
    QDate currentDate = QDate::currentDate();

     //Date setup
    // Set the date in the desired format
    ui->dateLabel->setText(currentDate.toString("yyyy/MM/dd"));

    //month setup
    ui->monthLabel->setText(currentDate.toString("MMM"));
    //year setup
    ui->yearLabel->setText(currentDate.toString("yyyy"));
    
    //----------------------------------------------------------------------------


// Connect signals to slots
    connect(ui->pushButtonlogin, &QPushButton::clicked, this, &MainWindow::on_pushButtonlogin_clicked);
    /*connect(ui->addTransactionButton, &QPushButton::clicked, this, &MainWindow::on_addTransactionButton_clicked);
    connect(ui->viewTransactionsButton, &QPushButton::clicked, this, &MainWindow::on_viewTransactionsButton_clicked);*/
  
}

//just created struct not in use right now
struct accountInfo{
    QString username;
    QString password;
};



MainWindow::~MainWindow()
{
    delete ui;
    db.close();
}

void MainWindow::initializeDatabase()
{
    // Set up the database connection
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:\\Users\\Lenovo\\OneDrive\\Desktop\\SET\\database\\users.db");

    // Open the database
    if (!db.open()) {
        qDebug() << "Database connection failed!";
    } else {
        qDebug() << "Database connected successfully!";
    }
}


//navigation
void MainWindow::on_pushButtonlogin_clicked()
{
   ui->stackedWidget->setCurrentIndex(3);
    QString userName = ui->lineEditusername->text();
    QString userPassword = ui->lineEditpassword->text();

    if (db.isOpen()) {
        QSqlQuery query;
        query.prepare("INSERT INTO users (name, password) VALUES (:name, :password)");
        query.bindValue(":name", userName);
        query.bindValue(":password", userPassword);

        if (!query.exec()) {
            QMessageBox::critical(this, "Error", "Failed to add user: " + query.lastError().text());
        } else {
            QMessageBox::information(this, "Success", "User added successfully");
        }
    } else {
        QMessageBox::critical(this, "Error", "Database connection failed!");
    }

}

void MainWindow::on_pushButtoncreate_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButtonsignup_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButtonconfirm_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButtonback_e_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButtonConfirmExpense_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButtonadd_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButtonAddExpense_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButtonAddIncome_clicked()
{
     ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pushButtoncancel_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButtongback_in_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButtonConfirmIncome_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}
// Function to add a transaction
/*void MainWindow::addTransaction(const QString& date, double amount, const QString& category, const QString& description) {
    QSqlQuery query;
    query.prepare("INSERT INTO transactions (date, amount, category, description) VALUES (:date, :amount, :category, :description)");
    query.bindValue(":date", date);
    query.bindValue(":amount", amount);
    query.bindValue(":category", category);
    query.bindValue(":description", description);

    if (!query.exec()) {
        qDebug() << "Error adding transaction:" << query.lastError();
    } else {
        qDebug() << "Transaction added successfully.";
    }
}*/
//---------------------------------------------------------------
// Slot to handle adding a transaction
/*void MainWindow::on_addTransactionButton_clicked() {
    QString date = ui->dateEdit->text();
    double amount = ui->amountEdit->text().toDouble();
    QString category = ui->categoryEdit->text();
    QString description = ui->descriptionEdit->text();

    addTransaction(date, amount, category, description);
}

// Function to view transactions
void MainWindow::viewTransactions() {
    QSqlQuery query("SELECT date, amount, category, description FROM transactions");
    while (query.next()) {
        QString date = query.value(0).toString();
        double amount = query.value(1).toDouble();
        QString category = query.value(2).toString();
        QString description = query.value(3).toString();

        // Display these values in your UI
        // For example, you can add these to a table or a list widget
    }
}

// Slot to handle viewing transactions
void MainWindow::on_viewTransactionsButton_clicked() {
    viewTransactions();
}*/



