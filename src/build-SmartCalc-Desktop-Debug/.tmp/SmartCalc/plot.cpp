#include "plot.h"
#include "ui_plot.h"

Plot::Plot(s21::Controller *controller, QWidget *parent)
    : QWidget(parent), ui(new Ui::Plot), c(controller), xMin(-1), xMax(1),
      yMin(-1), yMax(1) {
  ui->setupUi(this);
  connect(ui->pushButton, SIGNAL(clicked), this, SLOT(on_pushButton_clicked));
}

QString Plot::draw(QString _inp) {
  inp = _inp;
    ui->lbl_xmin->setText(QString::number(xMin));
    ui->lbl_xmax->setText(QString::number(xMax));
    ui->lbl_ymin->setText(QString::number(yMin));
    ui->lbl_ymax->setText(QString::number(yMax));
  series = new QLineSeries();
  QString err = c->calculatePlot(inp, xMin, xMax);
  std::map<double, double> d = c->getPlotData();
  for (const auto &[key, value] : d) {
    series->append(key, value);
  }
  chart = new QChart();
  chart->legend()->hide();
  chart->addSeries(series);
  chart->createDefaultAxes();
  chart->setTitle(inp);
  chartView = new QChartView(chart);
  chartView->setRenderHint(QPainter::Antialiasing);
  auto layout = new QVBoxLayout();
  layout->addWidget(chartView);
  ui->frame->setLayout(layout);
  chart->axisY()->setRange(yMin, yMax);
  return err;
}

Plot::~Plot() { delete ui; }

void Plot::on_pushButton_clicked() {
  yMin = ui->lbl_ymin->text().toDouble();
  yMax = ui->lbl_ymax->text().toDouble();
  xMin = ui->lbl_xmin->text().toDouble();
  xMax = ui->lbl_xmax->text().toDouble();
  series->clear();
  c->calculatePlot(inp, xMin, xMax);
  std::map<double, double> d = c->getPlotData();
  for (const auto &[key, value] : d) {
    series->append(key, value);
  }
  chartView->repaint();
  chart->axisX()->setRange(xMin, xMax);
  chart->axisY()->setRange(yMin, yMax);
}
