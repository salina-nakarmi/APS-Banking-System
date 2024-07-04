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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QFrame *frame;
    QFrame *innerFrame_0;
    QLabel *label;
    QLineEdit *lineEditusername;
    QLabel *labelpassword;
    QLineEdit *lineEdit_2;
    QPushButton *pushButtonlogin;
    QLabel *label_15;
    QLabel *label_14;
    QPushButton *pushButton_2;
    QFrame *outerFrame0;
    QWidget *page_3;
    QFrame *outerFrame_1;
    QFrame *innerFrame_1;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_8;
    QPushButton *pushButtoncreate;
    QWidget *page_4;
    QFrame *innerFrame_3;
    QFrame *outerFrame_3;
    QLabel *labelsecuityqn;
    QLabel *labelbirthPlace;
    QLabel *labelfavFood;
    QLabel *labelfavMovie;
    QPushButton *pushButtonconfirm;
    QLineEdit *lineEditbirthplace;
    QLineEdit *lineEditfavFood;
    QLineEdit *lineEditfavMovie;
    QWidget *page_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1920, 1080);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName("formLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName("page");
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName("gridLayout");
        frame = new QFrame(page);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        innerFrame_0 = new QFrame(frame);
        innerFrame_0->setObjectName("innerFrame_0");
        innerFrame_0->setGeometry(QRect(210, 50, 331, 391));
        innerFrame_0->setStyleSheet(QString::fromUtf8("background-image:url(:/background/outerFrame.png);"));
        innerFrame_0->setFrameShape(QFrame::StyledPanel);
        innerFrame_0->setFrameShadow(QFrame::Raised);
        label = new QLabel(innerFrame_0);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 91, 16));
        lineEditusername = new QLineEdit(innerFrame_0);
        lineEditusername->setObjectName("lineEditusername");
        lineEditusername->setGeometry(QRect(20, 50, 261, 21));
        labelpassword = new QLabel(innerFrame_0);
        labelpassword->setObjectName("labelpassword");
        labelpassword->setGeometry(QRect(20, 100, 91, 16));
        lineEdit_2 = new QLineEdit(innerFrame_0);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(30, 140, 261, 21));
        pushButtonlogin = new QPushButton(innerFrame_0);
        pushButtonlogin->setObjectName("pushButtonlogin");
        pushButtonlogin->setGeometry(QRect(120, 180, 75, 24));
        label_15 = new QLabel(innerFrame_0);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(80, 220, 191, 16));
        label_14 = new QLabel(innerFrame_0);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(60, 250, 211, 20));
        pushButton_2 = new QPushButton(innerFrame_0);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(120, 290, 75, 24));
        outerFrame0 = new QFrame(frame);
        outerFrame0->setObjectName("outerFrame0");
        outerFrame0->setGeometry(QRect(-70, 0, 731, 561));
        outerFrame0->setStyleSheet(QString::fromUtf8("border-image: url(:/background/frame.png);\n"
""));
        outerFrame0->setFrameShape(QFrame::StyledPanel);
        outerFrame0->setFrameShadow(QFrame::Raised);
        outerFrame0->raise();
        innerFrame_0->raise();

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        outerFrame_1 = new QFrame(page_3);
        outerFrame_1->setObjectName("outerFrame_1");
        outerFrame_1->setGeometry(QRect(-10, 0, 771, 591));
        outerFrame_1->setStyleSheet(QString::fromUtf8("#outerFrame_2 {\n"
"    background-image: url(:/background/frame.png);\n"
"}"));
        outerFrame_1->setFrameShape(QFrame::StyledPanel);
        outerFrame_1->setFrameShadow(QFrame::Raised);
        innerFrame_1 = new QFrame(outerFrame_1);
        innerFrame_1->setObjectName("innerFrame_1");
        innerFrame_1->setGeometry(QRect(280, 0, 341, 511));
        innerFrame_1->setStyleSheet(QString::fromUtf8(""));
        innerFrame_1->setFrameShape(QFrame::StyledPanel);
        innerFrame_1->setFrameShadow(QFrame::Raised);
        lineEdit_4 = new QLineEdit(innerFrame_1);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(30, 30, 221, 21));
        lineEdit_3 = new QLineEdit(innerFrame_1);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(30, 100, 221, 21));
        lineEdit_5 = new QLineEdit(innerFrame_1);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(30, 160, 231, 21));
        lineEdit_6 = new QLineEdit(innerFrame_1);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(30, 220, 231, 21));
        lineEdit_7 = new QLineEdit(innerFrame_1);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(30, 290, 231, 21));
        label_3 = new QLabel(innerFrame_1);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 10, 61, 16));
        label_5 = new QLabel(innerFrame_1);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(28, 70, 81, 21));
        label_6 = new QLabel(innerFrame_1);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 135, 71, 21));
        label_7 = new QLabel(innerFrame_1);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(28, 195, 61, 20));
        label_8 = new QLabel(innerFrame_1);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 260, 71, 16));
        label_9 = new QLabel(innerFrame_1);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(30, 330, 71, 16));
        lineEdit_8 = new QLineEdit(innerFrame_1);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(30, 360, 231, 21));
        pushButtoncreate = new QPushButton(innerFrame_1);
        pushButtoncreate->setObjectName("pushButtoncreate");
        pushButtoncreate->setGeometry(QRect(130, 420, 75, 24));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        innerFrame_3 = new QFrame(page_4);
        innerFrame_3->setObjectName("innerFrame_3");
        innerFrame_3->setGeometry(QRect(90, 0, 771, 591));
        innerFrame_3->setStyleSheet(QString::fromUtf8("QFrame#innerFrame_3{\n"
"background-image:url(:/background/frame.png);\n"
"\n"
"}"));
        innerFrame_3->setFrameShape(QFrame::StyledPanel);
        innerFrame_3->setFrameShadow(QFrame::Raised);
        outerFrame_3 = new QFrame(innerFrame_3);
        outerFrame_3->setObjectName("outerFrame_3");
        outerFrame_3->setGeometry(QRect(210, 30, 321, 511));
        outerFrame_3->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/background/outerFrame.png);"));
        outerFrame_3->setFrameShape(QFrame::StyledPanel);
        outerFrame_3->setFrameShadow(QFrame::Raised);
        labelsecuityqn = new QLabel(outerFrame_3);
        labelsecuityqn->setObjectName("labelsecuityqn");
        labelsecuityqn->setGeometry(QRect(40, 10, 271, 31));
        labelbirthPlace = new QLabel(outerFrame_3);
        labelbirthPlace->setObjectName("labelbirthPlace");
        labelbirthPlace->setGeometry(QRect(30, 50, 281, 16));
        labelfavFood = new QLabel(outerFrame_3);
        labelfavFood->setObjectName("labelfavFood");
        labelfavFood->setGeometry(QRect(30, 170, 271, 20));
        labelfavMovie = new QLabel(outerFrame_3);
        labelfavMovie->setObjectName("labelfavMovie");
        labelfavMovie->setGeometry(QRect(30, 310, 171, 16));
        pushButtonconfirm = new QPushButton(outerFrame_3);
        pushButtonconfirm->setObjectName("pushButtonconfirm");
        pushButtonconfirm->setGeometry(QRect(130, 420, 75, 24));
        lineEditbirthplace = new QLineEdit(outerFrame_3);
        lineEditbirthplace->setObjectName("lineEditbirthplace");
        lineEditbirthplace->setGeometry(QRect(30, 90, 251, 21));
        lineEditfavFood = new QLineEdit(outerFrame_3);
        lineEditfavFood->setObjectName("lineEditfavFood");
        lineEditfavFood->setGeometry(QRect(20, 210, 271, 21));
        lineEditfavMovie = new QLineEdit(outerFrame_3);
        lineEditfavMovie->setObjectName("lineEditfavMovie");
        lineEditfavMovie->setGeometry(QRect(30, 340, 271, 21));
        stackedWidget->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        formLayout->setWidget(0, QFormLayout::FieldRole, stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        labelpassword->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        pushButtonlogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Forget password. Click here!!", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Don't have an account? Create one", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "First Name", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Middle Name", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Last Name", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "username", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Mobile no", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButtoncreate->setText(QCoreApplication::translate("MainWindow", "Create", nullptr));
        labelsecuityqn->setText(QCoreApplication::translate("MainWindow", "                        Security Questions", nullptr));
        labelbirthPlace->setText(QCoreApplication::translate("MainWindow", "What is your birth place?", nullptr));
        labelfavFood->setText(QCoreApplication::translate("MainWindow", "What is your favourite food?", nullptr));
        labelfavMovie->setText(QCoreApplication::translate("MainWindow", "What is your favourite movie? ", nullptr));
        pushButtonconfirm->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
