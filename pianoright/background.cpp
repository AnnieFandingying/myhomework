#include "background.h"
#include "ui_background.h"

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
background::background(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::background)
{
    ui->setupUi(this);
}

background::~background()
{
    delete ui;
}

void background::on_skyback_clicked()
{
    qinjian* player=new qinjian;
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
    /*view.setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//（发现图片大小不合适）去掉滚轮条
    view.setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view.setFixedSize(690,388);
    view.setWindowTitle(TITLE);*/
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//（发现图片大小不合适）去掉滚轮条
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(690,388);
    view->setWindowTitle(TITLE);
    view->show();
    QMediaPlayer* bgMusic=new QMediaPlayer();
    QAudioOutput* audioOutput=new  QAudioOutput();
    bgMusic->setAudioOutput(*&audioOutput);
    bgMusic->setSource(QUrl("qrc:/res/Pianoboy - The Truth That You Leave.mp3"));
    bgMusic->play();
    this->close();
}


void background::on_nightfallsky_clicked()
{
    qinjian* player=new qinjian;
    //QResource::registerResource("./piano.rcc");

    //创建图标
    QApplication::setWindowIcon(QIcon(":/res/tubiao.ico"));

    //创建场景
    QGraphicsScene* scene=new QGraphicsScene();//gai
    //将琴键添加到场景中
    scene->addItem(player);
    scene->setSceneRect(0,0,690,388);
    scene->setBackgroundBrush(QBrush(QImage(":/res/nightfall2.jpg")));
    //创建分数文字item
    scene->addItem(&Score::getInstanance());
    scene->setStickyFocus(true);//不会在点击取消状态
    //创建分数文字item
    scene->addItem(&Health::getInstanance());
    //QGraphicsView view(scene);//gai
    QGraphicsView* view=new QGraphicsView(scene);
    /*view.setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//（发现图片大小不合适）去掉滚轮条
    view.setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view.setFixedSize(690,388);
    view.setWindowTitle(TITLE);*/
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//（发现图片大小不合适）去掉滚轮条
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(690,388);
    view->setWindowTitle(TITLE);
    view->show();
    QMediaPlayer* bgMusic=new QMediaPlayer();
    QAudioOutput* audioOutput=new  QAudioOutput();
    bgMusic->setAudioOutput(*&audioOutput);
    bgMusic->setSource(QUrl("qrc:/res/Pianoboy - The Truth That You Leave.mp3"));
    bgMusic->play();
    this->close();
}


void background::on_riverback_clicked()
{
    qinjian* player=new qinjian;
    //QResource::registerResource("./piano.rcc");

    //创建图标
    QApplication::setWindowIcon(QIcon(":/res/tubiao.ico"));

    //创建场景
    QGraphicsScene* scene=new QGraphicsScene();//gai
    //将琴键添加到场景中
    scene->addItem(player);
    scene->setSceneRect(0,0,690,388);
    scene->setBackgroundBrush(QBrush(QImage(":/res/paintingriver2.jpg")));
    //创建分数文字item
    scene->addItem(&Score::getInstanance());
    scene->setStickyFocus(true);//不会在点击取消状态
    //创建分数文字item
    scene->addItem(&Health::getInstanance());
    //QGraphicsView view(scene);//gai
    QGraphicsView* view=new QGraphicsView(scene);
    /*view.setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//（发现图片大小不合适）去掉滚轮条
    view.setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view.setFixedSize(690,388);
    view.setWindowTitle(TITLE);*/
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//（发现图片大小不合适）去掉滚轮条
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(690,388);
    view->setWindowTitle(TITLE);
    view->show();
    QMediaPlayer* bgMusic=new QMediaPlayer();
    QAudioOutput* audioOutput=new  QAudioOutput();
    bgMusic->setAudioOutput(*&audioOutput);
    bgMusic->setSource(QUrl("qrc:/res/jaycd - always with you.mp3"));
    bgMusic->play();
    this->close();
}


void background::on_blueskyback_clicked()
{//粉色校车
    qinjian* player=new qinjian;
    //QResource::registerResource("./piano.rcc");

    //创建图标
    QApplication::setWindowIcon(QIcon(":/res/tubiao.ico"));

    //创建场景
    QGraphicsScene* scene=new QGraphicsScene();//gai
    //将琴键添加到场景中
    scene->addItem(player);
    scene->setSceneRect(0,0,690,388);
    scene->setBackgroundBrush(QBrush(QImage(":/res/blueskystar2.jpg")));
    //创建分数文字item
    scene->addItem(&Score::getInstanance());
    scene->setStickyFocus(true);//不会在点击取消状态
    //创建分数文字item
    scene->addItem(&Health::getInstanance());
    //QGraphicsView view(scene);//gai
    QGraphicsView* view=new QGraphicsView(scene);
    /*view.setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//（发现图片大小不合适）去掉滚轮条
    view.setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view.setFixedSize(690,388);
    view.setWindowTitle(TITLE);*/
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//（发现图片大小不合适）去掉滚轮条
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(690,388);
    view->setWindowTitle(TITLE);
    view->show();
    QMediaPlayer* bgMusic=new QMediaPlayer();
    QAudioOutput* audioOutput=new  QAudioOutput();
    bgMusic->setAudioOutput(*&audioOutput);
    bgMusic->setSource(QUrl("qrc:/res/wind.mp3"));
    bgMusic->play();
    this->close();
}

