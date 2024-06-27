#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_pushButtonconfirm_clicked();

    void on_pushButtonrecord_clicked();

    void on_pushButtonadd_clicked();

    void on_pushButtonok_2_clicked();

    void on_pushButtonexpenses_clicked();

    void on_pushButtonincome_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
