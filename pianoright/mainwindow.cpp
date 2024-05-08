#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "regis.h"
#include<QGraphicsView>
#include<QGraphicsScene>

#include<QResource>
#include <QApplication>
#include<QGraphicsView>
#include<QGraphicsScene>
#include<QIcon>
#include<QtMultimedia>
#include<QSoundEffect>
#include "chooseplay.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("用户登录");
    ui->let_passwd->setEchoMode(QLineEdit::Password);//设置密码不可见
    ui->let_passwd->setMaxLength(6);//最大设置长度不超过6
}
MainWindow::~MainWindow()
{
    delete ui;
}
//跳转到主界面

//跳转到注册界面
void MainWindow::on_btn_regis_clicked()
{
    QApplication::setWindowIcon(QIcon(":/res/tubiao.ico"));
    regis *w=new regis();
    w->show();
    this->hide();
}

//退出
void MainWindow::on_but_quit_clicked()
{
    this->close();
}

//显示
void MainWindow::on_checkBox_clicked(bool checked)
{
    if(checked)
    {
        //show
        ui->let_passwd->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->let_passwd->setEchoMode(QLineEdit::Password);//no show
    }
}

//跳转主界面
void MainWindow::on_btn_login_clicked()
{
    QApplication::setWindowIcon(QIcon(":/res/tubiao.ico"));

    //创建场景
    chooseplay* v=new chooseplay;
    v->show();
    this->hide();
    this->close();
}

