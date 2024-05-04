#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QGraphicsView>
#include<QGraphicsScene>
#include <QMainWindow>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    static bool c;//gai
    ~MainWindow();

private slots:
    //void on_pushButton_clicked();


    void on_btn_regis_clicked();

    void on_but_quit_clicked();

    void on_checkBox_clicked(bool checked);

    void on_btn_login_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
