/********************************************************************************
** Form generated from reading UI file 'regis.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIS_H
#define UI_REGIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regis
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label2;
    QLineEdit *let_passwd1;
    QPushButton *btn_regis;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *let_passwd2;
    QPushButton *btn_quit;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;

    void setupUi(QWidget *regis)
    {
        if (regis->objectName().isEmpty())
            regis->setObjectName("regis");
        regis->resize(400, 300);
        horizontalLayoutWidget = new QWidget(regis);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(110, 130, 301, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label2 = new QLabel(horizontalLayoutWidget);
        label2->setObjectName("label2");

        horizontalLayout->addWidget(label2);

        let_passwd1 = new QLineEdit(horizontalLayoutWidget);
        let_passwd1->setObjectName("let_passwd1");

        horizontalLayout->addWidget(let_passwd1);

        btn_regis = new QPushButton(regis);
        btn_regis->setObjectName("btn_regis");
        btn_regis->setGeometry(QRect(110, 200, 80, 24));
        horizontalLayoutWidget_2 = new QWidget(regis);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(110, 170, 301, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        let_passwd2 = new QLineEdit(horizontalLayoutWidget_2);
        let_passwd2->setObjectName("let_passwd2");

        horizontalLayout_2->addWidget(let_passwd2);

        btn_quit = new QPushButton(regis);
        btn_quit->setObjectName("btn_quit");
        btn_quit->setGeometry(QRect(330, 201, 80, 24));
        horizontalLayoutWidget_3 = new QWidget(regis);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(110, 99, 311, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_3->addWidget(lineEdit_3);


        retranslateUi(regis);

        QMetaObject::connectSlotsByName(regis);
    } // setupUi

    void retranslateUi(QWidget *regis)
    {
        regis->setWindowTitle(QCoreApplication::translate("regis", "Form", nullptr));
        label2->setText(QCoreApplication::translate("regis", "\345\257\206\347\240\201", nullptr));
        btn_regis->setText(QCoreApplication::translate("regis", "\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("regis", "\351\207\215\350\276\223\345\205\245", nullptr));
        btn_quit->setText(QCoreApplication::translate("regis", "\350\277\224\345\233\236", nullptr));
        label_3->setText(QCoreApplication::translate("regis", "\347\224\250\346\210\267\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class regis: public Ui_regis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIS_H
