QT       += core gui

QT += widgets
QT += charts

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
  Controller.cpp \
  Model.cpp \
  View.cpp \
  deposit.cpp \
  loan.cpp \
  main.cpp \
  plot.cpp

HEADERS += \
  Controller.h \
  Model.h \
  View.h \
  deposit.h \
  loan.h \
  plot.h

FORMS += \
  deposit.ui \
  loan.ui \
  plot.ui \
  view.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = ~/$${TARGET}/
!isEmpty(target.path): INSTALLS += target
