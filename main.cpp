#include "mainwindow.h"

 #include <QApplication>
 #include <QLocale>
 #include <QTranslator>
 #include <QMainWindow>
 #include <QStackedWidget>
 #include <QVBoxLayout>
 #include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow mainWindow;
    QWidget centralWidget;

//     QTranslator translator;
//     const QStringList uiLanguages = QLocale::system().uiLanguages();
//     for (const QString &locale : uiLanguages) {
//         const QString baseName = "SET_" + QLocale(locale).name();
//         if (translator.load(":/i18n/" + baseName)) {
//             a.installTranslator(&translator);
//             break;
//         }
//     }
//kiran
    MainWindow w;
    w.show();
    return a.exec();
}
// #include <QApplication>
// #include <QMainWindow>
// #include <QStackedWidget>
// #include <QVBoxLayout>
// #include <QWidget>

// int main(int argc, char *argv[]) {
//     QApplication app(argc, argv);

//     QMainWindow mainWindow;
//     QWidget centralWidget;

//     QStackedWidget *stackedWidget = new QStackedWidget();

//     // Create some sample pages to add to the QStackedWidget
//     QWidget *page1 = new QWidget();
//     page1->setStyleSheet("background-color: red;");
//     QWidget *page2 = new QWidget();
//     page2->setStyleSheet("background-color: green;");
//     QWidget *page3 = new QWidget();
//     page3->setStyleSheet("background-color: blue;");

//     stackedWidget->addWidget(page1);
//     stackedWidget->addWidget(page2);
//     stackedWidget->addWidget(page3);

//     QVBoxLayout *layout = new QVBoxLayout();
//     layout->addWidget(stackedWidget);

//     centralWidget.setLayout(layout);
//     mainWindow.setCentralWidget(&centralWidget);

//     mainWindow.show();

//     return app.exec();
// }

