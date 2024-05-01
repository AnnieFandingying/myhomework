#ifndef CHANGE_H
#define CHANGE_H
#define WIDTH 690
#define HEIGHT 388
#define TITLE "钢琴儿"
#define RES_PATH "./piano.rcc";
#define Icon ":/res/tubiao.jpg";

namespace change
{
const int FontSize=16;
const float enemyScale=0.8;
const int pianoMove=5;//钢琴移动速度
const float musicpointScale=0.4;//音符的缩放比例
const int enemyTimer=50;
const int musicpointTimer=50;
const int enemySpeed=5;//其它乐器下落速度
const int musicpoinSpeed=10;//音符速度
const float qinjianScale=0.007 ;
const int HealthStart=3;//初始血量
}
#endif // CHANGE_H
