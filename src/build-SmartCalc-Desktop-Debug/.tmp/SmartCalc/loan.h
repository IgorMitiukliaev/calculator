#pragma once

#include "Controller.h"
#include <QDebug>
#include <QWidget>

namespace Ui {
class Loan;
}

class Loan : public QWidget {
  Q_OBJECT

 public:
  explicit Loan(s21::Controller *controller, QWidget *parent = nullptr);
  ~Loan();

 private slots:
  void on_btn_calc_clicked();
  void on_chb_cr_type_toggled();

 private:
  Ui::Loan *ui;
  s21::Controller *c;
  double val;
  double interest;
  double term;
  bool type_ann;

  void switchType();
  void calcLoan();
};
