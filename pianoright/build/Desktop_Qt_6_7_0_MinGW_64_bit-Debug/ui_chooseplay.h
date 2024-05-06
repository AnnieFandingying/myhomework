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
    QLabel *label_4;

    void setupUi(QWidget *chooseplay)
    {
        if (chooseplay->objectName().isEmpty())
            chooseplay->setObjectName("chooseplay");
        chooseplay->resize(356, 633);
        chooseplay->setStyleSheet(QString::fromUtf8("#chooseplay\n"
"{\n"
"\n"
"}"));
        label = new QLabel(chooseplay);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 40, 151, 61));
        label->setStyleSheet(QString::fromUtf8("background-color:rgb(0,0,0,0)"));
        label_2 = new QLabel(chooseplay);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 110, 101, 61));
        label_3 = new QLabel(chooseplay);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 170, 181, 61));
        youxi = new QPushButton(chooseplay);
        youxi->setObjectName("youxi");
        youxi->setGeometry(QRect(230, 90, 91, 71));
        youxi->setStyleSheet(QString::fromUtf8("*{\n"
"	background-image: url(:/res/pianoicon.png);\n"
"border:none;\n"
"}\n"
"QPUshuBUtton:hover\n"
"{\n"
"background-color: rgb(44, 146, 255);\n"
"}\n"
""));
        youxi->setAutoDefault(true);
        youxi->setFlat(false);
        pushButton_2 = new QPushButton(chooseplay);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(240, 180, 71, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("*{\n"
"	background-image: url(:/res/pianoqinjian2.jpg);\n"
"border:none;\n"
"}\n"
"QPUshuBUtton:hover\n"
"{\n"
"background-color: rgb(44, 146, 255);\n"
"}\n"
""));
        pushButton = new QPushButton(chooseplay);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 280, 80, 24));
        pushButton->setStyleSheet(QString::fromUtf8("QPUshuBUtton:hover\n"
"{\n"
"background-color: rgb(44, 146, 255);\n"
"}\n"
""));
        label_4 = new QLabel(chooseplay);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 10, 471, 821));
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/res/pinkcar3.jpg);"));
        label_4->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        youxi->raise();
        pushButton_2->raise();
        pushButton->raise();

        retranslateUi(chooseplay);

        QMetaObject::connectSlotsByName(chooseplay);
    } // setupUi

    void retranslateUi(QWidget *chooseplay)
    {
        chooseplay->setWindowTitle(QCoreApplication::translate("chooseplay", "Form", nullptr));
        label->setText(QCoreApplication::translate("chooseplay", "<html><head/><body><p><span style=\" font-size:22pt;\">\350\257\267\351\200\211\346\213\251\346\250\241\345\274\217</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("chooseplay", "<html><head/><body><p><span style=\" font-size:16pt; color:#aaaaff;\">\346\270\270\346\210\217\346\250\241\345\274\217</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("chooseplay", "<html><head/><body><p><span style=\" font-size:16pt; color:#ffaaff;\">\351\222\242\347\220\264\346\250\241\345\274\217</span></p></body></html>", nullptr));
        youxi->setText(QString());
        pushButton_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("chooseplay", "\350\277\224\345\233\236", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class chooseplay: public Ui_chooseplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEPLAY_H
