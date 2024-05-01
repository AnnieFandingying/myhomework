#include "musicpoint.h"
#include"change.h"
#include<QGraphicsScene>
#include<QPixmap>
using namespace change;
MusicPoint::MusicPoint(QGraphicsItem *parent):QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/res/musicpoint1.png"));
    this->setScale(change::musicpointScale);
    startTimer(change::musicpointTimer);
}


void MusicPoint::timerEvent(QTimerEvent *)
{
    setPos(x(),y()-change::musicpoinSpeed);
    if(y()+boundingRect().height()<0)
    {
        scene()->removeItem(this);
        delete this;
    }
}
