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
    QPushButton *youxi;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *chooseplay)
    {
        if (chooseplay->objectName().isEmpty())
            chooseplay->setObjectName("chooseplay");
        chooseplay->resize(399, 319);
        label = new QLabel(chooseplay);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 30, 271, 71));
        label_2 = new QLabel(chooseplay);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 100, 101, 61));
        label_3 = new QLabel(chooseplay);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 170, 181, 61));
        youxi = new QPushButton(chooseplay);
        youxi->setObjectName("youxi");
        youxi->setGeometry(QRect(230, 120, 91, 31));
        youxi->setAutoDefault(true);
        pushButton_2 = new QPushButton(chooseplay);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(230, 190, 91, 31));
        pushButton = new QPushButton(chooseplay);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 250, 80, 24));

        retranslateUi(chooseplay);

        QMetaObject::connectSlotsByName(chooseplay);
    } // setupUi

    void retranslateUi(QWidget *chooseplay)
    {
        chooseplay->setWindowTitle(QCoreApplication::translate("chooseplay", "Form", nullptr));
        label->setText(QCoreApplication::translate("chooseplay", "<html><head/><body><p><span style=\" font-size:22pt;\">\350\257\267\351\200\211\346\213\251\346\250\241\345\274\217</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("chooseplay", "<html><head/><body><p><span style=\" font-size:16pt; color:#aaaaff;\">\346\270\270\346\210\217\346\250\241\345\274\217</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("chooseplay", "<html><head/><body><p><span style=\" font-size:16pt; color:#ffaaff;\">\351\222\242\347\220\264\346\250\241\345\274\217</span></p></body></html>", nullptr));
        youxi->setText(QCoreApplication::translate("chooseplay", "\351\200\211\346\213\251", nullptr));
        pushButton_2->setText(QCoreApplication::translate("chooseplay", "\351\200\211\346\213\251", nullptr));
        pushButton->setText(QCoreApplication::translate("chooseplay", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chooseplay: public Ui_chooseplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEPLAY_H
