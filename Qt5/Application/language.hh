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

#ifndef WORD_HH
#define WORD_HH

#include <QString>

#include <functional>

namespace GDW
{
  namespace RPG
  {
    class Language;

    enum LanguageType
    {
      Aslan,
      Darrian,
      Droyne,
      Kkree,
      Vargr,
      Vilani,
      Zhodani,
      LANGUAGE_TYPES
    };

    enum LetterType
    {
      Initial,
      Vowel,
      Final,
      LETTER_TYPES
    };

    enum SyllableType
    {
      Basic,
      Alternate,
      After_C = Alternate,
      After_V,
      SYLLABLE_TYPES
    };

    enum Limits
    {
      SYLLABLES = 36,
      LETTERS = 216
    };

    typedef std::function<SyllableType(Language&,QString&)> SyllableGenerator;

    class Language
    {
      public:
        Language(LanguageType, bool strict = false);

        QString Generate();

      private:
        SyllableType   V(QString&);
        SyllableType  CV(QString&);
        SyllableType  VC(QString&);
        SyllableType CVC(QString&);

        int Letter();
        int Syllable();

        bool mStrict;
        LanguageType mLanguage;

        static const char* LETTER[LANGUAGE_TYPES][LETTER_TYPES][LETTERS];
        static const SyllableGenerator SYLLABLE[LANGUAGE_TYPES][LETTER_TYPES][SYLLABLES];
    };
  };
};

#endif // WORD_HH
