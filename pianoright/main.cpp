//#include "mainscene.h"
#include<QResource>
#include <QApplication>
#include<QGraphicsView>
#include<QGraphicsScene>
#include<QIcon>
#include<QtMultimedia>
#include<QSoundEffect>
#include "mainwindow.h"//加
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;//jia
    w.show();//jia
    return a.exec();
}
