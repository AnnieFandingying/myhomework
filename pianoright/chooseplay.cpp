#include "chooseplay.h"
#include "ui_chooseplay.h"
#include "background.h"
#include "platform.h"
#include "mainwindow.h"
#include<QBitmap>
chooseplay::chooseplay(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::chooseplay)
{
    ui->setupUi(this);
}

chooseplay::~chooseplay()
{
    delete ui;
}

void chooseplay::on_youxi_clicked()
{
    background* w=new background;
    w->show();
    this->hide();
}


void chooseplay::on_pushButton_2_clicked()
{
    platform* w=new platform;
    w->show();
    this->hide();
}


void chooseplay::on_pushButton_clicked()
{
    MainWindow *w=new MainWindow();
    w->show();
    this->hide();
}

