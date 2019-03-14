/**
 * Alien Word Generator, an application for generating Traveller Universe
 * alien words and names.
 *
 * Copyright (C) 2019 Michael N. Henry
 *
 * This file is part of GDW RPG Vehicles.
 *
 * GDW RPG Vehicles is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * GDW RPG Vehicles is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details. You should have
 * received a copy of the GNU General Public License along with Alien Word
 * Generator. If not, see <http://www.gnu.org/licenses/>.
 */

#include "workspace.hh"

#include <QApplication>
#include <QCommandLineParser>
#include <QCommandLineOption>
#include <QLibraryInfo>
#include <QTranslator>

int main(int argc, char* argv[])
{
  // Q_INIT_RESOURCE(AlienWordGenerator);

  QApplication application(argc, argv);

  QCoreApplication::setOrganizationName("");
  QCoreApplication::setApplicationName("Alien Word Generator");
  QCoreApplication::setApplicationVersion("0");

  QCommandLineParser parser;
  parser.setApplicationDescription(QCoreApplication::applicationName());
  parser.addHelpOption();
  parser.addVersionOption();
  parser.addPositionalArgument("file", "The file to open.");
  parser.process(application);

  QTranslator qtTranslator;
  qtTranslator.load("qt_" + QLocale::system().name(),
                    QLibraryInfo::location(QLibraryInfo::TranslationsPath));
  application.installTranslator(&qtTranslator);

  QTranslator appTranslator;
  appTranslator.load(QLocale(), QLatin1String("AlienWordGenerator"),
                       QLatin1String("_")); //, QLatin1String(":/translations"));
  application.installTranslator(&appTranslator);

  GDW::RPG::Workspace workspace;
  workspace.show();
  // if (!parser.positionalArguments().isEmpty())
  //   workspace.LoadFile(parser.positionalArguments().first());

  return application.exec();
}
