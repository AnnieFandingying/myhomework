#include "health.h"
#include<QFont>
Health::Health(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    reset();
}

void Health::decrease()
{
    --health;
    setPlainText("血量"+QString::number(health));//更新文字显示
}

void Health::reset()
{
    health=change::HealthStart;
    setPlainText("血量"+QString::number(health));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("Colorier New",change::FontSize,QFont::Bold));
    setPos(x(),change::FontSize*2);//健康值的显示在往下两个字符大小处
}
