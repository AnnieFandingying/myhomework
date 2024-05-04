/********************************************************************************
** Form generated from reading UI file 'platform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLATFORM_H
#define UI_PLATFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_platform
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Button_C;
    QPushButton *Button_D;
    QPushButton *Button_E;
    QPushButton *Button_F;
    QPushButton *Button_G;
    QPushButton *Button_A;
    QPushButton *Button_B;
    QPushButton *Button_C_3;
    QPushButton *Button_D_2;
    QPushButton *Button_E_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Button_C_2;
    QPushButton *Button_Eb;
    QSpacerItem *horizontalSpacer;
    QPushButton *Button_F_2;
    QPushButton *Button_G_2;
    QPushButton *Button_Bb;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *Button_C_4;
    QPushButton *Button_Eb_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;

    void setupUi(QWidget *platform)
    {
        if (platform->objectName().isEmpty())
            platform->setObjectName("platform");
        platform->resize(953, 532);
        layoutWidget = new QWidget(platform);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(160, 90, 861, 457));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_2);

        layoutWidget_2 = new QWidget(platform);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(90, 100, 859, 413));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_2->setContentsMargins(30, -1, 0, 20);
        stackedWidget = new QStackedWidget(layoutWidget_2);
        stackedWidget->setObjectName("stackedWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(774, 390));
        stackedWidget->setFocusPolicy(Qt::StrongFocus);
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        sizePolicy.setHeightForWidth(page_2->sizePolicy().hasHeightForWidth());
        page_2->setSizePolicy(sizePolicy);
        horizontalLayoutWidget = new QWidget(page_2);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 772, 411));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(horizontalLayoutWidget->sizePolicy().hasHeightForWidth());
        horizontalLayoutWidget->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 20);
        Button_C = new QPushButton(horizontalLayoutWidget);
        Button_C->setObjectName("Button_C");
        sizePolicy.setHeightForWidth(Button_C->sizePolicy().hasHeightForWidth());
        Button_C->setSizePolicy(sizePolicy);
        Button_C->setMinimumSize(QSize(72, 390));
        Button_C->setSizeIncrement(QSize(10, 10));
        Button_C->setBaseSize(QSize(1, 1));
        QFont font;
        font.setKerning(true);
        Button_C->setFont(font);
        Button_C->setFocusPolicy(Qt::NoFocus);
        Button_C->setLayoutDirection(Qt::LeftToRight);
        Button_C->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(255, 255, 255);\n"
"padding-top: 60%; \n"
""));
        Button_C->setAutoDefault(false);

        horizontalLayout->addWidget(Button_C);

        Button_D = new QPushButton(horizontalLayoutWidget);
        Button_D->setObjectName("Button_D");
        sizePolicy.setHeightForWidth(Button_D->sizePolicy().hasHeightForWidth());
        Button_D->setSizePolicy(sizePolicy);
        Button_D->setMinimumSize(QSize(72, 390));
        Button_D->setFocusPolicy(Qt::NoFocus);
        Button_D->setLayoutDirection(Qt::LeftToRight);
        Button_D->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(255, 255, 255);\n"
"padding-top: 60%; "));

        horizontalLayout->addWidget(Button_D);

        Button_E = new QPushButton(horizontalLayoutWidget);
        Button_E->setObjectName("Button_E");
        sizePolicy.setHeightForWidth(Button_E->sizePolicy().hasHeightForWidth());
        Button_E->setSizePolicy(sizePolicy);
        Button_E->setMinimumSize(QSize(72, 390));
        Button_E->setFocusPolicy(Qt::NoFocus);
        Button_E->setLayoutDirection(Qt::LeftToRight);
        Button_E->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(255, 255, 255);\n"
"padding-top: 60%; "));

        horizontalLayout->addWidget(Button_E);

        Button_F = new QPushButton(horizontalLayoutWidget);
        Button_F->setObjectName("Button_F");
        sizePolicy.setHeightForWidth(Button_F->sizePolicy().hasHeightForWidth());
        Button_F->setSizePolicy(sizePolicy);
        Button_F->setMinimumSize(QSize(72, 390));
        Button_F->setFocusPolicy(Qt::NoFocus);
        Button_F->setLayoutDirection(Qt::LeftToRight);
        Button_F->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(255, 255, 255);\n"
"padding-top: 60%; "));

        horizontalLayout->addWidget(Button_F);

        Button_G = new QPushButton(horizontalLayoutWidget);
        Button_G->setObjectName("Button_G");
        sizePolicy.setHeightForWidth(Button_G->sizePolicy().hasHeightForWidth());
        Button_G->setSizePolicy(sizePolicy);
        Button_G->setMinimumSize(QSize(72, 390));
        Button_G->setFocusPolicy(Qt::NoFocus);
        Button_G->setLayoutDirection(Qt::LeftToRight);
        Button_G->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(255, 255, 255);\n"
"padding-top: 60%; "));

        horizontalLayout->addWidget(Button_G);

        Button_A = new QPushButton(horizontalLayoutWidget);
        Button_A->setObjectName("Button_A");
        sizePolicy.setHeightForWidth(Button_A->sizePolicy().hasHeightForWidth());
        Button_A->setSizePolicy(sizePolicy);
        Button_A->setMinimumSize(QSize(72, 390));
        Button_A->setFocusPolicy(Qt::NoFocus);
        Button_A->setLayoutDirection(Qt::LeftToRight);
        Button_A->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(255, 255, 255);\n"
"padding-top: 60%; "));

        horizontalLayout->addWidget(Button_A);

        Button_B = new QPushButton(horizontalLayoutWidget);
        Button_B->setObjectName("Button_B");
        sizePolicy.setHeightForWidth(Button_B->sizePolicy().hasHeightForWidth());
        Button_B->setSizePolicy(sizePolicy);
        Button_B->setMinimumSize(QSize(72, 390));
        Button_B->setFocusPolicy(Qt::NoFocus);
        Button_B->setLayoutDirection(Qt::LeftToRight);
        Button_B->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(255, 255, 255);\n"
"padding-top: 60%; "));

        horizontalLayout->addWidget(Button_B);

        Button_C_3 = new QPushButton(horizontalLayoutWidget);
        Button_C_3->setObjectName("Button_C_3");
        sizePolicy.setHeightForWidth(Button_C_3->sizePolicy().hasHeightForWidth());
        Button_C_3->setSizePolicy(sizePolicy);
        Button_C_3->setMinimumSize(QSize(72, 390));
        Button_C_3->setSizeIncrement(QSize(10, 10));
        Button_C_3->setBaseSize(QSize(1, 1));
        Button_C_3->setFont(font);
        Button_C_3->setFocusPolicy(Qt::NoFocus);
        Button_C_3->setLayoutDirection(Qt::LeftToRight);
        Button_C_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(255, 255, 255);\n"
"padding-top: 60%; \n"
""));
        Button_C_3->setAutoDefault(false);

        horizontalLayout->addWidget(Button_C_3);

        Button_D_2 = new QPushButton(horizontalLayoutWidget);
        Button_D_2->setObjectName("Button_D_2");
        sizePolicy.setHeightForWidth(Button_D_2->sizePolicy().hasHeightForWidth());
        Button_D_2->setSizePolicy(sizePolicy);
        Button_D_2->setMinimumSize(QSize(72, 390));
        Button_D_2->setFocusPolicy(Qt::NoFocus);
        Button_D_2->setLayoutDirection(Qt::LeftToRight);
        Button_D_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(255, 255, 255);\n"
"padding-top: 60%; "));

        horizontalLayout->addWidget(Button_D_2);

        Button_E_2 = new QPushButton(horizontalLayoutWidget);
        Button_E_2->setObjectName("Button_E_2");
        sizePolicy.setHeightForWidth(Button_E_2->sizePolicy().hasHeightForWidth());
        Button_E_2->setSizePolicy(sizePolicy);
        Button_E_2->setMinimumSize(QSize(72, 390));
        Button_E_2->setFocusPolicy(Qt::NoFocus);
        Button_E_2->setLayoutDirection(Qt::LeftToRight);
        Button_E_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(255, 255, 255);\n"
"padding-top: 60%; "));

        horizontalLayout->addWidget(Button_E_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 1);
        horizontalLayout->setStretch(6, 1);
        horizontalLayout->setStretch(7, 1);
        horizontalLayout->setStretch(8, 1);
        horizontalLayout->setStretch(9, 1);
        horizontalLayoutWidget_2 = new QWidget(page_2);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(40, 0, 671, 221));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(horizontalLayoutWidget_2->sizePolicy().hasHeightForWidth());
        horizontalLayoutWidget_2->setSizePolicy(sizePolicy2);
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 20);
        Button_C_2 = new QPushButton(horizontalLayoutWidget_2);
        Button_C_2->setObjectName("Button_C_2");
        sizePolicy.setHeightForWidth(Button_C_2->sizePolicy().hasHeightForWidth());
        Button_C_2->setSizePolicy(sizePolicy);
        Button_C_2->setMinimumSize(QSize(69, 200));
        Button_C_2->setFocusPolicy(Qt::NoFocus);
        Button_C_2->setLayoutDirection(Qt::LeftToRight);
        Button_C_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-right-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(Button_C_2);

        Button_Eb = new QPushButton(horizontalLayoutWidget_2);
        Button_Eb->setObjectName("Button_Eb");
        sizePolicy.setHeightForWidth(Button_Eb->sizePolicy().hasHeightForWidth());
        Button_Eb->setSizePolicy(sizePolicy);
        Button_Eb->setMinimumSize(QSize(69, 200));
        Button_Eb->setFocusPolicy(Qt::NoFocus);
        Button_Eb->setLayoutDirection(Qt::LeftToRight);
        Button_Eb->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-right-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(Button_Eb);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        Button_F_2 = new QPushButton(horizontalLayoutWidget_2);
        Button_F_2->setObjectName("Button_F_2");
        sizePolicy.setHeightForWidth(Button_F_2->sizePolicy().hasHeightForWidth());
        Button_F_2->setSizePolicy(sizePolicy);
        Button_F_2->setMinimumSize(QSize(69, 200));
        Button_F_2->setFocusPolicy(Qt::NoFocus);
        Button_F_2->setLayoutDirection(Qt::LeftToRight);
        Button_F_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-right-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(Button_F_2);

        Button_G_2 = new QPushButton(horizontalLayoutWidget_2);
        Button_G_2->setObjectName("Button_G_2");
        sizePolicy.setHeightForWidth(Button_G_2->sizePolicy().hasHeightForWidth());
        Button_G_2->setSizePolicy(sizePolicy);
        Button_G_2->setMinimumSize(QSize(69, 200));
        Button_G_2->setFocusPolicy(Qt::NoFocus);
        Button_G_2->setLayoutDirection(Qt::LeftToRight);
        Button_G_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-right-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(Button_G_2);

        Button_Bb = new QPushButton(horizontalLayoutWidget_2);
        Button_Bb->setObjectName("Button_Bb");
        sizePolicy.setHeightForWidth(Button_Bb->sizePolicy().hasHeightForWidth());
        Button_Bb->setSizePolicy(sizePolicy);
        Button_Bb->setMinimumSize(QSize(69, 200));
        Button_Bb->setFocusPolicy(Qt::NoFocus);
        Button_Bb->setLayoutDirection(Qt::LeftToRight);
        Button_Bb->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-right-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(Button_Bb);

        horizontalSpacer_4 = new QSpacerItem(66, 197, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        Button_C_4 = new QPushButton(horizontalLayoutWidget_2);
        Button_C_4->setObjectName("Button_C_4");
        sizePolicy.setHeightForWidth(Button_C_4->sizePolicy().hasHeightForWidth());
        Button_C_4->setSizePolicy(sizePolicy);
        Button_C_4->setMinimumSize(QSize(69, 200));
        Button_C_4->setFocusPolicy(Qt::NoFocus);
        Button_C_4->setLayoutDirection(Qt::LeftToRight);
        Button_C_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-right-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(Button_C_4);

        Button_Eb_2 = new QPushButton(horizontalLayoutWidget_2);
        Button_Eb_2->setObjectName("Button_Eb_2");
        sizePolicy.setHeightForWidth(Button_Eb_2->sizePolicy().hasHeightForWidth());
        Button_Eb_2->setSizePolicy(sizePolicy);
        Button_Eb_2->setMinimumSize(QSize(69, 200));
        Button_Eb_2->setFocusPolicy(Qt::NoFocus);
        Button_Eb_2->setLayoutDirection(Qt::LeftToRight);
        Button_Eb_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-right-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(Button_Eb_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 1);
        horizontalLayout_2->setStretch(4, 1);
        horizontalLayout_2->setStretch(5, 1);
        horizontalLayout_2->setStretch(6, 1);
        horizontalLayout_2->setStretch(7, 1);
        horizontalLayout_2->setStretch(8, 1);
        stackedWidget->addWidget(page_2);

        gridLayout_2->addWidget(stackedWidget, 1, 0, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_2);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(platform);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 230, 71, 91));

        retranslateUi(platform);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(platform);
    } // setupUi

    void retranslateUi(QWidget *platform)
    {
        platform->setWindowTitle(QCoreApplication::translate("platform", "Form", nullptr));
        Button_C->setText(QCoreApplication::translate("platform", "C", nullptr));
        Button_D->setText(QCoreApplication::translate("platform", "D", nullptr));
        Button_E->setText(QCoreApplication::translate("platform", "E", nullptr));
        Button_F->setText(QCoreApplication::translate("platform", "F", nullptr));
        Button_G->setText(QCoreApplication::translate("platform", "G", nullptr));
        Button_A->setText(QCoreApplication::translate("platform", "A", nullptr));
        Button_B->setText(QCoreApplication::translate("platform", "B", nullptr));
        Button_C_3->setText(QCoreApplication::translate("platform", "C", nullptr));
        Button_D_2->setText(QCoreApplication::translate("platform", "D", nullptr));
        Button_E_2->setText(QCoreApplication::translate("platform", "E", nullptr));
        Button_C_2->setText(QCoreApplication::translate("platform", "C#", nullptr));
        Button_Eb->setText(QCoreApplication::translate("platform", "Eb", nullptr));
        Button_F_2->setText(QCoreApplication::translate("platform", "F#", nullptr));
        Button_G_2->setText(QCoreApplication::translate("platform", "G#", nullptr));
        Button_Bb->setText(QCoreApplication::translate("platform", "Bb", nullptr));
        Button_C_4->setText(QCoreApplication::translate("platform", "C#", nullptr));
        Button_Eb_2->setText(QCoreApplication::translate("platform", "Eb", nullptr));
        pushButton->setText(QCoreApplication::translate("platform", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class platform: public Ui_platform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLATFORM_H
