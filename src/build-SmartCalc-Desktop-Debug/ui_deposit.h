/********************************************************************************
** Form generated from reading UI file 'deposit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSIT_H
#define UI_DEPOSIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Deposit
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QDateEdit *d_date;
    QTextEdit *d_data;
    QLineEdit *d_int;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *d_value;
    QLabel *label_2;
    QLineEdit *d_tax;
    QLabel *label_7;
    QLabel *label_11;
    QLabel *label_3;
    QLabel *label_10;
    QLineEdit *d_term;
    QLabel *label_5;
    QPushButton *btn_calc;
    QDateEdit *d_add_date;
    QPushButton *btn_add;
    QTextEdit *d_add_display;
    QPushButton *btn_clr_displ;
    QLineEdit *d_add_value;
    QComboBox *d_reinvest;

    void setupUi(QWidget *Deposit)
    {
        if (Deposit->objectName().isEmpty())
            Deposit->setObjectName(QString::fromUtf8("Deposit"));
        Deposit->resize(640, 710);
        label = new QLabel(Deposit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 0, 281, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(Deposit);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 50, 591, 631));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(20);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 2, 1, 1);

        d_date = new QDateEdit(gridLayoutWidget);
        d_date->setObjectName(QString::fromUtf8("d_date"));

        gridLayout->addWidget(d_date, 0, 1, 1, 1);

        d_data = new QTextEdit(gridLayoutWidget);
        d_data->setObjectName(QString::fromUtf8("d_data"));
        d_data->setMinimumSize(QSize(0, 60));

        gridLayout->addWidget(d_data, 8, 0, 1, 3);

        d_int = new QLineEdit(gridLayoutWidget);
        d_int->setObjectName(QString::fromUtf8("d_int"));

        gridLayout->addWidget(d_int, 3, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 2, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 4, 0, 1, 1);

        d_value = new QLineEdit(gridLayoutWidget);
        d_value->setObjectName(QString::fromUtf8("d_value"));

        gridLayout->addWidget(d_value, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        d_tax = new QLineEdit(gridLayoutWidget);
        d_tax->setObjectName(QString::fromUtf8("d_tax"));

        gridLayout->addWidget(d_tax, 4, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 5, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 4, 2, 1, 1);

        d_term = new QLineEdit(gridLayoutWidget);
        d_term->setObjectName(QString::fromUtf8("d_term"));

        gridLayout->addWidget(d_term, 2, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        btn_calc = new QPushButton(gridLayoutWidget);
        btn_calc->setObjectName(QString::fromUtf8("btn_calc"));
        btn_calc->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(btn_calc, 9, 0, 1, 3);

        d_add_date = new QDateEdit(gridLayoutWidget);
        d_add_date->setObjectName(QString::fromUtf8("d_add_date"));

        gridLayout->addWidget(d_add_date, 6, 1, 1, 1);

        btn_add = new QPushButton(gridLayoutWidget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));

        gridLayout->addWidget(btn_add, 6, 2, 1, 1);

        d_add_display = new QTextEdit(gridLayoutWidget);
        d_add_display->setObjectName(QString::fromUtf8("d_add_display"));
        d_add_display->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(d_add_display, 7, 0, 1, 2);

        btn_clr_displ = new QPushButton(gridLayoutWidget);
        btn_clr_displ->setObjectName(QString::fromUtf8("btn_clr_displ"));

        gridLayout->addWidget(btn_clr_displ, 7, 2, 1, 1);

        d_add_value = new QLineEdit(gridLayoutWidget);
        d_add_value->setObjectName(QString::fromUtf8("d_add_value"));

        gridLayout->addWidget(d_add_value, 6, 0, 1, 1);

        d_reinvest = new QComboBox(gridLayoutWidget);
        d_reinvest->setObjectName(QString::fromUtf8("d_reinvest"));

        gridLayout->addWidget(d_reinvest, 5, 1, 1, 1);


        retranslateUi(Deposit);

        QMetaObject::connectSlotsByName(Deposit);
    } // setupUi

    void retranslateUi(QWidget *Deposit)
    {
        Deposit->setWindowTitle(QCoreApplication::translate("Deposit", "Form", nullptr));
        label->setText(QCoreApplication::translate("Deposit", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200 \320\262\320\272\320\273\320\260\320\264\320\276\320\262", nullptr));
        label_6->setText(QCoreApplication::translate("Deposit", "% \320\263\320\276\320\264\320\276\320\262\321\213\321\205", nullptr));
        label_4->setText(QCoreApplication::translate("Deposit", "\320\274\320\265\321\201.", nullptr));
        label_8->setText(QCoreApplication::translate("Deposit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_9->setText(QCoreApplication::translate("Deposit", "\320\235\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("Deposit", "\320\224\320\260\321\202\320\260 \320\262\320\272\320\273\320\260\320\264\320\260", nullptr));
        label_7->setText(QCoreApplication::translate("Deposit", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260", nullptr));
        label_11->setText(QCoreApplication::translate("Deposit", "\320\237\320\265\321\200\320\270\320\276\320\264 \321\200\320\265\320\270\320\275\320\262\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("Deposit", "\321\200\321\203\320\261.", nullptr));
        label_10->setText(QCoreApplication::translate("Deposit", "%", nullptr));
        label_5->setText(QCoreApplication::translate("Deposit", "\320\241\321\200\320\276\320\272 \321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320\270\321\217", nullptr));
        btn_calc->setText(QCoreApplication::translate("Deposit", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        btn_add->setText(QCoreApplication::translate("Deposit", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        btn_clr_displ->setText(QCoreApplication::translate("Deposit", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        d_add_value->setPlaceholderText(QCoreApplication::translate("Deposit", "(+) \320\262\320\267\320\275\320\276\321\201 / (-) \321\201\320\275\321\217\321\202\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Deposit: public Ui_Deposit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSIT_H
