#include "musicpoint.h"
#include"change.h"
#include<QGraphicsScene>
#include<QPixmap>
using namespace change;
MusicPoint::MusicPoint(QGraphicsItem *parent):QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/res/musicpoint1.png"));
    this->setScale(change::musicpointScale);
    startTimer(change::musicpointTimer);//设置发射时间
}


void MusicPoint::timerEvent(QTimerEvent *)
{
    setPos(x(),y()-change::musicpoinSpeed);
    if(y()+boundingRect().height()<0)
    {
        scene()->removeItem(this);//碰到边框销毁
        delete this;
    }
}
