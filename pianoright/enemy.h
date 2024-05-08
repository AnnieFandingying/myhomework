#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixmapItem>
#include <QObject>

class enemy : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
   enemy(QGraphicsItem *parent=nullptr);
    ~enemy()
   {
        //qDebug()<<"xigou";//当超出主屏范围及时析构
    }
   // QObject interface
   protected:
   virtual void timerEvent(QTimerEvent *event) override;
};

#endif // ENEMY_H
