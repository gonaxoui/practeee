QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = lib
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
    aboutus.cpp \
    form.cpp \
    helpsos.cpp \
    main.cpp \
    mainwindow.cpp \
    tablee.cpp

HEADERS += \
    aboutus.h \
    form.h \
    helpsos.h \
    mainwindow.h \
    tablee.h

FORMS += \
    aboutus.ui \
    form.ui \
    helpsos.ui \
    mainwindow.ui \
    tablee.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    rec.qrc

DISTFILES += \
    img/free-icon-hotel-2925021.png \
    img/free-icon-hotel-7692511.png \
    img/free-icon-reception-bell-7507840 (1).png \
    img/free-icon-reception-bell-7507840 (1).png \
    img/free-icon-reception-bell-7507840 (1).png \
    img/icon.ico \
    img/premium-icon-hotel-675993.png \
    img/ввод данных.png \
    img/главное окно.png \
    img/добавление еще.png \
    img/добавление записи.png \
    img/добавление записи.png \
    img/окно с таблицей.png \
    img/поиск ввод.png \
    img/поиск очистка.png \
    img/редактирование данных.png
