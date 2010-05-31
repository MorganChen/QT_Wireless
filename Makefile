#############################################################################
# Makefile for building: wireless
# Generated by qmake (2.01a) (Qt 4.5.2) on: Mon May 31 14:13:09 2010
# Project:  wireless.pro
# Template: app
# Command: /opt/qt-embedded-linux-opensource-src-4.5.2/bin/qmake -spec /opt/Qtopia/mkspecs/qws/linux-arm-g++ -unix CONFIG+=debug -o Makefile wireless.pro
#############################################################################

####### Compiler, tools and options

CC            = armv5te-softfloat-linux-gcc
CXX           = armv5te-softfloat-linux-g++
DEFINES       = -DQT_SQL_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/opt/Qtopia/mkspecs/qws/linux-arm-g++ -I. -I/opt/Qtopia/include/QtCore -I/opt/Qtopia/include/QtNetwork -I/opt/Qtopia/include/QtGui -I/opt/Qtopia/include/QtSql -I/opt/Qtopia/include -I. -I.
LINK          = armv5te-softfloat-linux-g++
LFLAGS        = -Wl,-rpath,/opt/QTE/lib
LIBS          = $(SUBLIBS)  -L/opt/Qtopia/lib -lQtSql -L/opt/lib/socle-tslib/lib -L/opt/FriendlyARM/socle/common-tst/lib -L/opt/Qtopia/lib -lQtGui -lts -lQtNetwork -lQtCore -lm -lrt -ldl -lpthread
AR            = armv5te-softfloat-linux-ar cqs
RANLIB        = 
QMAKE         = /opt/qt-embedded-linux-opensource-src-4.5.2/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = WidgetKeyboard.cpp \
		main.cpp \
		wirelesswindow.cpp \
		wifidelegate.cpp \
		settingwlan.cpp \
		network.cpp moc_WidgetKeyboard.cpp \
		moc_wirelesswindow.cpp \
		moc_settingwlan.cpp \
		qrc_wireless.cpp
OBJECTS       = WidgetKeyboard.o \
		main.o \
		wirelesswindow.o \
		wifidelegate.o \
		settingwlan.o \
		network.o \
		moc_WidgetKeyboard.o \
		moc_wirelesswindow.o \
		moc_settingwlan.o \
		qrc_wireless.o
DIST          = /opt/Qtopia/mkspecs/common/g++.conf \
		/opt/Qtopia/mkspecs/common/unix.conf \
		/opt/Qtopia/mkspecs/common/linux.conf \
		/opt/Qtopia/mkspecs/common/qws.conf \
		/opt/Qtopia/mkspecs/qconfig.pri \
		/opt/Qtopia/mkspecs/features/qt_functions.prf \
		/opt/Qtopia/mkspecs/features/qt_config.prf \
		/opt/Qtopia/mkspecs/features/exclusive_builds.prf \
		/opt/Qtopia/mkspecs/features/default_pre.prf \
		/opt/Qtopia/mkspecs/features/debug.prf \
		/opt/Qtopia/mkspecs/features/default_post.prf \
		/opt/Qtopia/mkspecs/features/warn_on.prf \
		/opt/Qtopia/mkspecs/features/qt.prf \
		/opt/Qtopia/mkspecs/features/unix/thread.prf \
		/opt/Qtopia/mkspecs/features/moc.prf \
		/opt/Qtopia/mkspecs/features/resources.prf \
		/opt/Qtopia/mkspecs/features/uic.prf \
		/opt/Qtopia/mkspecs/features/yacc.prf \
		/opt/Qtopia/mkspecs/features/lex.prf \
		/opt/Qtopia/mkspecs/features/include_source_dir.prf \
		wireless.pro
