#include "score.h"
#include<QFont>
#include"change.h"
Score::Score(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    reset();
}
void Score::reset()
{
    score=0;

    setPlainText("分 数："+QString::number(score));
    setDefaultTextColor(Qt::green);
    setFont(QFont("Courier New",change::FontSize,QFont::Bold));//字体加粗
}
void Score::increase()
{
    ++score;
    setPlainText("分 数"+QString::number(score));
}
