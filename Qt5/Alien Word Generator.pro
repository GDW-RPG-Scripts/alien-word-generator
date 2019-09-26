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

TEMPLATE = subdirs

SUBDIRS += \
    Application \
    Installer

Installer.depends = Application
