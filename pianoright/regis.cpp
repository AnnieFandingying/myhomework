#include "regis.h"
#include "ui_regis.h"
#include "mainwindow.h"
#include<QGraphicsView>
#include<QGraphicsScene>

regis::regis(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::regis)
{
    ui->setupUi(this);
    this->setWindowTitle("用户注册");
}

regis::~regis()
{
    delete ui;
}
//跳转到登入界面
void regis::on_btn_regis_clicked()
{//判断两次输入密码是否相同
    MainWindow *w=new MainWindow();
    w->show();
    this->hide();
}

//返回
void regis::on_btn_quit_clicked()
{
    MainWindow *w=new MainWindow();
    w->show();
    this->hide();
}

