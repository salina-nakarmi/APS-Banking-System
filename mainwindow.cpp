#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<vector>
#include<string>
#include<QString>
#include<fstream>
#include <QDebug>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString strTime = "2024/07/03 21:05:56";
    qDebug() << "Time 1: " << strTime;

    QString format = "yyyy/MM/dd HH:mm:ss";
    QDateTime time = QDateTime::fromString(strTime, format);
    qDebug() << "Time 2: " << time;

    time.setTimeSpec(Qt::LocalTime);
    QDateTime utc = time.toUTC();
    qDebug() << "Time 3: " << utc;

    time.setTimeSpec(Qt::UTC);
    QDateTime local = time.toLocalTime();
    qDebug() << "Time 4: " << local;

    QString strLocal = local.toString(format);
    qDebug() << "Time 5: " << strLocal;

    // time offset: 1 hr 20 min 15 sec
    time = time.addSecs(1 * 60 * 60 + 20 * 60 + 15);
    QDateTime offsetTime = time.toLocalTime();
    qDebug() << "Time 6: " << offsetTime.toString();
}

struct accountInfo{
    QString username;
    QString password;
};

MainWindow::~MainWindow()
{
    delete ui;
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

void MainWindow:: on_pushButtonok_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
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




