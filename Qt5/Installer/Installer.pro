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

TEMPLATE = aux

INSTALLER = "Alien Word Generator Installer"

INPUT = $$PWD/config/config.xml $$PWD/packages
installer.input = INPUT
installer.output = $$INSTALLER
installer.commands = /opt/Qt/QtIFW-3.1.1/bin/binarycreator --offline-only -c $$PWD/config/config.xml -p $$PWD/packages ${QMAKE_FILE_OUT}
installer.CONFIG += target_predeps no_link combine

QMAKE_EXTRA_COMPILERS += installer

FORMS += \
  packages/meta/page.ui

DISTFILES += \
  packages/data/installcontent.txt \
  packages/meta/installscript.qs \
  packages/meta/license.txt \
  packages/meta/package.xml