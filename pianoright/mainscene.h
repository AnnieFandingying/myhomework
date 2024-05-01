#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>

class mainsene : public QWidget
{
    Q_OBJECT

public:
    mainsene(QWidget *parent = nullptr);
    ~mainsene();
    //初始化场景
    void initscene();
};
#endif // MAINSCENE_H
