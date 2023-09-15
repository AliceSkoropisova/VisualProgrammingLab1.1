QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui


CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../../Users/alice/OneDrive/Рабочий стол/knopa.jpg \
    trash/-33.jpg \
    trash/1.jpg \
    trash/11.jpg \
    trash/2.jpg \
    trash/22.jpg \
    trash/3.jpg \
    trash/4.jpg \
    trash/44.jpg \
    trash/5.jpg \
    trash/55.jpg \
    trash/66.jpg \
    trash/77.jpg \
    trash/a.jpg \
    trash/album.jpg \
    trash/b.jpg \
    trash/c.jpg \
    trash/d.jpg \
    trash/fil.jpg \
    trash/knopa.jpg \
    trash/krug.jpg \
    trash/m.jpg \
    trash/nepon.jpg \
    trash/off.jpg \
    trash/p.jpg \
    trash/po.jpg \
    trash/s.jpg \
    trash/str.jpg \
    trash/t.jpg \
    trash/vkl.jpg

RESOURCES += \
    img.qrc \
    imgg.qrc
