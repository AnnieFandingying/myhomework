#ifndef QINJIAN_H
#define QINJIAN_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include<QSoundEffect>
class QGraphicsTextItem;
class qinjian : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    qinjian(QGraphicsItem *parent=nullptr);

    // QGraphicsItem interface
protected:
    virtual void keyPressEvent(QKeyEvent *event) override;
private :
    void enemySpawn();//创造其他乐器孵化机
    void gameOver();
    // QObject interface
protected:
    virtual void timerEvent(QTimerEvent *event) override;
private:
    bool playing=true;
    QSoundEffect pianoSound;
    QGraphicsTextItem* messageItem=nullptr;
};

#endif // QINJIAN_H
