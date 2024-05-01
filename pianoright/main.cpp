//#include "mainscene.h"
#include<QResource>
#include <QApplication>
#include<QGraphicsView>
#include<QGraphicsScene>
#include<QIcon>
#include"change.h"
#include"qinjian.h"
#include"score.h"
#include"health.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //创建琴键
    qinjian* player=new qinjian;
    //QResource::registerResource("./piano.rcc");

    //创建图标
    QApplication::setWindowIcon(QIcon(":/res/tubiao.ico"));

    //创建场景
    QGraphicsScene* scene=new QGraphicsScene();
    //将琴键添加到场景中
    scene->addItem(player);
    scene->setSceneRect(0,0,690,388);
    scene->setBackgroundBrush(QBrush(QImage(":/res/sky.jpg")));
    //创建分数文字item
    scene->addItem(&Score::getInstanance());
    scene->setStickyFocus(true);//不会在点击取消状态
    //创建分数文字item
    scene->addItem(&Health::getInstanance());
    QGraphicsView view(scene);
    view.setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//（发现图片大小不合适）去掉滚轮条
    view.setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view.setFixedSize(690,388);
    view.setWindowTitle(TITLE);
    view.show();
    return a.exec();
}
