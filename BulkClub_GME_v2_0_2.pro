QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addndelete.cpp \
    createpurchase.cpp \
    database.cpp \
    expirations.cpp \
    inventory.cpp \
    main.cpp \
    login.cpp \
    mainscreen.cpp \
    memberpurchases.cpp \
    rebates.cpp \
    reports.cpp \
    updatedreports.cpp \
    updateinventory.cpp

HEADERS += \
    addndelete.h \
    createpurchase.h \
    database.h \
    expirations.h \
    inventory.h \
    login.h \
    mainscreen.h \
    memberpurchases.h \
    rebates.h \
    reports.h \
    updatedreports.h \
    updateinventory.h

FORMS += \
    addndelete.ui \
    createpurchase.ui \
    expirations.ui \
    inventory.ui \
    login.ui \
    mainscreen.ui \
    memberpurchases.ui \
    rebates.ui \
    reports.ui \
    updatedreports.ui \
    updateinventory.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    bc_resource.qrc
