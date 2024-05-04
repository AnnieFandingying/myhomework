#include "platform.h"
#include "ui_platform.h"

#include <qlabel.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qspinbox.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
//#include <sys/ioctl.h>
#include<QtMultimedia>

#include <fcntl.h>
#include <qapplication.h>
#include <QMessageBox>
//#include<QtKey>
#include <QAbstractButton>
#include "mainwindow.h"
platform::platform(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::platform)
{
    ui->setupUi(this);
}

platform::~platform()
{
    delete ui;
}


//中音
//C 523
void platform::on_Button_C_clicked()
{
    QMediaPlayer* bgm=new QMediaPlayer;
    QAudioOutput* audioOutput=new QAudioOutput();
    bgm->setAudioOutput(*&audioOutput);
    bgm->setSource(QUrl("qrc:/res/40-C  -s.wav"));
    bgm->play();
}

//C#    554
void platform::on_Button_C_2_clicked()
{
    QMediaPlayer* bgm=new QMediaPlayer;
    QAudioOutput* audioOutput=new QAudioOutput();
    bgm->setAudioOutput(*&audioOutput);
    bgm->setSource(QUrl("qrc:/res/41-C# -.wav"));
    bgm->play();
}

//D 587
void platform::on_Button_D_clicked()
{
    QMediaPlayer* bgm=new QMediaPlayer;
    QAudioOutput* audioOutput=new QAudioOutput();
    bgm->setAudioOutput(*&audioOutput);
    bgm->setSource(QUrl("qrc:/res/42-D -.wav"));
    bgm->play();
}

//Eb    622
void platform::on_Button_Eb_clicked()
{
    QMediaPlayer* bgm=new QMediaPlayer;
    QAudioOutput* audioOutput=new QAudioOutput();
    bgm->setAudioOutput(*&audioOutput);
    bgm->setSource(QUrl("qrc:/res/43-D# -.wav"));
    bgm->play();
}

//E 659
void platform::on_Button_E_clicked()
{
    QMediaPlayer* bgm=new QMediaPlayer;
    QAudioOutput* audioOutput=new QAudioOutput();
    bgm->setAudioOutput(*&audioOutput);
    bgm->setSource(QUrl("qrc:/res/44-E  -.wav"));
    bgm->play();
}

//F 698
void platform::on_Button_F_clicked()
{
    QMediaPlayer* bgm=new QMediaPlayer;
    QAudioOutput* audioOutput=new QAudioOutput();
    bgm->setAudioOutput(*&audioOutput);
    bgm->setSource(QUrl("qrc:/res/45-F   -.wav"));
    bgm->play();
}

//F#    740
void platform::on_Button_F_2_clicked()
{
    QMediaPlayer* bgm=new QMediaPlayer;
    QAudioOutput* audioOutput=new QAudioOutput();
    bgm->setAudioOutput(*&audioOutput);
    bgm->setSource(QUrl("qrc:/res/p_46_fz4.mp3"));
    bgm->play();
}

//G 784
void platform::on_Button_G_clicked()
{
    QMediaPlayer* bgm=new QMediaPlayer;
    QAudioOutput* audioOutput=new QAudioOutput();
    bgm->setAudioOutput(*&audioOutput);
    bgm->setSource(QUrl("qrc:/res/47-G  -.wav"));
    bgm->play();
}

//G#    831
void platform::on_Button_G_2_clicked()
{
    QMediaPlayer* bgm=new QMediaPlayer;
    QAudioOutput* audioOutput=new QAudioOutput();
    bgm->setAudioOutput(*&audioOutput);
    bgm->setSource(QUrl("qrc:/res/48-G# -.wav"));
    bgm->play();
}

//A 880
void platform::on_Button_A_clicked()
{
    QMediaPlayer* bgm=new QMediaPlayer;
    QAudioOutput* audioOutput=new QAudioOutput();
    bgm->setAudioOutput(*&audioOutput);
    bgm->setSource(QUrl("qrc:/res/49-A  -.wav"));
    bgm->play();
}

//Bb    932
void platform::on_Button_Bb_clicked()
{
    QMediaPlayer* bgm=new QMediaPlayer;
    QAudioOutput* audioOutput=new QAudioOutput();
    bgm->setAudioOutput(*&audioOutput);
    bgm->setSource(QUrl("qrc:/res/50-A# -.wav"));
    bgm->play();
}

