/********************************************************************************
** Form generated from reading UI file 'chooseplay.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEPLAY_H
#define UI_CHOOSEPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chooseplay
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *piano;
    QPushButton *violin;
    QPushButton *trumpet;
    QPushButton *drum;
    QPushButton *start;

    void setupUi(QWidget *chooseplay)
    {
        if (chooseplay->objectName().isEmpty())
            chooseplay->setObjectName("chooseplay");
        chooseplay->resize(400, 300);
        label = new QLabel(chooseplay);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 61, 16));
        label_2 = new QLabel(chooseplay);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 10, 54, 16));
        label_3 = new QLabel(chooseplay);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 10, 54, 16));
        label_4 = new QLabel(chooseplay);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(83, 30, 51, 20));
        label_5 = new QLabel(chooseplay);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 60, 54, 16));
        label_6 = new QLabel(chooseplay);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(80, 90, 54, 16));
        piano = new QPushButton(chooseplay);
        piano->setObjectName("piano");
        piano->setGeometry(QRect(150, 10, 80, 24));
        violin = new QPushButton(chooseplay);
        violin->setObjectName("violin");
        violin->setGeometry(QRect(150, 30, 80, 24));
        trumpet = new QPushButton(chooseplay);
        trumpet->setObjectName("trumpet");
        trumpet->setGeometry(QRect(150, 60, 80, 24));
        drum = new QPushButton(chooseplay);
        drum->setObjectName("drum");
        drum->setGeometry(QRect(150, 90, 80, 24));
        start = new QPushButton(chooseplay);
        start->setObjectName("start");
        start->setGeometry(QRect(100, 250, 80, 24));

        retranslateUi(chooseplay);

        QMetaObject::connectSlotsByName(chooseplay);
    } // setupUi

    void retranslateUi(QWidget *chooseplay)
    {
        chooseplay->setWindowTitle(QCoreApplication::translate("chooseplay", "Form", nullptr));
        label->setText(QCoreApplication::translate("chooseplay", "\344\270\273\351\242\230", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("chooseplay", "\345\220\211\344\273\226", nullptr));
        label_4->setText(QCoreApplication::translate("chooseplay", "\345\260\217\346\217\220\347\220\264", nullptr));
        label_5->setText(QCoreApplication::translate("chooseplay", "\345\260\217\345\217\267", nullptr));
        label_6->setText(QCoreApplication::translate("chooseplay", "\351\274\223", nullptr));
        piano->setText(QCoreApplication::translate("chooseplay", "\351\200\211\346\213\251", nullptr));
        violin->setText(QCoreApplication::translate("chooseplay", "\351\200\211\346\213\251", nullptr));
        trumpet->setText(QCoreApplication::translate("chooseplay", "\351\200\211\346\213\251", nullptr));
        drum->setText(QCoreApplication::translate("chooseplay", "\351\200\211\346\213\251", nullptr));
        start->setText(QCoreApplication::translate("chooseplay", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chooseplay: public Ui_chooseplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEPLAY_H
