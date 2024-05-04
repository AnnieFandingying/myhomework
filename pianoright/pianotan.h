#ifndef PIANOTAN_H
#define PIANOTAN_H

#include <QWidget>

namespace Ui {
class pianotan;
}

class pianotan : public QWidget
{
    Q_OBJECT

public:
    explicit pianotan(QWidget *parent = nullptr);
    ~pianotan();
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

private:
    Ui::pianotan *ui;
};

#endif // PIANOTAN_H
