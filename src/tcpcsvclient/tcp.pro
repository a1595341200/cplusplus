QT -= gui
CONFIG += c++14 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        src/OFM_CsvLog.cpp \
        src/OFM_TCPClient.cpp \
        src/main.cpp \
        src/timer.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

INCLUDEPATH +=./include ./include/include

HEADERS += \
    include/OFM_CsvLog.h \
    include/OFM_TCPClient.h \
    include/common.h \
    include/dbg.h \
    include/json.hpp \
    include/message_Type.h \
    include/timer.h

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/lib/ -lws2_32
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/lib/ -lws2_32d
