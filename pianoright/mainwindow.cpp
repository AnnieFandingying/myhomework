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
#include"change.h"
#include"qinjian.h"
#include"score.h"
#include"health.h"
#include<QtMultimedia>
#include<QSoundEffect>
#include "background.h"
#include "chooseplay.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("用户登录");
    ui->let_passwd->setEchoMode(QLineEdit::Password);
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
    chooseplay* v=new chooseplay;
    v->show();
    this->hide();
    /*background* w=new background;
    w->show();
    this->hide();*/
    /*qinjian* player=new qinjian;
    //QResource::registerResource("./piano.rcc");

    //创建图标
    QApplication::setWindowIcon(QIcon(":/res/tubiao.ico"));

    //创建场景
    QGraphicsScene* scene=new QGraphicsScene();//gai
    //将琴键添加到场景中
    scene->addItem(player);
    scene->setSceneRect(0,0,690,388);
    scene->setBackgroundBrush(QBrush(QImage(":/res/sky.jpg")));
    //创建分数文字item
    scene->addItem(&Score::getInstanance());
    scene->setStickyFocus(true);//不会在点击取消状态
    //创建分数文字item
    scene->addItem(&Health::getInstanance());
    //QGraphicsView view(scene);//gai
    QGraphicsView* view=new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//（发现图片大小不合适）去掉滚轮条
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(690,388);
    view->setWindowTitle(TITLE);
    view->show();
    QMediaPlayer* bgMusic=new QMediaPlayer();
    QAudioOutput* audioOutput=new  QAudioOutput();
    bgMusic->setAudioOutput(*&audioOutput);
    bgMusic->setSource(QUrl("qrc:/res/Pianoboy - The Truth That You Leave.mp3"));
    bgMusic->play();*/
    this->close();
}

