QT       += core gui sql
QT       += sql
QT       += printsupport
QT       += charts
QT       += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    QrCode.cpp \
    arduino.cpp \
    connection.cpp \
    dialog.cpp \
    fournisseur.cpp \
    historique.cpp \
    hub.cpp \
    iu.cpp \
    machines.cpp \
    main.cpp \
    mainwindow.cpp \
    notification.cpp \
    qcustomplot.cpp

HEADERS += \
    QrCode.h \
    arduino.h \
    connection.h \
    dialog.h \
    fournisseur.h \
    historique.h \
    hub.h \
    iu.h \
    machines.h \
    mainwindow.h \
    notification.h \
    qcustomplot.h

FORMS += \
    dialog.ui \
    hub.ui \
    iu.ui \
    mainwindow.ui

INCLUDEPATH +=\
    "C:/Users/sbiss/OneDrive/Bureau/Atelier_Connexion/arduino_test"

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
