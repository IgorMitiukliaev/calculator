#pragma once

#include "Controller.h"
#include <QWidget>
#include <ctime>

namespace Ui {
class Deposit;
}

class Deposit : public QWidget {
  Q_OBJECT

 public:
  explicit Deposit(s21::Controller *controller, QWidget *parent = nullptr);
  ~Deposit();

 private slots:
  void on_btn_add_clicked();
  void on_btn_clr_displ_clicked();
  void on_btn_calc_clicked();

 private:
  Ui::Deposit *ui;
  s21::Controller *c;
  std::map<time_t, double> payments;
  void calcDeposit();
  void addPayment();
  void clearPayments();
};
