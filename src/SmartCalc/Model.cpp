#include "Model.h"

using std::string;

namespace s21 {
double Model::Lexeme::calculateLex(double const &arg1) {
  double res;
  if (_type == _OPER_2) {
    std::__throw_invalid_argument("1 argument given, needs 2 arguments");
  } else {
    if (_name == "ln")
      res = log(arg1);
    else if (_name == "log")
      res = log10(arg1);
    else if (_name == "sqrt")
      res = sqrt(arg1);
    else if (_name == "tan")
      res = tan(arg1);
    else if (_name == "sin")
      res = sin(arg1);
    else if (_name == "cos")
      res = cos(arg1);
    else if (_name == "atan")
      res = atan(arg1);
    else if (_name == "asin")
      res = asin(arg1);
    else if (_name == "acos")
      res = acos(arg1);
    else if (_name == "!")
      res = -1.0 * arg1;
    else
      std::__throw_invalid_argument("wrong function name");
  }
  return res;
}
double Model::Lexeme::calculateLex(double const &arg1, double const &arg2) {
  double res;
  if (_type != _OPER_2) {
    std::__throw_invalid_argument("2 arguments given, needs 1 argument");
  } else {
    if (_name == "+")
      res = arg2 + arg1;
    else if (_name == "-")
      res = arg2 - arg1;
    else if (_name == "*")
      res = arg2 * arg1;
    else if (_name == "/")
      res = arg2 / arg1;
    else if (_name == "^")
      res = pow(arg2, arg1);
    else if (_name == "mod")
      res = fmod(arg2, arg1);
    else
      std::__throw_invalid_argument("wrong function name");
  }
  return res;
}

void Model::readStr(const string &line) {
  if (line.length() == 0)
    std::__throw_invalid_argument("No input");
  size_t len = 0;
  std::string prev = "";
  while (!_st.empty())
    _st.pop();
  while (!_qu.empty())
    _qu.pop();
  while (!qu_inp.empty())
    qu_inp.pop();
  //  std::cout << str << std::endl;
  std::string pattern =
      "x|cos|sin|tan|acos|asin|atan|sqrt|ln|log|\\(|\\)|\\+|-|"
      "\\*|\\/|mod|\\^|[0-9]*[.,]?[0-9]+(?:[eE][-+]?[0-9]+)?";
  std::regex r(pattern);
  for (std::sregex_iterator i =
           std::sregex_iterator(line.begin(), line.end(), r);
       i != std::sregex_iterator(); ++i) {
    std::smatch m = *i;
    len += m.str().length();
    if (m.str()[0] >= '0' && m.str()[0] <= '9') {
      const std::string oldLocale = std::setlocale(LC_NUMERIC, nullptr);
      std::setlocale(LC_NUMERIC, "C");
      qu_inp.push(Lexeme(std::stod(m.str())));
      std::setlocale(LC_NUMERIC, oldLocale.c_str());
      prev = "0";
    } else {
      if (m.str() == "-") {
        if (prev == "0" || prev == ")" || prev == "x")
          qu_inp.push(Lexeme("-"));
        else
          qu_inp.push(Lexeme("!"));
      } else {
        qu_inp.push(Lexeme(m.str()));
      }
      prev = m.str();
    }
  }
  if (len != line.length())
    std::__throw_invalid_argument("wrong expression: err 1");
}

std::queue<Model::Lexeme> Model::sortQueue() {
  while (!qu_inp.empty()) {
    // Пока не все токены обработаны:
    //  Прочитать токен.
    Lexeme lex = qu_inp.front();
    qu_inp.pop();
    //  Если токен — число, то добавить его в очередь вывода.
    if (lex.isNum() || lex._name == "x") {
      { _qu.push(lex); }
      //  Если токен — функция, то поместить его в стек.
      //  Если токен — открывающая скобка, то положить его в стек.
    } else if (lex._type == _OPEN_BR || lex._type == _FUNC) {
      _st.push(lex);
      //  Если токен — закрывающая скобка:
    } else if (lex._type == _CLOSE_BR) {
      //  Пока токен на вершине стека не открывающая скобка
      //     Переложить оператор из стека в выходную очередь.
      //     Если стек закончился до того, как был встречен токен открывающая
      //     скобка, то в выражении пропущена скобка.
      // Выкинуть открывающую скобку из стека, но не добавлять в очередь вывода.
      // Если токен на вершине стека — функция, переложить её в выходную
      // очередь.
      while (!_st.empty() && _st.top()._type != _OPEN_BR) {
        Lexeme _top_stack = _st.top();
        _st.pop();
        _qu.push(_top_stack);
        if (_st.empty())
          std::__throw_invalid_argument("missing parenthesis 1");
      }
      if (!_st.empty() && _st.top()._type == _OPEN_BR) {
        _st.pop();
      } else {
        if (_st.empty())
          std::__throw_invalid_argument("missing parenthesis 2");
      }
      // Если токен — оператор op1, то:
      // Пока присутствует на вершине стека токен оператор op2, чей приоритет
      // выше или равен приоритету op1, и при равенстве приоритетов op1 является
      // левоассоциативным:
      //     Переложить op2 из стека в выходную очередь;
      // Положить op1 в стек.
      // } else if (lex._type == _OPER_1 || lex._type == _OPER_2) {
    } else if (lex._type == _OPER_2) {
      while (!_st.empty() &&
             (_st.top()._type == _FUNC ||
              (_st.top()._type == _OPER_1 && _st.top()._prec == lex._prec) ||
              (_st.top()._type == _OPER_2 && _st.top()._prec >= lex._prec))) {
        Lexeme _top_stack = _st.top();
        _st.pop();
        _qu.push(_top_stack);
      }
      _st.push(lex);
    } else if (lex._type == _OPER_1) {
      _st.push(lex);
    } else {
      while (!_st.empty()) {
        Lexeme _top_stack = _st.top();
        _st.pop();
        _qu.push(_top_stack);
      }
    }
  }
  // Если больше не осталось токенов на входе:
  // Пока есть токены операторы в стеке:
  //     Если токен оператор на вершине стека — открывающая скобка, то в
  //     выражении пропущена скобка. Переложить оператор из стека в выходную
  //     очередь.
  while (!_st.empty()) {
    if (_st.top()._type == _OPEN_BR) {
      std::__throw_invalid_argument("missing parenthesis 4");
    }
    Lexeme _top_stack = _st.top();
    _st.pop();
    _qu.push(_top_stack);
  }
  return _qu;
}

double Model::calculateQueue(std::queue<Lexeme> _qu, double x = 0) {
  double res = 0;
  while (!_st.empty())
    _st.pop();
  while (!_qu.empty()) {
    Lexeme lex(_qu.front());
    _qu.pop();
    if (lex._name == "x") {
      lex._value = x;
      _st.push(lex);
    } else if (lex.isNum()) {
      _st.push(lex);
    } else {
      if (lex._type == _OPEN_BR || lex._type == _FUNC || lex._type == _OPER_1) {
        if (_st.empty())
          std::__throw_invalid_argument("wrong expression 1");
        if (_st.top().isNum()) {
          double val1 = _st.top()._value;
          _st.pop();
          res = lex.calculateLex(val1);
        }
      } else {
        if (_st.empty())
          std::__throw_invalid_argument("wrong expression 2");
        if (_st.top().isNum()) {
          double val1 = _st.top()._value;
          _st.pop();
          if (_st.empty())
            std::__throw_invalid_argument("wrong expression 3");
          if (_st.top().isNum()) {
            double val2 = _st.top()._value;
            _st.pop();
            res = lex.calculateLex(val1, val2);
          } else {
            std::__throw_invalid_argument("wrong expression 5");
          }
        }
      }
      _st.push(Lexeme(res));
    }
  }
  if (_st.empty())
    std::__throw_invalid_argument("wrong expression 4");
  res = _st.top()._value;
  _st.pop();
  return res;
}

double Model::calcDeposit(int term, double val, double interest, int reinvest,
                          time_t d_date, std::map<time_t, double> payments) {
  std::tm d_date_end_tm{}, d_date_tm, date_prev_tm;
  double _term, total_int = 0;
  time_t d_date_end;
  time_t date_prev = d_date;
  localtime_r(&d_date, &d_date_tm);
  d_date_end_tm.tm_year = d_date_tm.tm_year + term / 12;
  d_date_end_tm.tm_mon = d_date_tm.tm_mon + term % 12;
  d_date_end_tm.tm_mday = d_date_tm.tm_mday;
  d_date_end = std::mktime(&d_date_end_tm);

  for (auto it = payments.begin(); it != payments.end(); it++) {
    localtime_r(&date_prev, &date_prev_tm);
    _term = 0;
    time_t pay_date = it->first;
    std::tm pay_date_tm;
    localtime_r(&pay_date, &pay_date_tm);
    if (pay_date < d_date || pay_date > d_date_end)
      throw std::invalid_argument("wrong date");

    _term += (pay_date_tm.tm_year - date_prev_tm.tm_year) * 12;
    _term += (pay_date_tm.tm_mon - date_prev_tm.tm_mon);
    _term +=
        (double)d_date_end_tm.tm_mday /
        (double)getDaysInMonth(d_date_end_tm.tm_mon, d_date_end_tm.tm_year);
    _term -= (double)date_prev_tm.tm_mday /
             (double)getDaysInMonth(date_prev_tm.tm_mon, date_prev_tm.tm_year);
    if (reinvest > 0)
      val *=
          pow((1 + interest / (100.0 * reinvest)), (_term * reinvest) / 12.0);
    else
      total_int += val * (interest / 100.0) * (_term / 12.0);

    val += it->second;
    if (val < 0)
      throw std::invalid_argument("Too much withdrawn from account");
    date_prev = pay_date;
  }
  _term = 0;
  localtime_r(&date_prev, &date_prev_tm);
  _term += (d_date_end_tm.tm_year - date_prev_tm.tm_year) * 12;
  _term += (d_date_end_tm.tm_mon - date_prev_tm.tm_mon);
  _term += (double)d_date_end_tm.tm_mday /
           (double)getDaysInMonth(d_date_end_tm.tm_mon, d_date_end_tm.tm_year);
  _term -= (double)date_prev_tm.tm_mday /
           (double)getDaysInMonth(date_prev_tm.tm_mon, date_prev_tm.tm_year);
  if (reinvest > 0)
    val *= pow((1 + interest / (100 * reinvest)), (_term * reinvest) / 12);
  else
    total_int += val * (interest / 100.0) * (_term / 12.0);
  val += total_int;
  return std::round(val * 100) / 100;
}

int Model::getDaysInMonth(int month, int year) {
  int res = 30;
  year += 1900;
  if (month == 0 || month == 2 || month == 4 || month == 6 || month == 7 ||
      month == 9 || month == 11)
    res = 31;
  if (month == 1) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
      res = 29;
    else
      res = 28;
  }
  return res;
}

}  // namespace s21
