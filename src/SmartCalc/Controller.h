#pragma once

#include "Model.h"
#include <QDebug>
#include <QString>
#include <vector>

namespace s21 {
class Controller {
 private:
  s21::Model *model;
  double data;
  std::map<double, double> plotData;

 public:
  explicit Controller(s21::Model *m) : model(m), data(0) {}
  QString calculate(const QString &str, double x = 0);
  QString calculatePlot(const QString &str, double xMin, double xMax);
  QString calcDeposit(double term, double val, double interest, double tax,
                      int reinvest, time_t d_date,
                      std::map<time_t, double> payments);
  double getData();
  const std::map<double, double> &getPlotData();
};
};  // namespace s21
