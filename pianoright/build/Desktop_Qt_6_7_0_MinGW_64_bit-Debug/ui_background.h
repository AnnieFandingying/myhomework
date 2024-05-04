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

    void setupUi(QWidget *background)
    {
        if (background->objectName().isEmpty())
            background->setObjectName("background");
        background->resize(400, 300);
        label = new QLabel(background);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 70, 54, 16));
        label_2 = new QLabel(background);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 100, 54, 16));
        label_3 = new QLabel(background);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 130, 54, 16));
        label_4 = new QLabel(background);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 160, 54, 16));
        skyback = new QPushButton(background);
        skyback->setObjectName("skyback");
        skyback->setGeometry(QRect(150, 70, 80, 24));
        nightfallsky = new QPushButton(background);
        nightfallsky->setObjectName("nightfallsky");
        nightfallsky->setGeometry(QRect(150, 100, 80, 24));
        riverback = new QPushButton(background);
        riverback->setObjectName("riverback");
        riverback->setGeometry(QRect(150, 130, 80, 24));
        blueskyback = new QPushButton(background);
        blueskyback->setObjectName("blueskyback");
        blueskyback->setGeometry(QRect(150, 160, 80, 24));
        label_5 = new QLabel(background);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(100, 20, 91, 31));

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
        skyback->setText(QCoreApplication::translate("background", "\351\200\211\346\213\251", nullptr));
        nightfallsky->setText(QCoreApplication::translate("background", "\351\200\211\346\213\251", nullptr));
        riverback->setText(QCoreApplication::translate("background", "\351\200\211\346\213\251", nullptr));
        blueskyback->setText(QCoreApplication::translate("background", "\351\200\211\346\213\251", nullptr));
        label_5->setText(QCoreApplication::translate("background", "\350\257\267\351\200\211\346\213\251\344\270\273\351\242\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class background: public Ui_background {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKGROUND_H
