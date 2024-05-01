#include "enemy.h"
#include<QPixmap>
#include"change.h"
#include<QRandomGenerator>
#include"change.h"
#include<QGraphicsScene>
#include"qinjian.h"
#include"musicpoint.h"
#include"score.h"
#include"health.h"
using namespace change;
enemy::enemy(QGraphicsItem *parent):QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/res/enemyviolin.png"));
    setScale(change::enemyScale);
    int max=WIDTH-boundingRect().width()*change::enemyScale;//其他乐器生成范围
    int randomNumber=QRandomGenerator::global()->bounded(1,max);//随机数生成
    setPos(randomNumber,0);//生成的位置信息
    startTimer(change::enemyTimer);
}


void enemy::timerEvent(QTimerEvent *)
{//运用列表将对象拿出来
    QList<QGraphicsItem *> itemList=collidingItems();
    for(auto item:itemList)
    {
        if(typeid(*item)==typeid(qinjian))
        {//撞到敌机，血量减少
            Health::getInstanance().decrease();//调用血量减少函数
            scene()->removeItem(this);
            delete this;
            return;
        }
        if(typeid(*item)==typeid(MusicPoint))
        {
            //需要加分
            Score::getInstanance().increase();
            scene()->removeItem(item);
            scene()->removeItem(this);
            delete item;
            delete this;//删掉其他乐器
            return;
        }//判断是否相撞
    }
    setPos(x(),y()+change::enemySpeed);
    if(y()>HEIGHT)
    {
        scene()->removeItem(this);
        delete this;
        return;
    }
}
