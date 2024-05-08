#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <QWidget>

namespace Ui {
class background;
}

class background : public QWidget
{
    Q_OBJECT

public:
    explicit background(QWidget *parent = nullptr);
    ~background();

private slots:
    void on_skyback_clicked();

    void on_nightfallsky_clicked();

    void on_riverback_clicked();

    void on_blueskyback_clicked();

    void on_pushButton_clicked();

private:
    Ui::background *ui;
};

#endif // BACKGROUND_H
