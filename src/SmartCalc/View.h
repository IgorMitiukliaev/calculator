#pragma once

#include "Controller.h"
#include "deposit.h"
#include "loan.h"
#include "plot.h"
#include <QDebug>
#include <QInputDialog>
#include <QMainWindow>
#include <QRegularExpression>
#include <QScrollBar>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class view;
}
QT_END_NAMESPACE

namespace s21 {
class view : public QMainWindow {
  Q_OBJECT

 public:
  explicit view(s21::Controller *c, QWidget *parent = nullptr);
  ~view();

 public slots:
  void changeText(const QString &str);

 private:
  QString inp;
  Ui::view *ui;
  s21::Controller *c;
  Plot *plot;
  Loan *loan;
  Deposit *deposit;
  void objectsMapping();
  void clearLine();
  void calculate();
  void showPlot();
  void readInput();
  void showLoan();
  void showDeposit();
};
}  // namespace s21