QMAKE_TARGET  = wireless
DESTDIR       = 
TARGET        = wireless

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_WidgetKeyboard.h ui_wirelesswindow.h ui_settingwlan.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: wireless.pro  /opt/Qtopia/mkspecs/qws/linux-arm-g++/qmake.conf /opt/Qtopia/mkspecs/common/g++.conf \
		/opt/Qtopia/mkspecs/common/unix.conf \
		/opt/Qtopia/mkspecs/common/linux.conf \
		/opt/Qtopia/mkspecs/common/qws.conf \
		/opt/Qtopia/mkspecs/qconfig.pri \
		/opt/Qtopia/mkspecs/features/qt_functions.prf \
		/opt/Qtopia/mkspecs/features/qt_config.prf \
		/opt/Qtopia/mkspecs/features/exclusive_builds.prf \
		/opt/Qtopia/mkspecs/features/default_pre.prf \
		/opt/Qtopia/mkspecs/features/debug.prf \
		/opt/Qtopia/mkspecs/features/default_post.prf \
		/opt/Qtopia/mkspecs/features/warn_on.prf \
		/opt/Qtopia/mkspecs/features/qt.prf \
		/opt/Qtopia/mkspecs/features/unix/thread.prf \
		/opt/Qtopia/mkspecs/features/moc.prf \
		/opt/Qtopia/mkspecs/features/resources.prf \
		/opt/Qtopia/mkspecs/features/uic.prf \
		/opt/Qtopia/mkspecs/features/yacc.prf \
		/opt/Qtopia/mkspecs/features/lex.prf \
		/opt/Qtopia/mkspecs/features/include_source_dir.prf \
		/opt/Qtopia/lib/libQtSql.prl \
		/opt/Qtopia/lib/libQtCore.prl \
		/opt/Qtopia/lib/libQtGui.prl \
		/opt/Qtopia/lib/libQtNetwork.prl
	$(QMAKE) -spec /opt/Qtopia/mkspecs/qws/linux-arm-g++ -unix CONFIG+=debug -o Makefile wireless.pro
/opt/Qtopia/mkspecs/common/g++.conf:
/opt/Qtopia/mkspecs/common/unix.conf:
/opt/Qtopia/mkspecs/common/linux.conf:
/opt/Qtopia/mkspecs/common/qws.conf:
/opt/Qtopia/mkspecs/qconfig.pri:
/opt/Qtopia/mkspecs/features/qt_functions.prf:
/opt/Qtopia/mkspecs/features/qt_config.prf:
/opt/Qtopia/mkspecs/features/exclusive_builds.prf:
/opt/Qtopia/mkspecs/features/default_pre.prf:
/opt/Qtopia/mkspecs/features/debug.prf:
/opt/Qtopia/mkspecs/features/default_post.prf:
/opt/Qtopia/mkspecs/features/warn_on.prf:
/opt/Qtopia/mkspecs/features/qt.prf:
/opt/Qtopia/mkspecs/features/unix/thread.prf:
/opt/Qtopia/mkspecs/features/moc.prf:
/opt/Qtopia/mkspecs/features/resources.prf:
/opt/Qtopia/mkspecs/features/uic.prf:
/opt/Qtopia/mkspecs/features/yacc.prf:
/opt/Qtopia/mkspecs/features/lex.prf:
/opt/Qtopia/mkspecs/features/include_source_dir.prf:
/opt/Qtopia/lib/libQtSql.prl:
/opt/Qtopia/lib/libQtCore.prl:
/opt/Qtopia/lib/libQtGui.prl:
/opt/Qtopia/lib/libQtNetwork.prl:
qmake:  FORCE
	@$(QMAKE) -spec /opt/Qtopia/mkspecs/qws/linux-arm-g++ -unix CONFIG+=debug -o Makefile wireless.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/wireless1.0.0 || $(MKDIR) .tmp/wireless1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/wireless1.0.0/ && $(COPY_FILE) --parents WidgetKeyboard.h wirelesswindow.h wifidelegate.h settingwlan.h initdb.h config.h network.h .tmp/wireless1.0.0/ && $(COPY_FILE) --parents wireless.qrc .tmp/wireless1.0.0/ && $(COPY_FILE) --parents WidgetKeyboard.cpp main.cpp wirelesswindow.cpp wifidelegate.cpp settingwlan.cpp network.cpp .tmp/wireless1.0.0/ && $(COPY_FILE) --parents WidgetKeyboard.ui wirelesswindow.ui settingwlan.ui .tmp/wireless1.0.0/ && (cd `dirname .tmp/wireless1.0.0` && $(TAR) wireless1.0.0.tar wireless1.0.0 && $(COMPRESS) wireless1.0.0.tar) && $(MOVE) `dirname .tmp/wireless1.0.0`/wireless1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/wireless1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_WidgetKeyboard.cpp moc_wirelesswindow.cpp moc_settingwlan.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_WidgetKeyboard.cpp moc_wirelesswindow.cpp moc_settingwlan.cpp
