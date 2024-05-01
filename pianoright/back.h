#ifndef BACK_H
#define BACK_H
#include<QPixmap>
class Back
{
public:
    Back();
    void backPosition();
public:
    //背景
    QPixmap m_back1;
    QPixmap m_back2;
    QPixmap m_back3;
    QPixmap m_back4;
    //背景滚动坐标
    int m_back1_posY;
    int m_back2_posY;
    int m_back3_posY;
    int m_back4_posY;
    //背景滚动速度
    int m_scoll_speed;
};

#endif // BACK_H
