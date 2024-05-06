#ifndef PLATFORM_H
#define PLATFORM_H

#include <QWidget>

#include <QTimer>

#include <QKeyEvent>

#include <qpushbutton.h>

namespace Ui {
class platform;
}

class platform : public QWidget
{
    Q_OBJECT

public:
    explicit platform(QWidget *parent = nullptr);
    ~platform();
private slots:

    void on_Button_C_clicked();

    void on_Button_C_2_clicked();

    void on_Button_D_clicked();

    void on_Button_Eb_clicked();

    void on_Button_E_clicked();

    void on_Button_F_clicked();

    void on_Button_F_2_clicked();

    void on_Button_G_clicked();

    void on_Button_G_2_clicked();

    void on_Button_A_clicked();

    void on_Button_Bb_clicked();

    void on_Button_B_clicked();

    void on_Button_C_3_clicked();

    void on_Button_C_4_clicked();

    void on_Button_D_2_clicked();

    void on_Button_Eb_2_clicked();

    void on_Button_E_2_clicked();

    void keyPressEvent(QKeyEvent *event);

    void keyReleaseEvent(QKeyEvent *event);
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::platform *ui;
};

#endif // PLATFORM_H
