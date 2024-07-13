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

void MainWindow::on_pushButtonok_e_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButtonadd_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButtonadde_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButtonaddi_clicked()
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


void MainWindow::on_pushButtonok_in_clicked()
{
  ui->stackedWidget->setCurrentIndex(3);
}




