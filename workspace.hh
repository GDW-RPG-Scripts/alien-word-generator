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

#ifndef WORKSPACE_HH
#define WORKSPACE_HH

#include "ui_workspace.h"

#include <QMainWindow>

namespace Ui {
  class Workspace;
}

namespace GDW
{
  namespace RPG
  {
    class Workspace;

    enum Language
    {
      Aslan,
      Darrian,
      Droyne,
      Kkree,
      Vargr,
      Vilani,
      Zhodani,
      MAX_LANGS
    };

    enum Letter
    {
      Initial,
      Vowel,
      Final,
      MAX_LETTERS
    };

    enum SyllableType
    {
      Basic,
      Alternate,
      After_C = Alternate,
      After_V
    };

    enum Limits
    {
      NO_SYLLABLES = 36,
      NO_LETTERS = 216
    };

    typedef std::function<SyllableType(Workspace&,QString&)> SyllableGenerator;

    class Workspace : public QMainWindow
    {
        Q_OBJECT

      public:
        explicit Workspace(QWidget *parent = nullptr);
        ~Workspace();

        void LoadFile();

      protected:
        void closeEvent(QCloseEvent* event) override;

      private slots:
        void Copy();
        void Fill();
        QString Generate();
        void ItemSelected(int);
        void SetLanguage(int);

        void About();
        void ShowPreferences();

        void StrictGeneration(int);

      private:
        SyllableType   V(QString&);
        SyllableType  CV(QString&);
        SyllableType  VC(QString&);
        SyllableType CVC(QString&);

        int Index();

        void ReadSettings();
        void WriteSettings();

      private:
        int mMaxWords;
        bool mStrictGeneration;
        Language mLanguage;
        Ui::Workspace mUi;

        static const char* LETTER[MAX_LANGS][MAX_LETTERS][NO_LETTERS];
        static const SyllableGenerator LANGUAGE[MAX_LANGS][MAX_LETTERS][NO_SYLLABLES];
    };
  };
};

#endif // WORKSPACE_HH
