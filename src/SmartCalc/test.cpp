#include "Model.h"
#include <ctime>
#include <gtest/gtest.h>
#include <stdexcept>
#include <string>

TEST(model, s21_calc_simple) {
  double x, res, exp_res;
  std::string string = "-x+1+x*2.5e4-10/x-x*(10-x)";
  x = 2.5;
  exp_res = -x + 1 + x * 2.5e4 - 10 / x - x * (10 - x);
  s21::Model m;
  m.readStr(string);
  m.sortQueue();
  res = m.calculateQueue(m._qu, x);
  ASSERT_EQ(exp_res, res);

  x = 1e7;
  exp_res = -x + 1 + x * 2.5e4 - 10 / x - x * (10 - x);
  m.readStr(string);
  m.sortQueue();
  res = m.calculateQueue(m._qu, x);
  ASSERT_EQ(exp_res, res);

  x = -1e-7;
  exp_res = -x + 1 + x * 2.5e4 - 10 / x - x * (10 - x);
  m.readStr(string);
  m.sortQueue();
  res = m.calculateQueue(m._qu, x);
  ASSERT_EQ(exp_res, res);

  x = 0;
  exp_res = -x + 1 + x * 2.5e4 - 10 / x - x * (10 - x);
  m.readStr(string);
  m.sortQueue();
  res = m.calculateQueue(m._qu, x);
  ASSERT_EQ(exp_res, res);
}

TEST(model, s21_calc_func) {
  double res, exp_res;
  std::string string = "log(x)";
  s21::Model m;
  for (double x = 1e-20; x < 1e20; x *= 5) {
    exp_res = log10(x);
    m.readStr(string);
    m.sortQueue();
    res = m.calculateQueue(m._qu, x);
    ASSERT_EQ(exp_res, res);
  }

  string = "ln(x)";
  for (double x = 1e-20; x < 1e20; x *= 5) {
    exp_res = log(x);
    m.readStr(string);
    m.sortQueue();
    res = m.calculateQueue(m._qu, x);
    ASSERT_EQ(exp_res, res);
  }

  string = "sqrt(x)";
  for (double x = 1e-20; x < 1e20; x *= 5) {
    exp_res = sqrt(x);
    m.readStr(string);
    m.sortQueue();
    res = m.calculateQueue(m._qu, x);
    ASSERT_EQ(exp_res, res);
  }

  string = "1.5^x";
  for (double x = 1e-20; x < 5000; x *= -5) {
    exp_res = pow(1.5, x);
    m.readStr(string);
    m.sortQueue();
    res = m.calculateQueue(m._qu, x);
    ASSERT_EQ(exp_res, res);
  }
}

TEST(model, s21_calc_trig) {
  double res, exp_res;
  std::string string = "sin(x)";
  s21::Model m;
  for (double x = 1e-20; x < 5000; x *= 5) {
    exp_res = sin(x);
    m.readStr(string);
    m.sortQueue();
    res = m.calculateQueue(m._qu, x);
    ASSERT_EQ(exp_res, res);
  }

  string = "asin(x)";
  for (double x = 1e-20; fabs(x) < 1; x *= -5) {
    exp_res = asin(x);
    m.readStr(string);
    m.sortQueue();
    res = m.calculateQueue(m._qu, x);
    ASSERT_EQ(exp_res, res);
  }

  string = "cos(x)";
  for (double x = 1e-20; x < 5000; x *= 5) {
    exp_res = cos(x);
    m.readStr(string);
    m.sortQueue();
    res = m.calculateQueue(m._qu, x);
    ASSERT_EQ(exp_res, res);
  }

  string = "acos(x)";
  for (double x = 1e-20; fabs(x) < 1; x *= -5) {
    exp_res = acos(x);
    m.readStr(string);
    m.sortQueue();
    res = m.calculateQueue(m._qu, x);
    ASSERT_EQ(exp_res, res);
  }

  string = "tan(x)";
  for (double x = 1e-20; x < 5000; x *= 5) {
    exp_res = tan(x);
    m.readStr(string);
    m.sortQueue();
    res = m.calculateQueue(m._qu, x);
    ASSERT_EQ(exp_res, res);
  }

  string = "atan(x)";
  for (double x = 1e-20; fabs(x) < 1; x *= -5) {
    exp_res = atan(x);
    m.readStr(string);
    m.sortQueue();
    res = m.calculateQueue(m._qu, x);
    ASSERT_EQ(exp_res, res);
  }
}

TEST(model, exceptions) {
  {
    std::string string = "1+(2";
    s21::Model m;
    m.readStr(string);
    ASSERT_THROW(m.sortQueue(), std::invalid_argument);
  }
  {
    std::string string = "1+2)";
    s21::Model m;
    m.readStr(string);
    ASSERT_THROW(m.sortQueue(), std::invalid_argument);
  }
  {
    std::string string = "2++1";
    s21::Model m;
    m.readStr(string);
    m.sortQueue();
    ASSERT_THROW(m.calculateQueue(m._qu, 0), std::invalid_argument);
  }
  {
    std::string string = "2divide by1";
    s21::Model m;
    ASSERT_THROW(m.readStr(string);, std::invalid_argument);
  }
}

TEST(model, deposit) {
  {
    double res, exp_res;
    s21::Model m;
    exp_res = 120;
    res = m.calcDeposit(24, 100, 10, 0, time_t{}, std::map<time_t, double>{});
    ASSERT_EQ(exp_res, res);
  }
  {
    double res, exp_res;
    std::tm tm{};
    tm.tm_year = 100;
    tm.tm_mday = tm.tm_mon = 1;
    std::map<time_t, double> payments{};
    payments.insert(std::pair<std::time_t, double>{std::mktime(&tm), 100});
    s21::Model m;
    exp_res = 220;
    res = m.calcDeposit(12, 100, 10, 1, std::mktime(&tm), payments);
    ASSERT_DOUBLE_EQ(exp_res, res);
  }
  {
    double res, exp_res;
    std::tm tm{}, pay_tm{};
    tm.tm_year = 100;
    pay_tm.tm_year = 101;
    pay_tm.tm_mday = tm.tm_mday = 1;
    tm.tm_mon = pay_tm.tm_mon = 11;
    std::map<time_t, double> payments{};
    payments.insert(std::pair<std::time_t, double>{std::mktime(&pay_tm), 100});
    s21::Model m;
    exp_res = 230;
    res = m.calcDeposit(24, 100, 10, 0, std::mktime(&tm), payments);
    ASSERT_DOUBLE_EQ(exp_res, res);
  }
  {
    std::tm tm{};
    tm.tm_year = 100;
    tm.tm_mday = tm.tm_mon = 1;
    std::map<time_t, double> payments{};
    payments.insert(std::pair<std::time_t, double>{std::mktime(&tm) - 1, 100});
    s21::Model m;
    ASSERT_THROW(m.calcDeposit(12, 100, 10, 1, std::mktime(&tm), payments),
                 std::invalid_argument);
  }
  {
    std::tm tm{};
    tm.tm_year = 100;
    tm.tm_mday = tm.tm_mon = 1;
    std::map<time_t, double> payments{};
    payments.insert(std::pair<std::time_t, double>{std::mktime(&tm), -200});
    s21::Model m;
    ASSERT_THROW(m.calcDeposit(12, 100, 10, 1, std::mktime(&tm), payments),
                 std::invalid_argument);
  }
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
