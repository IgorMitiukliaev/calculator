/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_view
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QPushButton *btn_5;
    QPushButton *btn_9;
    QPushButton *btn_6;
    QPushButton *btn_dot;
    QPushButton *btn_4;
    QPushButton *btn_8;
    QPushButton *btn_3;
    QPushButton *btn_x;
    QPushButton *btn_close;
    QPushButton *btn_1;
    QPushButton *btn_7;
    QPushButton *btn_2;
    QPushButton *btn_0;
    QPushButton *btn_un_min;
    QPushButton *btn_open;
    QGridLayout *gridLayout_6;
    QPushButton *btn_mul;
    QPushButton *btn_clr;
    QPushButton *btn_graph;
    QPushButton *btn_plus;
    QPushButton *btn_sqrt;
    QPushButton *btn_mod;
    QPushButton *btn_bin_min;
    QPushButton *btn_div;
    QPushButton *btn_calc;
    QPushButton *btn_pow;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_7;
    QPushButton *btn_atan;
    QPushButton *btn_sin;
    QPushButton *btn_log;
    QPushButton *btn_acos;
    QPushButton *btn_cos;
    QPushButton *btn_tan;
    QPushButton *btn_asin;
    QPushButton *btn_deposit;
    QPushButton *btn_ln;
    QPushButton *btn_credit;
    QTextEdit *display;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *view)
    {
        if (view->objectName().isEmpty())
            view->setObjectName(QString::fromUtf8("view"));
        view->resize(800, 495);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(view->sizePolicy().hasHeightForWidth());
        view->setSizePolicy(sizePolicy);
        view->setMinimumSize(QSize(800, 495));
        view->setMaximumSize(QSize(800, 495));
        centralwidget = new QWidget(view);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(23, 200, 716, 241));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(20);
        gridLayout_2->setContentsMargins(10, -1, 10, -1);
        btn_5 = new QPushButton(horizontalLayoutWidget);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));

        gridLayout_2->addWidget(btn_5, 2, 1, 1, 1);

        btn_9 = new QPushButton(horizontalLayoutWidget);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));

        gridLayout_2->addWidget(btn_9, 1, 2, 1, 1);

        btn_6 = new QPushButton(horizontalLayoutWidget);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));

        gridLayout_2->addWidget(btn_6, 2, 2, 1, 1);

        btn_dot = new QPushButton(horizontalLayoutWidget);
        btn_dot->setObjectName(QString::fromUtf8("btn_dot"));

        gridLayout_2->addWidget(btn_dot, 4, 0, 1, 1);

        btn_4 = new QPushButton(horizontalLayoutWidget);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));

        gridLayout_2->addWidget(btn_4, 2, 0, 1, 1);

        btn_8 = new QPushButton(horizontalLayoutWidget);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));

        gridLayout_2->addWidget(btn_8, 1, 1, 1, 1);

        btn_3 = new QPushButton(horizontalLayoutWidget);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));

        gridLayout_2->addWidget(btn_3, 3, 2, 1, 1);

        btn_x = new QPushButton(horizontalLayoutWidget);
        btn_x->setObjectName(QString::fromUtf8("btn_x"));

        gridLayout_2->addWidget(btn_x, 0, 2, 1, 1);

        btn_close = new QPushButton(horizontalLayoutWidget);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));

        gridLayout_2->addWidget(btn_close, 0, 1, 1, 1);

        btn_1 = new QPushButton(horizontalLayoutWidget);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));

        gridLayout_2->addWidget(btn_1, 3, 0, 1, 1);

        btn_7 = new QPushButton(horizontalLayoutWidget);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));

        gridLayout_2->addWidget(btn_7, 1, 0, 1, 1);

        btn_2 = new QPushButton(horizontalLayoutWidget);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));

        gridLayout_2->addWidget(btn_2, 3, 1, 1, 1);

        btn_0 = new QPushButton(horizontalLayoutWidget);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));

        gridLayout_2->addWidget(btn_0, 4, 1, 1, 1);

        btn_un_min = new QPushButton(horizontalLayoutWidget);
        btn_un_min->setObjectName(QString::fromUtf8("btn_un_min"));

        gridLayout_2->addWidget(btn_un_min, 4, 2, 1, 1);

        btn_open = new QPushButton(horizontalLayoutWidget);
        btn_open->setObjectName(QString::fromUtf8("btn_open"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_open->sizePolicy().hasHeightForWidth());
        btn_open->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(btn_open, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(20);
        gridLayout_6->setContentsMargins(10, -1, 10, -1);
        btn_mul = new QPushButton(horizontalLayoutWidget);
        btn_mul->setObjectName(QString::fromUtf8("btn_mul"));

        gridLayout_6->addWidget(btn_mul, 2, 0, 1, 1);

        btn_clr = new QPushButton(horizontalLayoutWidget);
        btn_clr->setObjectName(QString::fromUtf8("btn_clr"));

        gridLayout_6->addWidget(btn_clr, 0, 0, 1, 1);

        btn_graph = new QPushButton(horizontalLayoutWidget);
        btn_graph->setObjectName(QString::fromUtf8("btn_graph"));

        gridLayout_6->addWidget(btn_graph, 0, 1, 1, 1);

        btn_plus = new QPushButton(horizontalLayoutWidget);
        btn_plus->setObjectName(QString::fromUtf8("btn_plus"));

        gridLayout_6->addWidget(btn_plus, 1, 0, 1, 1);

        btn_sqrt = new QPushButton(horizontalLayoutWidget);
        btn_sqrt->setObjectName(QString::fromUtf8("btn_sqrt"));

        gridLayout_6->addWidget(btn_sqrt, 4, 1, 1, 1);

        btn_mod = new QPushButton(horizontalLayoutWidget);
        btn_mod->setObjectName(QString::fromUtf8("btn_mod"));

        gridLayout_6->addWidget(btn_mod, 3, 0, 1, 1);

        btn_bin_min = new QPushButton(horizontalLayoutWidget);
        btn_bin_min->setObjectName(QString::fromUtf8("btn_bin_min"));

        gridLayout_6->addWidget(btn_bin_min, 1, 1, 1, 1);

        btn_div = new QPushButton(horizontalLayoutWidget);
        btn_div->setObjectName(QString::fromUtf8("btn_div"));

        gridLayout_6->addWidget(btn_div, 2, 1, 1, 1);

        btn_calc = new QPushButton(horizontalLayoutWidget);
        btn_calc->setObjectName(QString::fromUtf8("btn_calc"));

        gridLayout_6->addWidget(btn_calc, 4, 0, 1, 1);

        btn_pow = new QPushButton(horizontalLayoutWidget);
        btn_pow->setObjectName(QString::fromUtf8("btn_pow"));

        gridLayout_6->addWidget(btn_pow, 3, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(20);
        gridLayout_7->setContentsMargins(10, -1, 10, -1);
        btn_atan = new QPushButton(horizontalLayoutWidget);
        btn_atan->setObjectName(QString::fromUtf8("btn_atan"));

        gridLayout_7->addWidget(btn_atan, 2, 1, 1, 1);

        btn_sin = new QPushButton(horizontalLayoutWidget);
        btn_sin->setObjectName(QString::fromUtf8("btn_sin"));

        gridLayout_7->addWidget(btn_sin, 0, 0, 1, 1);

        btn_log = new QPushButton(horizontalLayoutWidget);
        btn_log->setObjectName(QString::fromUtf8("btn_log"));

        gridLayout_7->addWidget(btn_log, 3, 0, 1, 1);

        btn_acos = new QPushButton(horizontalLayoutWidget);
        btn_acos->setObjectName(QString::fromUtf8("btn_acos"));

        gridLayout_7->addWidget(btn_acos, 1, 1, 1, 1);

        btn_cos = new QPushButton(horizontalLayoutWidget);
        btn_cos->setObjectName(QString::fromUtf8("btn_cos"));

        gridLayout_7->addWidget(btn_cos, 1, 0, 1, 1);

        btn_tan = new QPushButton(horizontalLayoutWidget);
        btn_tan->setObjectName(QString::fromUtf8("btn_tan"));

        gridLayout_7->addWidget(btn_tan, 2, 0, 1, 1);

        btn_asin = new QPushButton(horizontalLayoutWidget);
        btn_asin->setObjectName(QString::fromUtf8("btn_asin"));

        gridLayout_7->addWidget(btn_asin, 0, 1, 1, 1);

        btn_deposit = new QPushButton(horizontalLayoutWidget);
        btn_deposit->setObjectName(QString::fromUtf8("btn_deposit"));

        gridLayout_7->addWidget(btn_deposit, 4, 1, 1, 1);

        btn_ln = new QPushButton(horizontalLayoutWidget);
        btn_ln->setObjectName(QString::fromUtf8("btn_ln"));

        gridLayout_7->addWidget(btn_ln, 3, 1, 1, 1);

        btn_credit = new QPushButton(horizontalLayoutWidget);
        btn_credit->setObjectName(QString::fromUtf8("btn_credit"));

        gridLayout_7->addWidget(btn_credit, 4, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_7);


        horizontalLayout->addLayout(horizontalLayout_2);

        display = new QTextEdit(centralwidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(20, 20, 721, 131));
        QFont font;
        font.setPointSize(12);
        display->setFont(font);
        view->setCentralWidget(centralwidget);
        menubar = new QMenuBar(view);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        view->setMenuBar(menubar);
        statusbar = new QStatusBar(view);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        view->setStatusBar(statusbar);

        retranslateUi(view);

        QMetaObject::connectSlotsByName(view);
    } // setupUi

    void retranslateUi(QMainWindow *view)
    {
        view->setWindowTitle(QCoreApplication::translate("view", "SmartCalc2.0", nullptr));
        btn_5->setText(QCoreApplication::translate("view", "5", nullptr));
        btn_9->setText(QCoreApplication::translate("view", "9", nullptr));
        btn_6->setText(QCoreApplication::translate("view", "6", nullptr));
        btn_dot->setText(QCoreApplication::translate("view", ".", nullptr));
        btn_4->setText(QCoreApplication::translate("view", "4", nullptr));
        btn_8->setText(QCoreApplication::translate("view", "8", nullptr));
        btn_3->setText(QCoreApplication::translate("view", "3", nullptr));
        btn_x->setText(QCoreApplication::translate("view", "x", nullptr));
        btn_close->setText(QCoreApplication::translate("view", ")", nullptr));
        btn_1->setText(QCoreApplication::translate("view", "1", nullptr));
        btn_7->setText(QCoreApplication::translate("view", "7", nullptr));
        btn_2->setText(QCoreApplication::translate("view", "2", nullptr));
        btn_0->setText(QCoreApplication::translate("view", "0", nullptr));
        btn_un_min->setText(QCoreApplication::translate("view", "/ - /", nullptr));
        btn_open->setText(QCoreApplication::translate("view", "(", nullptr));
        btn_mul->setText(QCoreApplication::translate("view", "*", nullptr));
        btn_clr->setText(QCoreApplication::translate("view", "C", nullptr));
        btn_graph->setText(QCoreApplication::translate("view", "graph", nullptr));
        btn_plus->setText(QCoreApplication::translate("view", "+", nullptr));
        btn_sqrt->setText(QCoreApplication::translate("view", "sqrt", nullptr));
        btn_mod->setText(QCoreApplication::translate("view", "mod", nullptr));
        btn_bin_min->setText(QCoreApplication::translate("view", "-", nullptr));
        btn_div->setText(QCoreApplication::translate("view", "/", nullptr));
        btn_calc->setText(QCoreApplication::translate("view", "=", nullptr));
        btn_pow->setText(QCoreApplication::translate("view", "x^y", nullptr));
        btn_atan->setText(QCoreApplication::translate("view", "atan", nullptr));
        btn_sin->setText(QCoreApplication::translate("view", "sin", nullptr));
        btn_log->setText(QCoreApplication::translate("view", "log", nullptr));
        btn_acos->setText(QCoreApplication::translate("view", "acos", nullptr));
        btn_cos->setText(QCoreApplication::translate("view", "cos", nullptr));
        btn_tan->setText(QCoreApplication::translate("view", "tan", nullptr));
        btn_asin->setText(QCoreApplication::translate("view", "asin", nullptr));
        btn_deposit->setText(QCoreApplication::translate("view", "deposit", nullptr));
        btn_ln->setText(QCoreApplication::translate("view", "ln", nullptr));
        btn_credit->setText(QCoreApplication::translate("view", "credit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class view: public Ui_view {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
