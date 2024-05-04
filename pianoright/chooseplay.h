#ifndef CHOOSEPLAY_H
#define CHOOSEPLAY_H

#include <QWidget>

namespace Ui {
class chooseplay;
}

class chooseplay : public QWidget
{
    Q_OBJECT

public:
    explicit chooseplay(QWidget *parent = nullptr);
    ~chooseplay();

private slots:
    void on_youxi_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::chooseplay *ui;
};

#endif // CHOOSEPLAY_H
