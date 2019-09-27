# ------------------------------------------------------------------------------
#
# Alien Word Generator, a word generator for Traveller and other GDW derived
# RPGs.
#
# Copyright (C) 2018-2019 Michael N. Henry <mike.henry@mikehenry.se>
#
# This file is part of Alien Word Generator.
#
# Alien Word Generator is free software: you can redistribute it and/or modify it
# under the terms of the GNU General Public License as published by the Free
# Software Foundation, either version 2 of the License, or (at your option) any
# later version.
#
# Alien Word Generator is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
# FITNESS FOR A PARTICULAR PURPOSE.
#
# See the GNU General Public License for more details. You should have received
# a copy of the GNU General Public License along with Alien Word Generator. If
# not, see <http://www.gnu.org/licenses/>.
#
# ------------------------------------------------------------------------------

QT       += core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = "Alien Word Generator"
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    main.cc \
    workspace.cc \
    letter.cc \
    preferences.cc \
    syllable.cc \
    language.cc

HEADERS += \
    workspace.hh \
    preferences.hh \
    language.hh

FORMS += \
    workspace.ui

RESOURCES += \
    AlienWordGenerator.qrc

macx: ICON = icons/sunburst.icns
win32: RC_ICONS = icons/sunburst.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

CONFIG(release, release|debug) {
  macx: QMAKE_POST_LINK = $$(QTDIR)/bin/macdeployqt \"$$OUT_PWD/$${TARGET}.app\"
  win32: QMAKE_POST_LINK = $$(QTDIR)/bin/windeployqt \"$$OUT_PWD/release/$${TARGET}.exe\"
}
