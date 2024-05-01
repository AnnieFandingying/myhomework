#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>

class Score : public QGraphicsTextItem
{
    Q_OBJECT
public:
    Score(QGraphicsItem *parent=nullptr);
    void increase();
    void reset();
    static Score& getInstanance()
    {
        static Score obj;
        return obj;//提供一个全局的变量
    }
private:
    int score=0;
};

#endif // SCORE_H
