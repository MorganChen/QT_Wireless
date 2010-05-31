TEMPLATE = app
HEADERS += WidgetKeyboard.h \
    wirelesswindow.h \
    wifidelegate.h \
    settingwlan.h \
    initdb.h \
    config.h \
    network.h
SOURCES += WidgetKeyboard.cpp \
    main.cpp \
    wirelesswindow.cpp \
    wifidelegate.cpp \
    settingwlan.cpp \
    network.cpp
FORMS += WidgetKeyboard.ui \
    wirelesswindow.ui \
    settingwlan.ui
RESOURCES += wireless.qrc
QT += sql
