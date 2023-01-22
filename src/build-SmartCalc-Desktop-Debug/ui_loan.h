/********************************************************************************
** Form generated from reading UI file 'loan.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOAN_H
#define UI_LOAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Loan
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *lbl_cr_type;
    QPushButton *btn_calc;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_6;
    QCheckBox *chb_cr_type;
    QTextEdit *cr_data;
    QLineEdit *cr_val;
    QLineEdit *cr_term;
    QLineEdit *cr_int;

    void setupUi(QWidget *Loan)
    {
        if (Loan->objectName().isEmpty())
            Loan->setObjectName(QString::fromUtf8("Loan"));
        Loan->resize(647, 503);
        label = new QLabel(Loan);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 20, 361, 20));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(Loan);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 70, 591, 391));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(20);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        lbl_cr_type = new QLabel(gridLayoutWidget);
        lbl_cr_type->setObjectName(QString::fromUtf8("lbl_cr_type"));

        gridLayout->addWidget(lbl_cr_type, 4, 2, 1, 1);

        btn_calc = new QPushButton(gridLayoutWidget);
        btn_calc->setObjectName(QString::fromUtf8("btn_calc"));
        btn_calc->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(btn_calc, 6, 0, 1, 3);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 4, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 2, 1, 1);

        chb_cr_type = new QCheckBox(gridLayoutWidget);
        chb_cr_type->setObjectName(QString::fromUtf8("chb_cr_type"));

        gridLayout->addWidget(chb_cr_type, 4, 1, 1, 1);

        cr_data = new QTextEdit(gridLayoutWidget);
        cr_data->setObjectName(QString::fromUtf8("cr_data"));
        cr_data->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(cr_data, 5, 0, 1, 3);

        cr_val = new QLineEdit(gridLayoutWidget);
        cr_val->setObjectName(QString::fromUtf8("cr_val"));

        gridLayout->addWidget(cr_val, 0, 1, 1, 1);

        cr_term = new QLineEdit(gridLayoutWidget);
        cr_term->setObjectName(QString::fromUtf8("cr_term"));

        gridLayout->addWidget(cr_term, 1, 1, 1, 1);

        cr_int = new QLineEdit(gridLayoutWidget);
        cr_int->setObjectName(QString::fromUtf8("cr_int"));

        gridLayout->addWidget(cr_int, 3, 1, 1, 1);


        retranslateUi(Loan);

        QMetaObject::connectSlotsByName(Loan);
    } // setupUi

    void retranslateUi(QWidget *Loan)
    {
        Loan->setWindowTitle(QCoreApplication::translate("Loan", "Form", nullptr));
        label->setText(QCoreApplication::translate("Loan", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        label_7->setText(QCoreApplication::translate("Loan", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("Loan", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        lbl_cr_type->setText(QCoreApplication::translate("Loan", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271", nullptr));
        btn_calc->setText(QCoreApplication::translate("Loan", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_8->setText(QCoreApplication::translate("Loan", "\320\242\320\270\320\277 \320\277\320\273\320\260\321\202\320\265\320\266\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("Loan", "\320\274\320\265\321\201.", nullptr));
        label_3->setText(QCoreApplication::translate("Loan", "\321\200\321\203\320\261.", nullptr));
        label_2->setText(QCoreApplication::translate("Loan", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("Loan", "% \320\263\320\276\320\264\320\276\320\262\321\213\321\205", nullptr));
        chb_cr_type->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Loan: public Ui_Loan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOAN_H
