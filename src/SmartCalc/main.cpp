#include "Controller.h"
#include "Model.h"
#include "View.h"
#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  s21::Model m;
  s21::Controller c(&m);
  s21::view w(&c);
  w.show();
  return a.exec();
}