//B 988
void platform::on_Button_B_clicked()
{
    QMediaPlayer* bgm=new QMediaPlayer;
    QAudioOutput* audioOutput=new QAudioOutput();
    bgm->setAudioOutput(*&audioOutput);
    bgm->setSource(QUrl("qrc:/res/51-B    -.wav"));
    bgm->play();
}

//高音
//C 1047
void platform::on_Button_C_3_clicked()
{
    QMediaPlayer* bgm=new QMediaPlayer;
    QAudioOutput* audioOutput=new QAudioOutput();
    bgm->setAudioOutput(*&audioOutput);
    bgm->setSource(QUrl("qrc:/res/52-C    -.wav"));
    bgm->play();
}

//C#    1109
void platform::on_Button_C_4_clicked()
{
    QMediaPlayer* bgm=new QMediaPlayer;
    QAudioOutput* audioOutput=new QAudioOutput();
    bgm->setAudioOutput(*&audioOutput);
    bgm->setSource(QUrl("qrc:/res/53-C# -.wav"));
    bgm->play();
}

//D 1175
void platform::on_Button_D_2_clicked()
{
    QMediaPlayer* bgm=new QMediaPlayer;
    QAudioOutput* audioOutput=new QAudioOutput();
    bgm->setAudioOutput(*&audioOutput);
    bgm->setSource(QUrl("qrc:/res/54-D   -.wav"));
    bgm->play();
}

//Eb    1245
void platform::on_Button_Eb_2_clicked()
{
    QMediaPlayer* bgm=new QMediaPlayer;
    QAudioOutput* audioOutput=new QAudioOutput();
    bgm->setAudioOutput(*&audioOutput);
    bgm->setSource(QUrl("qrc:/res/55-D# -.wav"));
    bgm->play();
}

//E 1319
void platform::on_Button_E_2_clicked()
{
    QMediaPlayer* bgm=new QMediaPlayer;
    QAudioOutput* audioOutput=new QAudioOutput();
    bgm->setAudioOutput(*&audioOutput);
    bgm->setSource(QUrl("qrc:/res/56-E   -.wav"));
    bgm->play();
}

void platform::keyPressEvent(QKeyEvent *event)
{
    int uKey = event->key();

    switch(uKey)
    {//信号、事件
    case Qt::Key_A:

        emit ui->Button_C->click();
        ui->Button_C->setStyleSheet("QPushButton{background-color: rgb(255, 255, 255);selection-color: rgb(255, 255, 255);padding-top: 60%;border-width:1px;border-style:solid;border-left-color: rgb(0, 0, 0); border-top-color: rgb(0, 0, 0);}");

        /*QPoint pos;
                pos = ui->Button_A->pos();
                pos.setX( 20 + pos.x()+(ui->Button_A->width())/2 );
                pos.setY( 320 + pos.y()+(ui->Button_A->height())/2 );

                QMouseEvent *Press_event = new QMouseEvent(QEvent::MouseButtonPress,
                    pos,Qt::LeftButton,Qt::LeftButton,Qt::NoModifier);
                QApplication::sendEvent(ui->Button_A,Press_event);*/

        break;
    case Qt::Key_W:emit ui->Button_C_2->click();break;
    case Qt::Key_S:emit ui->Button_D->click();break;
    case Qt::Key_E:emit ui->Button_Eb->click();break;
    case Qt::Key_D:emit ui->Button_E->click();break;
    case Qt::Key_F:emit ui->Button_F->click();break;
    case Qt::Key_T:emit ui->Button_F_2->click();break;
    case Qt::Key_G:emit ui->Button_G->click();break;
    case Qt::Key_Y:emit ui->Button_G_2->click();break;
    case Qt::Key_H:emit ui->Button_A->click();break;
    case Qt::Key_U:emit ui->Button_Bb->click();break;
    case Qt::Key_J:emit ui->Button_B->click();break;
    case Qt::Key_K:emit ui->Button_C_3->click();break;
    case Qt::Key_O:emit ui->Button_C_4->click();break;
    case Qt::Key_L:emit ui->Button_D_2->click();break;
    case Qt::Key_P:emit ui->Button_Eb_2->click();break;
    case Qt::Key_Semicolon:emit ui->Button_E_2->click();break;
        break;
    }
}

