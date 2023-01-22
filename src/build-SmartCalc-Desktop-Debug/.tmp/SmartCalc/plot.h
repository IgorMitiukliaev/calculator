#pragma once

#include "Controller.h"
#include <QString>
#include <QWidget>
#include <QtCharts>

namespace Ui {
class Plot;
}

class Plot : public QWidget {
  Q_OBJECT

 public:
  explicit Plot(s21::Controller *controller, QWidget *parent = nullptr);
  ~Plot();
  QString draw(QString inp);

 private slots:
  void on_pushButton_clicked();

 private:
  Ui::Plot *ui;
  s21::Controller *c;
  QChart *chart;
  QChartView *chartView;
  QLineSeries *series = new QLineSeries();
  double xMin, xMax, yMin, yMax;
  QString inp;
};
