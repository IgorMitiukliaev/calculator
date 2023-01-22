#include "View.h"
#include "./ui_view.h"
#include "Controller.h"

using s21::view, s21::Controller, s21::Model;

view::view(s21::Controller *controller, QWidget *parent)
  : QMainWindow(parent), ui(new Ui::view), c(controller) {
  ui->setupUi(this);
  objectsMapping();
}

view::~view() { delete ui; }

void view::changeText(const QString &str) { ui->display->insertPlainText(str); }

void view::clearLine() {
  QString str = ui->display->toPlainText();
  QRegularExpression reg = QRegularExpression("(.+)(\\r?\\n.+$)");
  QRegularExpressionMatchIterator i = reg.globalMatch(str);
  QRegularExpressionMatch match;
  while(i.hasNext())
    match = i.next();
  int ind = match.capturedEnd(1);
  str = str.left(++ind);
  ui->display->setText(str);
  ui->display->verticalScrollBar()->setValue(
        ui->display->verticalScrollBar()->maximum());
}

void view::calculate() {
  QString str;
  QString x_inp = 0;
  bool ok = true;

  readInput();
  double x_val = 0;
  if (inp.indexOf("x") != -1) {
      x_inp = QInputDialog::getText(0, "Input dialog", "x = ", QLineEdit::Normal,
                                    "", &ok);
      x_val = x_inp.toDouble();
    }

  if (ok) {
      QString err = c->calculate(inp, x_val);
      if (err.length() > 0) {
          str = err;
        } else {
          double res = c->getData();
          str = QString::number(res);
        }
      if (x_inp.length() > 0) {
          str = "x = " + QString::number(x_val) + "; f(x) = " + str;
        }
      ui->display->append(str);
      ui->display->verticalScrollBar()->setValue(
            ui->display->verticalScrollBar()->maximum());
    }
}

void view::readInput() {
  inp = ui->display->toPlainText();
  while (inp.length() > 0 && inp[inp.length() - 1] == '\n')
    inp = inp.left(inp.length() - 1);
  int ind = inp.lastIndexOf("\n") + 1;
  inp = inp.right(inp.length() - ind);
}

void view::showPlot() {
  readInput();
  plot = new Plot(c);
  plot->show();
  plot->draw(inp);
}

void view::showLoan() {
  loan = new Loan(c);
  loan->show();
}

void view::showDeposit() {
  deposit = new Deposit(c);
  deposit->show();
}

void view::objectsMapping() {
  connect(ui->btn_1, &QPushButton::clicked, this,
          [this]() { changeText("1"); });
  connect(ui->btn_2, &QPushButton::clicked, this,
          [this]() { changeText("2"); });
  connect(ui->btn_3, &QPushButton::clicked, this,
          [this]() { changeText("3"); });
  connect(ui->btn_4, &QPushButton::clicked, this,
          [this]() { changeText("4"); });
  connect(ui->btn_5, &QPushButton::clicked, this,
          [this]() { changeText("5"); });
  connect(ui->btn_6, &QPushButton::clicked, this,
          [this]() { changeText("6"); });
  connect(ui->btn_7, &QPushButton::clicked, this,
          [this]() { changeText("7"); });
  connect(ui->btn_8, &QPushButton::clicked, this,
          [this]() { changeText("8"); });
  connect(ui->btn_9, &QPushButton::clicked, this,
          [this]() { changeText("9"); });
  connect(ui->btn_0, &QPushButton::clicked, this,
          [this]() { changeText("0"); });
  connect(ui->btn_dot, &QPushButton::clicked, this,
          [this]() { changeText("."); });
  connect(ui->btn_un_min, &QPushButton::clicked, this,
          [this]() { changeText("-"); });
  connect(ui->btn_open, &QPushButton::clicked, this,
          [this]() { changeText("("); });
  connect(ui->btn_close, &QPushButton::clicked, this,
          [this]() { changeText(")"); });
  connect(ui->btn_mul, &QPushButton::clicked, this,
          [this]() { changeText("*"); });
  connect(ui->btn_bin_min, &QPushButton::clicked, this,
          [this]() { changeText("-"); });
  connect(ui->btn_plus, &QPushButton::clicked, this,
          [this]() { changeText("+"); });
  connect(ui->btn_div, &QPushButton::clicked, this,
          [this]() { changeText("/"); });
  connect(ui->btn_x, &QPushButton::clicked, this,
          [this]() { changeText("x"); });
  connect(ui->btn_sin, &QPushButton::clicked, this,
          [this]() { changeText("sin"); });
  connect(ui->btn_asin, &QPushButton::clicked, this,
          [this]() { changeText("asin"); });
  connect(ui->btn_cos, &QPushButton::clicked, this,
          [this]() { changeText("cos"); });
  connect(ui->btn_tan, &QPushButton::clicked, this,
          [this]() { changeText("tan"); });
  connect(ui->btn_acos, &QPushButton::clicked, this,
          [this]() { changeText("acos"); });
  connect(ui->btn_atan, &QPushButton::clicked, this,
          [this]() { changeText("atan"); });
  connect(ui->btn_log, &QPushButton::clicked, this,
          [this]() { changeText("log"); });
  connect(ui->btn_ln, &QPushButton::clicked, this,
          [this]() { changeText("ln"); });
  connect(ui->btn_mod, &QPushButton::clicked, this,
          [this]() { changeText("mod"); });
  connect(ui->btn_pow, &QPushButton::clicked, this,
          [this]() { changeText("^"); });
  connect(ui->btn_sqrt, &QPushButton::clicked, this,
          [this]() { changeText("sqrt"); });
  connect(ui->btn_clr, &QPushButton::clicked, this, [this]() { clearLine(); });
  connect(ui->btn_calc, &QPushButton::clicked, this, [this]() { calculate(); });
  connect(ui->btn_graph, &QPushButton::clicked, this, [this]() { showPlot(); });
  connect(ui->btn_credit, &QPushButton::clicked, this,
          [this]() { showLoan(); });
  connect(ui->btn_deposit, &QPushButton::clicked, this,
          [this]() { showDeposit(); });
}