void platform::keyReleaseEvent(QKeyEvent *event)
{
    int uKey = event->key();

    switch(uKey)
    {//信号、事件
    case Qt::Key_A:
        ui->Button_C->setStyleSheet("QPushButton:!default{background-color: rgb(255, 255, 255);selection-color: rgb(255, 255, 255);padding-top: 60%;}");
        break;
    case Qt::Key_W:ui->Button_C_2->setStyleSheet("QPushButton:!default{background-color: rgb(0, 0, 0);border-width:1px;border-style:solid;border-right-color: rgb(255, 255, 255);color: rgb(255, 255, 255);}");break;
    case Qt::Key_S:ui->Button_D->setStyleSheet("QPushButton:!default{background-color: rgb(255, 255, 255);selection-color: rgb(255, 255, 255);padding-top: 60%; }");break;
    case Qt::Key_E:ui->Button_Eb->setStyleSheet("QPushButton:!default{background-color: rgb(0, 0, 0);border-width:1px;border-style:solid;border-right-color: rgb(255, 255, 255);color: rgb(255, 255, 255);}");break;
    case Qt::Key_D:ui->Button_E->setStyleSheet("QPushButton:!default{background-color: rgb(255, 255, 255);selection-color: rgb(255, 255, 255);padding-top: 60%; }");break;
    case Qt::Key_F:ui->Button_F->setStyleSheet("QPushButton:!default{background-color: rgb(255, 255, 255);selection-color: rgb(255, 255, 255);padding-top: 60%; }");break;
    case Qt::Key_T:ui->Button_F_2->setStyleSheet("QPushButton:!default{background-color: rgb(0, 0, 0);border-width:1px;border-style:solid;border-right-color: rgb(255, 255, 255);color: rgb(255, 255, 255);}");break;
    case Qt::Key_G:ui->Button_G->setStyleSheet("QPushButton:!default{background-color: rgb(255, 255, 255);selection-color: rgb(255, 255, 255);padding-top: 60%; }");break;
    case Qt::Key_Y:ui->Button_G_2->setStyleSheet("QPushButton:!default{background-color: rgb(0, 0, 0);border-width:1px;border-style:solid;border-right-color: rgb(255, 255, 255);color: rgb(255, 255, 255);}");break;
    case Qt::Key_H:ui->Button_A->setStyleSheet("QPushButton:!default{background-color: rgb(255, 255, 255);selection-color: rgb(255, 255, 255);padding-top: 60%; }");break;
    case Qt::Key_U:ui->Button_Bb->setStyleSheet("QPushButton:!default{background-color: rgb(0, 0, 0);border-width:1px;border-style:solid;border-right-color: rgb(255, 255, 255);color: rgb(255, 255, 255);}");break;
    case Qt::Key_J:ui->Button_B->setStyleSheet("QPushButton:!default{background-color: rgb(255, 255, 255);selection-color: rgb(255, 255, 255);padding-top: 60%; }");break;
    case Qt::Key_K:ui->Button_C_3->setStyleSheet("QPushButton:!default{background-color: rgb(255, 255, 255);selection-color: rgb(255, 255, 255);padding-top: 60%; }");break;
    case Qt::Key_O:ui->Button_C_4->setStyleSheet("QPushButton:!default{background-color: rgb(0, 0, 0);border-width:1px;border-style:solid;border-right-color: rgb(255, 255, 255);color: rgb(255, 255, 255);}");break;
    case Qt::Key_L:ui->Button_D_2->setStyleSheet("QPushButton:!default{background-color: rgb(255, 255, 255);selection-color: rgb(255, 255, 255);padding-top: 60%; }");break;
    case Qt::Key_P:ui->Button_Eb_2->setStyleSheet("QPushButton:!default{background-color: rgb(0, 0, 0);border-width:1px;border-style:solid;border-right-color: rgb(255, 255, 255);color: rgb(255, 255, 255);}");break;
    case Qt::Key_Semicolon:ui->Button_E_2->setStyleSheet("QPushButton:!default{background-color: rgb(255, 255, 255);selection-color: rgb(255, 255, 255);padding-top: 60%; }");break;

    }
}

void platform::on_pushButton_clicked()
{
    MainWindow *w=new MainWindow();
    w->show();
    this->hide();
}

