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

#include "language.hh"

#include "ui_workspace.h"

#include <QMainWindow>

namespace Ui {
  class Workspace;
}

namespace GDW
{
  namespace RPG
  {
    class Workspace : public QMainWindow
    {
        Q_OBJECT

      public:
        explicit Workspace(QWidget *parent = nullptr);
        ~Workspace();

        void LoadFile(const QString&);

        bool Strict() const;
        int GetBatchSize() const;
        bool SaveOnExit() const;

      public slots:
        void SetStrict(int);
        void SetBatchSize(const QString&);
        void SetSaveOnExit(int);

      protected:
        void closeEvent(QCloseEvent* event) override;

      private slots:
        void About();
        void New();
        void Open();
        bool Save();
        bool SaveAs();
        void ShowPreferences();

        void Copy();
        void Fill();
        void ItemSelected(int);

        void SetLanguage(int);

      private:
        bool MaybeSave();
        bool SaveFile(const QString&);
        void SetCurrentFile(const QString&);

        void ReadSettings();
        void WriteSettings();

        bool mClean;
        QString mCurrentFile;
        LanguageType mLanguage;

        bool mStrict;
        int mBatchSize;
        bool mSaveOnExit;

        Ui::Workspace mUi;
    };
  };
};

#endif // WORKSPACE_HH
