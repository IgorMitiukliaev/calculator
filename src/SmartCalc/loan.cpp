#include "loan.h"
#include "ui_loan.h"

/**
 * @brief Loan::Loan
 * Намеренно не стал переносить логику в Модель, так как:
 * 1. Методы основной части не использульзуются в этом задании,
 * 2. Разделение приведёт к усложнению кода, которое ничем не обосновано
 */
Loan::Loan(s21::Controller *controller, QWidget *parent)
    : QWidget(parent), ui(new Ui::Loan), c(controller) {
  ui->setupUi(this);
  connect(ui->btn_calc, SIGNAL(clicked), this, SLOT(on_btn_calc_clicked));
  connect(ui->chb_cr_type, SIGNAL(stateChanged), this,
          SLOT(on_chb_cr_type_toggled));
}

Loan::~Loan() { delete ui; }

void Loan::on_btn_calc_clicked() {
  qDebug() << "calc";
  calcLoan();
}

void Loan::on_chb_cr_type_toggled() {
  qDebug() << ui->chb_cr_type->checkState();
  if (ui->chb_cr_type->checkState() == Qt::Unchecked)
    ui->lbl_cr_type->setText("Дифференцированный");
  else
    ui->lbl_cr_type->setText("Аннуитетный");
}

void Loan::calcLoan() {
  double m_payment, t_payment, t_interest;
  QTextEdit *cr_data = ui->cr_data;
  QString payment_str = 0;
  interest = ui->cr_int->text().toDouble();
  term = ui->cr_term->text().toDouble();
  val = ui->cr_val->text().toDouble();
  if (ui->chb_cr_type->checkState() == Qt::Unchecked) {
    // Дифференцированный
    t_interest = 0;
    t_payment = 0;
    cr_data->clear();
    for (int i = 1; i <= term; i++) {
      m_payment = val / term + val * (1 - (i - 1) / term) * (interest / 1200);
      t_payment += m_payment;
      t_interest = t_payment - val;
      payment_str = "Платеж " + QString::number(i) + " = " +
                    QString::number(m_payment, 'f', 2) + "руб";
      cr_data->append(payment_str);
    }
    payment_str =
        "Выплаты по процентам = " + QString::number(t_interest, 'f', 2) + "руб";
    cr_data->append(payment_str);
    payment_str =
        "Полная выплата по кредиту = " + QString::number(t_payment, 'f', 2) +
        "руб";
    cr_data->append(payment_str);
  } else {
    // Аннуитетный
    cr_data->clear();
    m_payment =
        val * interest / 1200 / (1 - pow(1 + interest / 1200, -1 * term));
    payment_str =
        "Ежемесячный платёж = " + QString::number(m_payment, 'f', 2) + "руб";
                                                        cr_data->append(payment_str);
    t_payment = term * m_payment;
    t_interest = t_payment - val;
    payment_str =
        "Выплаты по процентам = " + QString::number(t_interest, 'f', 2) + "руб";
    cr_data->append(payment_str);
    payment_str =
        "Полная выплата по кредиту = " + QString::number(t_payment, 'f', 2) +
        "руб";
    cr_data->append(payment_str);
  }
}
