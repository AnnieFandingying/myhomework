#ifndef MUSICPOINT_H
#define MUSICPOINT_H

#include <QGraphicsPixmapItem>
#include <QObject>

class MusicPoint :public QObject ,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    MusicPoint(QGraphicsItem *parent=nullptr);

    // QObject interface
protected:
    virtual void timerEvent(QTimerEvent *event) override;
};

#endif // MUSICPOINT_H
