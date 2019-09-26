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
#include <QTextStream>
#include <QTranslator>

int Usage(const char* message)
{
  QTextStream err(stderr);
  err << "Usage: " << message << endl;
  return -1;
}

int main(int argc, char* argv[])
{
  Q_INIT_RESOURCE(AlienWordGenerator);

  QApplication application(argc, argv);

  QCoreApplication::setOrganizationName("GDW RPG");
  QCoreApplication::setApplicationName("Alien Word Generator");
  QCoreApplication::setApplicationVersion("0");

  // Command line parsing
  QCommandLineParser parser;
  parser.setApplicationDescription(QCoreApplication::applicationName());
  parser.addHelpOption();
  parser.addVersionOption();

  QCommandLineOption
      languageOption(QStringList() << "l" << "language",
                  "Language of words to generate.");
  parser.addOption(languageOption);

  QCommandLineOption numberOptions("n", "Number of words.");
  numberOptions.setDefaultValue("1");
  parser.addOption(numberOptions);

  QCommandLineOption strictOption("s", "Generate using strict mode.");
  parser.addOption(strictOption);

  parser.process(application);

  // I18N
  QTranslator qtTranslator;
  qtTranslator.load("qt_" + QLocale::system().name(),
                    QLibraryInfo::location(QLibraryInfo::TranslationsPath));
  application.installTranslator(&qtTranslator);

  QTranslator appTranslator;
  appTranslator.load(QLocale(), QLatin1String("AlienWordGenerator"),
                     QLatin1String("_")); //, QLatin1String(":/translations"));
  application.installTranslator(&appTranslator);

  // Run application
  if (parser.positionalArguments().isEmpty()) {
    GDW::RPG::Workspace workspace;
    workspace.show();
    return application.exec();
  } else {
    bool valid;

    GDW::RPG::LanguageType languageType =
        GDW::RPG::LanguageType(parser.value(languageOption).toInt(&valid));
    if(!valid) {
      return Usage("-l : Integer - Language to generate.");
    }

    bool strict = parser.isSet(strictOption);

    int nWords = parser.value(numberOptions).toInt(&valid);
    if(!valid) {
      return Usage("-n : Integer - Number of words to generate.");
    }

    QTextStream out(stdout);
    GDW::RPG::Language language(languageType, strict);
    for (int i = 0; i < nWords; ++i) {
      out << language.Generate() << endl;
    }
  }

  return 0;
}
