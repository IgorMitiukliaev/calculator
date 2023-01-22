#include "Controller.h"

using s21::Controller, s21::Model;

QString Controller::calculate(const QString &str, double x) {
  QString err;
  try {
    model->readStr(str.toStdString());

    data = model->calculateQueue(model->sortQueue(), x);
  } catch (const std::invalid_argument &e) {
    err = e.what();
  }
  return err;
}

QString Controller::calculatePlot(const QString &str, double xMin,
                                  double xMax) {
  QString err;
  std::queue<Model::Lexeme> qu;
  plotData.clear();
  try {
    double inc = (xMax - xMin) / 1000;
    double xCurr = xMin;
    for (int i = 0; i < 1000; i++) {
      model->readStr(str.toStdString());
      qu = model->sortQueue();
      data = model->calculateQueue(qu, xCurr);
      plotData.insert({xCurr, data});
      xCurr = xMin + i * inc;
    }
  } catch (const std::invalid_argument &e) {
    err = e.what();
  }
  return err;
}

QString Controller::calcDeposit(double term, double val, double interest,
                                double tax, int reinvest, time_t d_date,
                                std::map<time_t, double> payments) {
  qDebug() << "controller";
  QString res;
  try {
    double add_pay_value = std::accumulate(
        payments.begin(), payments.end(), 0,
        [](double acc, std::pair<time_t, double> m) { return acc + m.second; });

    double res_val = model->calcDeposit((int)term, val, interest, reinvest,
                                        d_date, payments);
    res.append("Начислено процентов ");
    res.append(QString::number(res_val - add_pay_value - val, 'f', 2));
    res.append("руб,\nСумма налога ");
    res.append(
        QString::number((res_val - add_pay_value - val) * tax / 100, 'f', 2));
    res.append("руб,\nСумма на депозите к концу срока  ");
    res.append(QString::number(res_val, 'f', 2));
    res.append("руб");
  } catch (const std::invalid_argument &e) {
    std::cout << e.what() << std::endl;
    res = e.what();
  }
  return res;
}

double Controller::getData() { return data; }
const std::map<double, double> &Controller::getPlotData() { return plotData; }
