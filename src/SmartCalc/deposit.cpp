#include "deposit.h"
#include "ui_deposit.h"

/**
 * @brief Deposit::Deposit
 * А здесь посчитал целесообразным разделить код
 * Модель проводит вычисления
 * Контроллер готовит выходную строку для Представления
 * Представление взаимодействует с пользователем
 */
Deposit::Deposit(s21::Controller *controller, QWidget *parent)
    : QWidget(parent), ui(new Ui::Deposit), c(controller) {
  ui->setupUi(this);
  ui->d_reinvest->addItem("1 раз в год", 1);
  ui->d_reinvest->addItem("1 раз в квартал", 4);
  ui->d_reinvest->addItem("1 раз в месяц", 12);
  ui->d_reinvest->addItem("Не реинвестировать", 0);

  connect(ui->btn_add, SIGNAL(clicked()), this, SLOT(on_btn_add_clicked));
  connect(ui->btn_calc, SIGNAL(clicked()), this, SLOT(on_btn_calc_clicked));
  connect(ui->btn_clr_displ, SIGNAL(clicked()), this,
          SLOT(on_btn_clr_displ_clicked));
}

void Deposit::calcDeposit() {
  std::tm pay_date{};
  double term = ui->d_term->text().toDouble();
  double val = ui->d_value->text().toDouble();
  double interest = ui->d_int->text().toDouble();
  double tax = ui->d_tax->text().toDouble();
  int reinvest = ui->d_reinvest->currentData().toInt();

  pay_date.tm_year = ui->d_date->date().year() - 1900;
  pay_date.tm_mon = ui->d_date->date().month() - 1;
  pay_date.tm_mday = ui->d_date->date().day();

  QString res = c->calcDeposit(term, val, interest, tax, reinvest,
                               std::mktime(&pay_date), payments);
  ui->d_data->setText(res);
}

void Deposit::addPayment() {
  std::tm pay_date{};
  double _val = ui->d_add_value->text().toDouble();
  pay_date.tm_year = ui->d_add_date->date().year() - 1900;
  pay_date.tm_mon = ui->d_add_date->date().month() - 1;
  pay_date.tm_mday = ui->d_add_date->date().day();
  payments.insert({std::mktime(&pay_date), _val});

  QString tmp = ui->d_add_date->date().toString("d MMMM yyyy");
  tmp.append("\t");
  tmp.append(QString::number(_val, 'f', 2));
  tmp.append("руб.");
  ui->d_add_display->append(tmp);
}

void Deposit::clearPayments() {
  qDebug() << "clearPayments";
  payments.clear();
  ui->d_add_display->clear();
}

Deposit::~Deposit() { delete ui; }

void Deposit::on_btn_add_clicked() { addPayment(); }

void Deposit::on_btn_clr_displ_clicked() { clearPayments(); }

void Deposit::on_btn_calc_clicked() { calcDeposit(); }
