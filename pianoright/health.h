#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsTextItem>
#include <QObject>
#include"change.h"
class Health : public QGraphicsTextItem
{
    Q_OBJECT
public:
    Health(QGraphicsItem *parent=nullptr);
    int getHealth()
    {
        return health;//内联函数获取血量
    }
    void decrease();
    void reset();
    static Health& getInstanance()
    {
        static Health obj;
        return obj;//提供一个全局的变量
    }
private:
    int health=change::HealthStart;
};

#endif // HEALTH_H
