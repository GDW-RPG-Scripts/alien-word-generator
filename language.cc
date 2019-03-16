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

#include "language.hh"

namespace GDW
{
  namespace RPG
  {
    Language::Language(LanguageType language, bool strict)
      : mStrict(strict), mLanguage(language)
    {}

    int
    Language::Syllable()
    {
      return rand() % SYLLABLES;
    }

    int
    Language::Letter()
    {
      return rand() % LETTERS;
    }

    QString
    Language::Generate()
    {
      QString word;

      int syllables = mStrict ?
                        rand() % 6 + 1 :
                        rand() % 2 + rand() % 2 + 2;

      SyllableType syllableType = Basic;
      for (int i = 0; i < syllables; ++i) {
        syllableType =
            SYLLABLE[mLanguage][syllableType][Syllable()](*this, word);
      }

      return word;
    }

    SyllableType
    Language::V(QString& word)
    {
      word += LETTER[mLanguage][Vowel][Letter()];
      return mLanguage == Kkree ?
            After_V :
            mLanguage == Vargr ||
            mLanguage == Vilani ?
              Alternate :
              Basic;
    }

    SyllableType
    Language::CV(QString& word)
    {
      word += LETTER[mLanguage][Initial][Letter()];
      V(word);
      return mLanguage == Kkree ?
            After_V :
            mLanguage == Vargr ||
            mLanguage == Vilani ?
              Alternate :
              Basic;
    }

    SyllableType
    Language::VC(QString& word)
    {
      V(word);
      word += LETTER[mLanguage][Final][Letter()];
      return mLanguage == Kkree ?
            After_C :
            mLanguage == Aslan ||
            mLanguage == Darrian ||
            mLanguage == Droyne ||
            mLanguage == Vilani ||
            mLanguage == Zhodani ?
              Alternate :
              Basic;
    }

    SyllableType
    Language::CVC(QString& word)
    {
      CV(word);
      word += LETTER[mLanguage][Final][Letter()];
      return mLanguage == Kkree ?
            After_C :
            mLanguage == Aslan ||
            mLanguage == Darrian ||
            mLanguage == Droyne ||
            mLanguage == Vilani ||
            mLanguage == Zhodani ?
              Alternate :
              Basic;
    }
  };
};
