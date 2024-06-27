/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTextEdit *textEditpassword;
    QTextEdit *textEditname;
    QLabel *MainWindow_2;
    QTextEdit *textEditemail;
    QLabel *labelemail;
    QLabel *labelname;
    QLabel *labelpassword;
    QPushButton *pushButtonconfirm;
    QWidget *page_3;
    QPushButton *pushButtonrecord;
    QPushButton *pushButtonreports;
    QPushButton *pushButtoncharts;
    QPushButton *pushButtonadd;
    QPushButton *pushButtonme;
    QLabel *labelexpense;
    QLabel *labelincome;
    QLabel *labelbalance;
    QLabel *label_7;
    QLabel *labelexp;
    QLabel *labelinc;
    QTextBrowser *textBrowsermonth;
    QGraphicsView *graphicsViewexpense;
    QGraphicsView *graphicsViewincome;
    QGraphicsView *graphicsViewbalance;
    QGraphicsView *graphicsViewday;
    QGraphicsView *graphicsViewdate;
    QListView *listViewrec;
    QWidget *page_4;
    QPushButton *pushButtonexpenses;
    QPushButton *pushButtonincome;
    QWidget *page_5;
    QLabel *labelnote_2;
    QLabel *labelamount_2;
    QPlainTextEdit *plainTextEditnote_2;
    QPlainTextEdit *plainTextEditamount_2;
    QPushButton *pushButtonok_2;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1920, 1080);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        textEditpassword = new QTextEdit(page);
        textEditpassword->setObjectName("textEditpassword");
        textEditpassword->setGeometry(QRect(250, 210, 181, 31));
        textEditname = new QTextEdit(page);
        textEditname->setObjectName("textEditname");
        textEditname->setGeometry(QRect(250, 110, 181, 31));
        MainWindow_2 = new QLabel(page);
        MainWindow_2->setObjectName("MainWindow_2");
        MainWindow_2->setGeometry(QRect(60, 30, 391, 41));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        MainWindow_2->setFont(font);
        textEditemail = new QTextEdit(page);
        textEditemail->setObjectName("textEditemail");
        textEditemail->setGeometry(QRect(250, 160, 181, 31));
        labelemail = new QLabel(page);
        labelemail->setObjectName("labelemail");
        labelemail->setGeometry(QRect(110, 170, 121, 16));
        QFont font1;
        font1.setPointSize(18);
        labelemail->setFont(font1);
        labelname = new QLabel(page);
        labelname->setObjectName("labelname");
        labelname->setGeometry(QRect(110, 120, 71, 16));
        labelname->setFont(font1);
        labelpassword = new QLabel(page);
        labelpassword->setObjectName("labelpassword");
        labelpassword->setGeometry(QRect(110, 220, 101, 16));
        labelpassword->setFont(font1);
        pushButtonconfirm = new QPushButton(page);
        pushButtonconfirm->setObjectName("pushButtonconfirm");
        pushButtonconfirm->setGeometry(QRect(200, 270, 111, 31));
        QFont font2;
        font2.setPointSize(16);
        pushButtonconfirm->setFont(font2);
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        pushButtonrecord = new QPushButton(page_3);
        pushButtonrecord->setObjectName("pushButtonrecord");
        pushButtonrecord->setGeometry(QRect(20, 280, 71, 31));
        pushButtonrecord->setFont(font2);
        pushButtonreports = new QPushButton(page_3);
        pushButtonreports->setObjectName("pushButtonreports");
        pushButtonreports->setGeometry(QRect(260, 280, 111, 31));
        pushButtonreports->setFont(font2);
        pushButtoncharts = new QPushButton(page_3);
        pushButtoncharts->setObjectName("pushButtoncharts");
        pushButtoncharts->setGeometry(QRect(90, 280, 111, 31));
        pushButtoncharts->setFont(font2);
        pushButtonadd = new QPushButton(page_3);
        pushButtonadd->setObjectName("pushButtonadd");
        pushButtonadd->setGeometry(QRect(200, 280, 61, 31));
        QFont font3;
        font3.setPointSize(22);
        pushButtonadd->setFont(font3);
        pushButtonme = new QPushButton(page_3);
        pushButtonme->setObjectName("pushButtonme");
        pushButtonme->setGeometry(QRect(370, 280, 101, 31));
        pushButtonme->setFont(font2);
        labelexpense = new QLabel(page_3);
        labelexpense->setObjectName("labelexpense");
        labelexpense->setGeometry(QRect(110, 10, 71, 16));
        labelexpense->setFont(font1);
        labelincome = new QLabel(page_3);
        labelincome->setObjectName("labelincome");
        labelincome->setGeometry(QRect(220, 10, 71, 16));
        labelincome->setFont(font1);
        labelbalance = new QLabel(page_3);
        labelbalance->setObjectName("labelbalance");
        labelbalance->setGeometry(QRect(340, 10, 71, 16));
        labelbalance->setFont(font1);
        label_7 = new QLabel(page_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(120, 80, 71, 16));
        label_7->setFont(font1);
        labelexp = new QLabel(page_3);
        labelexp->setObjectName("labelexp");
        labelexp->setGeometry(QRect(210, 80, 101, 16));
        labelexp->setFont(font1);
        labelinc = new QLabel(page_3);
        labelinc->setObjectName("labelinc");
        labelinc->setGeometry(QRect(320, 76, 101, 20));
        labelinc->setFont(font1);
        textBrowsermonth = new QTextBrowser(page_3);
        textBrowsermonth->setObjectName("textBrowsermonth");
        textBrowsermonth->setGeometry(QRect(20, 2, 71, 20));
        graphicsViewexpense = new QGraphicsView(page_3);
        graphicsViewexpense->setObjectName("graphicsViewexpense");
        graphicsViewexpense->setGeometry(QRect(110, 30, 51, 41));
        graphicsViewincome = new QGraphicsView(page_3);
        graphicsViewincome->setObjectName("graphicsViewincome");
        graphicsViewincome->setGeometry(QRect(220, 30, 51, 41));
        graphicsViewbalance = new QGraphicsView(page_3);
        graphicsViewbalance->setObjectName("graphicsViewbalance");
        graphicsViewbalance->setGeometry(QRect(340, 30, 51, 41));
        graphicsViewday = new QGraphicsView(page_3);
        graphicsViewday->setObjectName("graphicsViewday");
        graphicsViewday->setGeometry(QRect(110, 80, 51, 21));
        graphicsViewdate = new QGraphicsView(page_3);
        graphicsViewdate->setObjectName("graphicsViewdate");
        graphicsViewdate->setGeometry(QRect(30, 80, 51, 21));
        listViewrec = new QListView(page_3);
        listViewrec->setObjectName("listViewrec");
        listViewrec->setGeometry(QRect(30, 110, 421, 161));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        pushButtonexpenses = new QPushButton(page_4);
        pushButtonexpenses->setObjectName("pushButtonexpenses");
        pushButtonexpenses->setGeometry(QRect(90, 120, 71, 31));
        pushButtonexpenses->setFont(font2);
        pushButtonincome = new QPushButton(page_4);
        pushButtonincome->setObjectName("pushButtonincome");
        pushButtonincome->setGeometry(QRect(280, 120, 71, 31));
        pushButtonincome->setFont(font2);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        labelnote_2 = new QLabel(page_5);
        labelnote_2->setObjectName("labelnote_2");
        labelnote_2->setGeometry(QRect(90, 80, 101, 20));
        labelnote_2->setFont(font1);
        labelamount_2 = new QLabel(page_5);
        labelamount_2->setObjectName("labelamount_2");
        labelamount_2->setGeometry(QRect(90, 170, 101, 16));
        labelamount_2->setFont(font1);
        plainTextEditnote_2 = new QPlainTextEdit(page_5);
        plainTextEditnote_2->setObjectName("plainTextEditnote_2");
        plainTextEditnote_2->setGeometry(QRect(210, 70, 231, 41));
        plainTextEditamount_2 = new QPlainTextEdit(page_5);
        plainTextEditamount_2->setObjectName("plainTextEditamount_2");
        plainTextEditamount_2->setGeometry(QRect(210, 160, 231, 41));
        pushButtonok_2 = new QPushButton(page_5);
        pushButtonok_2->setObjectName("pushButtonok_2");
        pushButtonok_2->setGeometry(QRect(190, 230, 111, 51));
        pushButtonok_2->setFont(font2);
        stackedWidget->addWidget(page_5);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1920, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textEditpassword->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter your password</p></body></html>", nullptr));
        textEditname->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter your Name</p></body></html>", nullptr));
        MainWindow_2->setText(QCoreApplication::translate("MainWindow", "              Welcome to SET", nullptr));
        textEditemail->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter your email</p></body></html>", nullptr));
        labelemail->setText(QCoreApplication::translate("MainWindow", "Email-address", nullptr));
        labelname->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        labelpassword->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButtonconfirm->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        pushButtonrecord->setText(QCoreApplication::translate("MainWindow", "Records", nullptr));
        pushButtonreports->setText(QCoreApplication::translate("MainWindow", "Reports", nullptr));
        pushButtoncharts->setText(QCoreApplication::translate("MainWindow", "Charts", nullptr));
        pushButtonadd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButtonme->setText(QCoreApplication::translate("MainWindow", "Me", nullptr));
        labelexpense->setText(QCoreApplication::translate("MainWindow", "Expense", nullptr));
        labelincome->setText(QCoreApplication::translate("MainWindow", "Income", nullptr));
        labelbalance->setText(QCoreApplication::translate("MainWindow", "Balance", nullptr));
        label_7->setText(QString());
        labelexp->setText(QCoreApplication::translate("MainWindow", "expense: ", nullptr));
        labelinc->setText(QCoreApplication::translate("MainWindow", "income:", nullptr));
        textBrowsermonth->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Jan</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Feb</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Mar</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Apr</"
                        "p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">May</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Jun</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Jul</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Aug</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Sep</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Oct</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Nov</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-b"
                        "lock-indent:0; text-indent:0px;\">Dec</p></body></html>", nullptr));
        pushButtonexpenses->setText(QCoreApplication::translate("MainWindow", "Expenses", nullptr));
        pushButtonincome->setText(QCoreApplication::translate("MainWindow", "Income", nullptr));
        labelnote_2->setText(QCoreApplication::translate("MainWindow", "Note:", nullptr));
        labelamount_2->setText(QCoreApplication::translate("MainWindow", "Amount:", nullptr));
        plainTextEditnote_2->setPlainText(QCoreApplication::translate("MainWindow", "Enter a note........", nullptr));
        plainTextEditamount_2->setPlainText(QCoreApplication::translate("MainWindow", "Enter amount........", nullptr));
        pushButtonok_2->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
