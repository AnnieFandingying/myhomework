/********************************************************************************
** Form generated from reading UI file 'introduction.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRODUCTION_H
#define UI_INTRODUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_introduction
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *introduction)
    {
        if (introduction->objectName().isEmpty())
            introduction->setObjectName("introduction");
        introduction->resize(400, 300);
        introduction->setStyleSheet(QString::fromUtf8("background-image: url(:/res/b3.png);"));
        label = new QLabel(introduction);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 70, 251, 51));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        label_2 = new QLabel(introduction);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 10, 421, 311));
        label_2->setFont(font);
        label_2->raise();
        label->raise();

        retranslateUi(introduction);

        QMetaObject::connectSlotsByName(introduction);
    } // setupUi

    void retranslateUi(QWidget *introduction)
    {
        introduction->setWindowTitle(QCoreApplication::translate("introduction", "Form", nullptr));
        label->setText(QCoreApplication::translate("introduction", "\344\275\277\347\224\250\350\257\264\346\230\216\357\274\2321.\345\217\257\344\273\245\347\233\264\346\216\245\346\214\211\351\224\256\344\275\277\347\224\250", nullptr));
        label_2->setText(QCoreApplication::translate("introduction", "           2.\344\271\237\345\217\257\344\273\245\346\225\262\345\207\273\351\224\256\347\233\230\344\275\277\347\224\250\357\274\214\345\205\266\344\270\255A\345\257\271\345\272\224\344\270\255\345\244\256C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class introduction: public Ui_introduction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRODUCTION_H
