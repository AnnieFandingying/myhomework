#include "qinjian.h"
#include"change.h"
#include<QPixmap>
#include<QKeyEvent>
#include"enemy.h"
#include<QGraphicsScene>
#include"musicpoint.h"
#include"health.h"
#include<QGraphicsTextItem>
#include<QFontMetrics>//用于计算游戏结束文字大小
#include"score.h"
#include<QSoundEffect>
using namespace change;
qinjian::qinjian(QGraphicsItem *parent):QGraphicsPixmapItem(parent)
{
    //把钢琴在屏幕中绘制出来
    pianoSound.setSource(QUrl("qrc:/res/p_48_gz4.mp3"));
    setPixmap(QPixmap(":/res/pianoplay.png"));
    setScale(0.2);//设置图标倍数
    setPos(WIDTH/2-boundingRect().width()*0.2/2,HEIGHT-boundingRect().height()*0.2);//设置在底部正中间
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFocus();
    startTimer(500);
}
void qinjian::keyPressEvent(QKeyEvent *event)
{
    switch(event->key())
    {
    case Qt::Key_Left:
        if(pos().x()>0)
        {
            setPos(x()-pianoMove,y());//钢琴左移速度
        }
         break;
    case Qt::Key_Right:
        if(pos().x()<WIDTH-boundingRect().width()*0.2)//控制右边移动范围，注意缩放比例
        {
            setPos(x()+pianoMove,y());//钢琴右移速度
        }
        break;
    case Qt::Key_Down:
        if(pos().y()<HEIGHT-boundingRect().width()*0.2)//控制下边移动范围，注意缩放比例
        {
            setPos(x(),y()+pianoMove);//钢琴下移速度
        }
        break;
    case Qt::Key_Up://按上键
        if(pos().y()>0)
        {
            setPos(x(),y()-pianoMove);//钢琴上移速度
        }
        break;
    case Qt::Key_S:
        if(playing)return;
        playing=true;
        Health::getInstanance().reset();
        Score::getInstanance().reset();
        messageItem->hide();
    case Qt::Key_Space:
        {
        pianosound.play();//播放音效
        MusicPoint* musicpointplay=new MusicPoint;//创建音符对象
        int temp=x()+boundingRect().width()*change::qinjianScale/2;//只考虑主钢琴宽度
        temp+=musicpointplay->boundingRect().width()*musicpointScale*1.5;//向右移动2个音符的宽度，将音符发射到中间
        musicpointplay->setPos(temp,y());
        scene()->addItem(musicpointplay);
        }
         break;
    }
}


void qinjian::enemySpawn()
{
    if(playing)
    {
        enemy *enemyplay=new enemy;//创建小提琴攻击对象
        scene()->addItem(enemyplay);
    }
}

void qinjian::gameOver()
{
    playing=false;
    for(auto item:scene()->items())
    {
        if(typeid(*item)==typeid(enemy))
        {
            scene()->removeItem(item);
            delete item;//游戏结束删除所有其他乐器
        }
    }
    if(!messageItem)
    {
        messageItem=new QGraphicsTextItem;
        scene()->addItem(messageItem);
        QString message("Game Over!按s键重新开始！");
        messageItem->setPlainText(message);
        messageItem->setDefaultTextColor(Qt::red);
        QFont font("Colorier New",change::FontSize*2,QFont::Bold);
        messageItem->setFont(font);
        QFontMetrics fm(font);
        int msgWidth=fm.horizontalAdvance(message);//水平方向跨度多少
        messageItem->setPos(WIDTH/2-msgWidth/2,HEIGHT/2);//居中
    }else
        messageItem->show();
}


void qinjian::timerEvent(QTimerEvent *)
{
    if(playing)
    {
        enemySpawn();
    }
    if(Health::getInstanance().getHealth()<=0)
    {
        gameOver();//如果血量小于零，调用gameOver函数，结束游戏
    }
}
