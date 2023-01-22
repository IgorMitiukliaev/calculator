/********************************************************************************
** Form generated from reading UI file 'plot.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOT_H
#define UI_PLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Plot
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lbl_xmax;
    QLineEdit *lbl_ymax;
    QLineEdit *lbl_xmin;
    QLineEdit *lbl_ymin;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QFrame *frame;

    void setupUi(QWidget *Plot)
    {
        if (Plot->objectName().isEmpty())
            Plot->setObjectName(QString::fromUtf8("Plot"));
        Plot->resize(800, 600);
        gridLayoutWidget = new QWidget(Plot);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(630, 10, 160, 191));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lbl_xmax = new QLineEdit(gridLayoutWidget);
        lbl_xmax->setObjectName(QString::fromUtf8("lbl_xmax"));

        gridLayout->addWidget(lbl_xmax, 1, 1, 1, 1);

        lbl_ymax = new QLineEdit(gridLayoutWidget);
        lbl_ymax->setObjectName(QString::fromUtf8("lbl_ymax"));

        gridLayout->addWidget(lbl_ymax, 3, 1, 1, 1);

        lbl_xmin = new QLineEdit(gridLayoutWidget);
        lbl_xmin->setObjectName(QString::fromUtf8("lbl_xmin"));

        gridLayout->addWidget(lbl_xmin, 0, 1, 1, 1);

        lbl_ymin = new QLineEdit(gridLayoutWidget);
        lbl_ymin->setObjectName(QString::fromUtf8("lbl_ymin"));

        gridLayout->addWidget(lbl_ymin, 2, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        pushButton = new QPushButton(Plot);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(630, 210, 161, 25));
        frame = new QFrame(Plot);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 600, 580));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(Plot);

        QMetaObject::connectSlotsByName(Plot);
    } // setupUi

    void retranslateUi(QWidget *Plot)
    {
        Plot->setWindowTitle(QCoreApplication::translate("Plot", "Graph", nullptr));
        label->setText(QCoreApplication::translate("Plot", "Xmin", nullptr));
        label_2->setText(QCoreApplication::translate("Plot", "Xmax", nullptr));
        label_3->setText(QCoreApplication::translate("Plot", "Ymin", nullptr));
        label_4->setText(QCoreApplication::translate("Plot", "Ymax", nullptr));
        pushButton->setText(QCoreApplication::translate("Plot", "draw", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Plot: public Ui_Plot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOT_H
