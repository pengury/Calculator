/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *addbutton;
    QPushButton *divbutton;
    QPushButton *ninebutton;
    QPushButton *delbutton;
    QPushButton *onebutton;
    QPushButton *fivebutton;
    QPushButton *sevenbutton;
    QPushButton *clearbutton;
    QPushButton *zerobutton;
    QPushButton *threebutton;
    QPushButton *fourbutton;
    QPushButton *mulbutton;
    QPushButton *eightbutton;
    QPushButton *subbutton;
    QPushButton *leftbutton;
    QPushButton *rightbutton;
    QPushButton *twobutton;
    QPushButton *sixbutton;
    QPushButton *equalbutton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(232, 305);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 30, 171, 41));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 80, 174, 218));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        addbutton = new QPushButton(layoutWidget);
        addbutton->setObjectName("addbutton");
        addbutton->setMinimumSize(QSize(40, 40));
        addbutton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(addbutton, 0, 1, 1, 1);

        divbutton = new QPushButton(layoutWidget);
        divbutton->setObjectName("divbutton");
        divbutton->setMinimumSize(QSize(40, 40));
        divbutton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(divbutton, 2, 3, 1, 1);

        ninebutton = new QPushButton(layoutWidget);
        ninebutton->setObjectName("ninebutton");
        ninebutton->setMinimumSize(QSize(40, 40));
        ninebutton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(ninebutton, 1, 2, 1, 1);

        delbutton = new QPushButton(layoutWidget);
        delbutton->setObjectName("delbutton");
        delbutton->setMinimumSize(QSize(40, 40));
        delbutton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(delbutton, 0, 3, 1, 1);

        onebutton = new QPushButton(layoutWidget);
        onebutton->setObjectName("onebutton");
        onebutton->setMinimumSize(QSize(40, 40));
        onebutton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(onebutton, 3, 0, 1, 1);

        fivebutton = new QPushButton(layoutWidget);
        fivebutton->setObjectName("fivebutton");
        fivebutton->setMinimumSize(QSize(40, 40));
        fivebutton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(fivebutton, 2, 1, 1, 1);

        sevenbutton = new QPushButton(layoutWidget);
        sevenbutton->setObjectName("sevenbutton");
        sevenbutton->setMinimumSize(QSize(40, 40));
        sevenbutton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(sevenbutton, 1, 0, 1, 1);

        clearbutton = new QPushButton(layoutWidget);
        clearbutton->setObjectName("clearbutton");
        clearbutton->setMinimumSize(QSize(40, 40));
        clearbutton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(clearbutton, 0, 0, 1, 1);

        zerobutton = new QPushButton(layoutWidget);
        zerobutton->setObjectName("zerobutton");
        zerobutton->setMinimumSize(QSize(40, 40));
        zerobutton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(zerobutton, 4, 1, 1, 1);

        threebutton = new QPushButton(layoutWidget);
        threebutton->setObjectName("threebutton");
        threebutton->setMinimumSize(QSize(40, 40));
        threebutton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(threebutton, 3, 2, 1, 1);

        fourbutton = new QPushButton(layoutWidget);
        fourbutton->setObjectName("fourbutton");
        fourbutton->setMinimumSize(QSize(40, 40));
        fourbutton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(fourbutton, 2, 0, 1, 1);

        mulbutton = new QPushButton(layoutWidget);
        mulbutton->setObjectName("mulbutton");
        mulbutton->setMinimumSize(QSize(40, 40));
        mulbutton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(mulbutton, 1, 3, 1, 1);

        eightbutton = new QPushButton(layoutWidget);
        eightbutton->setObjectName("eightbutton");
        eightbutton->setMinimumSize(QSize(40, 40));
        eightbutton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(eightbutton, 1, 1, 1, 1);

        subbutton = new QPushButton(layoutWidget);
        subbutton->setObjectName("subbutton");
        subbutton->setMinimumSize(QSize(40, 40));
        subbutton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(subbutton, 0, 2, 1, 1);

        leftbutton = new QPushButton(layoutWidget);
        leftbutton->setObjectName("leftbutton");
        leftbutton->setMinimumSize(QSize(40, 40));
        leftbutton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(leftbutton, 4, 0, 1, 1);

        rightbutton = new QPushButton(layoutWidget);
        rightbutton->setObjectName("rightbutton");
        rightbutton->setMinimumSize(QSize(40, 40));
        rightbutton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(rightbutton, 4, 2, 1, 1);

        twobutton = new QPushButton(layoutWidget);
        twobutton->setObjectName("twobutton");
        twobutton->setMinimumSize(QSize(40, 40));
        twobutton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(twobutton, 3, 1, 1, 1);

        sixbutton = new QPushButton(layoutWidget);
        sixbutton->setObjectName("sixbutton");
        sixbutton->setMinimumSize(QSize(40, 40));
        sixbutton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(sixbutton, 2, 2, 1, 1);

        equalbutton = new QPushButton(layoutWidget);
        equalbutton->setObjectName("equalbutton");
        equalbutton->setMinimumSize(QSize(40, 40));
        equalbutton->setMaximumSize(QSize(40, 90));

        gridLayout->addWidget(equalbutton, 3, 3, 2, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        addbutton->setText(QCoreApplication::translate("Widget", "+", nullptr));
        divbutton->setText(QCoreApplication::translate("Widget", "/", nullptr));
        ninebutton->setText(QCoreApplication::translate("Widget", "9", nullptr));
        delbutton->setText(QString());
        onebutton->setText(QCoreApplication::translate("Widget", "1", nullptr));
        fivebutton->setText(QCoreApplication::translate("Widget", "5", nullptr));
        sevenbutton->setText(QCoreApplication::translate("Widget", "7", nullptr));
        clearbutton->setText(QCoreApplication::translate("Widget", "C", nullptr));
        zerobutton->setText(QCoreApplication::translate("Widget", "0", nullptr));
        threebutton->setText(QCoreApplication::translate("Widget", "3", nullptr));
        fourbutton->setText(QCoreApplication::translate("Widget", "4", nullptr));
        mulbutton->setText(QCoreApplication::translate("Widget", "*", nullptr));
        eightbutton->setText(QCoreApplication::translate("Widget", "8", nullptr));
        subbutton->setText(QCoreApplication::translate("Widget", "-", nullptr));
        leftbutton->setText(QCoreApplication::translate("Widget", "\357\274\210", nullptr));
        rightbutton->setText(QCoreApplication::translate("Widget", "\357\274\211", nullptr));
        twobutton->setText(QCoreApplication::translate("Widget", "2", nullptr));
        sixbutton->setText(QCoreApplication::translate("Widget", "6", nullptr));
        equalbutton->setText(QCoreApplication::translate("Widget", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
