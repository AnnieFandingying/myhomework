/********************************************************************************
** Form generated from reading UI file 'background.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKGROUND_H
#define UI_BACKGROUND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_background
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *skyback;
    QPushButton *nightfallsky;
    QPushButton *riverback;
    QPushButton *blueskyback;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label_6;

    void setupUi(QWidget *background)
    {
        if (background->objectName().isEmpty())
            background->setObjectName("background");
        background->resize(370, 470);
        label = new QLabel(background);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 80, 54, 16));
        label_2 = new QLabel(background);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 150, 54, 16));
        label_3 = new QLabel(background);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 220, 54, 16));
        label_4 = new QLabel(background);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 290, 54, 16));
        skyback = new QPushButton(background);
        skyback->setObjectName("skyback");
        skyback->setGeometry(QRect(149, 73, 71, 41));
        skyback->setStyleSheet(QString::fromUtf8("border-image: url(:/res/guitar.png);"));
        nightfallsky = new QPushButton(background);
        nightfallsky->setObjectName("nightfallsky");
        nightfallsky->setGeometry(QRect(130, 130, 91, 51));
        nightfallsky->setStyleSheet(QString::fromUtf8("border-image: url(:/res/trumpet.png);"));
        riverback = new QPushButton(background);
        riverback->setObjectName("riverback");
        riverback->setGeometry(QRect(140, 200, 81, 51));
        riverback->setStyleSheet(QString::fromUtf8("border-image: url(:/res/drum.png);"));
        blueskyback = new QPushButton(background);
        blueskyback->setObjectName("blueskyback");
        blueskyback->setGeometry(QRect(150, 260, 71, 71));
        blueskyback->setStyleSheet(QString::fromUtf8("\n"
"\n"
"*{border:none;\n"
"background-image: url(:/res/up.png);\n"
"}"));
        label_5 = new QLabel(background);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(100, 20, 171, 41));
        label_5->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));
        pushButton = new QPushButton(background);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 350, 80, 24));
        label_6 = new QLabel(background);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(-10, 20, 381, 441));
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(:/res/c2.jpg);"));
        label_6->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        skyback->raise();
        nightfallsky->raise();
        riverback->raise();
        blueskyback->raise();
        label_5->raise();
        pushButton->raise();

        retranslateUi(background);

        QMetaObject::connectSlotsByName(background);
    } // setupUi

    void retranslateUi(QWidget *background)
    {
        background->setWindowTitle(QCoreApplication::translate("background", "Form", nullptr));
        label->setText(QCoreApplication::translate("background", "\351\243\236\344\272\221\344\271\213\344\270\212", nullptr));
        label_2->setText(QCoreApplication::translate("background", "\351\273\204\346\230\217", nullptr));
        label_3->setText(QCoreApplication::translate("background", "\346\262\263\350\276\271", nullptr));
        label_4->setText(QCoreApplication::translate("background", "\350\224\232\350\223\235", nullptr));
        skyback->setText(QString());
        nightfallsky->setText(QString());
        riverback->setText(QString());
        blueskyback->setText(QString());
        label_5->setText(QCoreApplication::translate("background", "\350\257\267\351\200\211\346\213\251\344\270\273\351\242\230", nullptr));
        pushButton->setText(QCoreApplication::translate("background", "\350\277\224\345\233\236", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class background: public Ui_background {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKGROUND_H