moc_WidgetKeyboard.cpp: ui_WidgetKeyboard.h \
		WidgetKeyboard.h
	/opt/Qtopia/bin/moc $(DEFINES) $(INCPATH) WidgetKeyboard.h -o moc_WidgetKeyboard.cpp

moc_wirelesswindow.cpp: ui_wirelesswindow.h \
		settingwlan.h \
		WidgetKeyboard.h \
		ui_WidgetKeyboard.h \
		network.h \
		wirelesswindow.h
	/opt/Qtopia/bin/moc $(DEFINES) $(INCPATH) wirelesswindow.h -o moc_wirelesswindow.cpp

moc_settingwlan.cpp: WidgetKeyboard.h \
		ui_WidgetKeyboard.h \
		settingwlan.h
	/opt/Qtopia/bin/moc $(DEFINES) $(INCPATH) settingwlan.h -o moc_settingwlan.cpp

compiler_rcc_make_all: qrc_wireless.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_wireless.cpp
qrc_wireless.cpp: wireless.qrc \
		IMG_7532-LoMo.jpg \
		lincity-ng.png \
		images/star.png \
		images/back.png \
		images/wifi.png \
		images/key.jpg \
		images/keyboard.png \
		images/signal.png
	/opt/Qtopia/bin/rcc -name wireless wireless.qrc -o qrc_wireless.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_WidgetKeyboard.h ui_wirelesswindow.h ui_settingwlan.h
compiler_uic_clean:
	-$(DEL_FILE) ui_WidgetKeyboard.h ui_wirelesswindow.h ui_settingwlan.h
ui_WidgetKeyboard.h: WidgetKeyboard.ui
	/opt/Qtopia/bin/uic WidgetKeyboard.ui -o ui_WidgetKeyboard.h

ui_wirelesswindow.h: wirelesswindow.ui
	/opt/Qtopia/bin/uic wirelesswindow.ui -o ui_wirelesswindow.h

ui_settingwlan.h: settingwlan.ui
	/opt/Qtopia/bin/uic settingwlan.ui -o ui_settingwlan.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

WidgetKeyboard.o: WidgetKeyboard.cpp WidgetKeyboard.h \
		ui_WidgetKeyboard.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o WidgetKeyboard.o WidgetKeyboard.cpp

main.o: main.cpp wirelesswindow.h \
		ui_wirelesswindow.h \
		settingwlan.h \
		WidgetKeyboard.h \
		ui_WidgetKeyboard.h \
		network.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

wirelesswindow.o: wirelesswindow.cpp wirelesswindow.h \
		ui_wirelesswindow.h \
		settingwlan.h \
		WidgetKeyboard.h \
		ui_WidgetKeyboard.h \
		network.h \
		wifidelegate.h \
		initdb.h \
		config.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o wirelesswindow.o wirelesswindow.cpp

wifidelegate.o: wifidelegate.cpp wifidelegate.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o wifidelegate.o wifidelegate.cpp

settingwlan.o: settingwlan.cpp settingwlan.h \
		WidgetKeyboard.h \
		ui_WidgetKeyboard.h \
		ui_settingwlan.h \
		config.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o settingwlan.o settingwlan.cpp

network.o: network.cpp network.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o network.o network.cpp

moc_WidgetKeyboard.o: moc_WidgetKeyboard.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_WidgetKeyboard.o moc_WidgetKeyboard.cpp

moc_wirelesswindow.o: moc_wirelesswindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_wirelesswindow.o moc_wirelesswindow.cpp

moc_settingwlan.o: moc_settingwlan.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_settingwlan.o moc_settingwlan.cpp

qrc_wireless.o: qrc_wireless.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_wireless.o qrc_wireless.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

