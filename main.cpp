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
    //QWidget centralWidget;

    // QTranslator translator;
    // const QStringList uiLanguages = QLocale::system().uiLanguages();
    // for (const QString &locale : uiLanguages) {
    //     const QString baseName = "SET_" + QLocale(locale).name();
    //     if (translator.load(":/i18n/" + baseName)) {
    //         a.installTranslator(&translator);
    //         break;
    //     }
    // }
    MainWindow w;
    w.show();
    return a.exec();
}


