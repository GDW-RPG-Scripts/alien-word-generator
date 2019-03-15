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
#include "preferences.hh"

#include <QClipboard>
#include <QCloseEvent>
#include <QDesktopWidget>
#include <QDebug>
#include <QListWidgetItem>
#include <QMessageBox>
#include <QSettings>

#include <cstdlib>
#include <ctime>
#include <functional>

namespace GDW
{
  namespace RPG
  {
    Workspace::Workspace(QWidget *parent) :
      QMainWindow(parent), mMaxWords(20), mStrictGeneration(false)
    {
      ReadSettings();

      srand(time(NULL));

      mUi.setupUi(this);

      setUnifiedTitleAndToolBarOnMac(true);
    }

    Workspace::~Workspace()
    {}

    //
    // Events
    //

    void Workspace::closeEvent(QCloseEvent* event)
    {
      if (true /*MaybeSave()*/) {
        WriteSettings();
        event->accept();
      } else {
        event->ignore();
      }
    }

    void
    Workspace::SetLanguage(int language)
    {
      mUi.clearButton->setEnabled(true);
      mUi.generateButton->setEnabled(true);
      mLanguage = Language(language - 1);

      if(mUi.listWidget->model()->rowCount() == 0)
        Fill();
    }

    void
    Workspace::About()
    {
      // qDebug() << "MainWindow::About()";
      const QString text =
          tr("GDW RPG Alien Word Generator – Generator of names and word of "
             "popular alien languages from 2d6 Sci-fi and other RPGs.\n\n"
             "Copyright © 2019 by Michael N. Henry\n\n"
             "This program is free software: you can redistribute it and/or "
             "modify it under the terms of the GNU General Public License as "
             "published by the Free Software Foundation, either version 3 of "
             "the License, or (at your option) any later version.\n\n"
             "The Traveller game in all forms is owned by Far Future "
             "Enterprises. Copyright 1977 - 2008 Far Future Enterprises.");

      QMessageBox::about(this,
                         tr("About") + " " +
                         QCoreApplication::organizationName() + " " +
                         QCoreApplication::applicationName(), text);
    }

    void
    Workspace::ShowPreferences()
    {
      Preferences dialog(this);
      dialog.exec();
    }

    void
    Workspace::StrictGeneration(int state)
    {
      mStrictGeneration = state;
    }

    void
    Workspace::ReadSettings()
    {
      QSettings settings;

      mStrictGeneration =
          settings.value("strictGeneration", mStrictGeneration).toBool();

      const QByteArray geometry =
          settings.value("geometry", QByteArray()).toByteArray();
      if (geometry.isEmpty()) {
        const QRect availableGeometry =
            QApplication::desktop()->availableGeometry(this);
        resize(availableGeometry.width() / 3, availableGeometry.height() / 2);
        move((availableGeometry.width() - width()) / 2,
             (availableGeometry.height() - height()) / 2);
      } else {
        restoreGeometry(geometry);
      }
    }

    void
    Workspace::WriteSettings()
    {
      QSettings settings;
      settings.setValue("geometry", saveGeometry());
      settings.setValue("strictGeneration", mStrictGeneration);
    }

    void
    Workspace::Fill()
    {
      for (int i = 0; i < mMaxWords; ++i) {
        QString result = Generate();
        result[0] = result[0].toUpper();
        new QListWidgetItem(result, mUi.listWidget);
      }
    }

    QString
    Workspace::Generate()
    {
      QString result;
      SyllableType type = Basic;
      int syllables = mStrictGeneration ?
                        rand() % 6 + 1 :
                        rand() % 2 + rand() % 2 + 2;
      for (int i = 0; i < syllables; ++i) {
        int character = rand() % NO_SYLLABLES;
        type = LANGUAGE[mLanguage][type][character](*this, result);
        qDebug() << "Gen:" << character
                 << ":" << result
                 << ", Next:" << type;
      }
      return result;
    }

    void
    Workspace::Copy()
    {
      QModelIndex index = mUi.listWidget->currentIndex();
      QVariant data = mUi.listWidget->model()->data(index);
      QClipboard* clipboard = QGuiApplication::clipboard();
      clipboard->setText(data.toString());
    }

    void
    Workspace::ItemSelected(int item)
    {
      mUi.actionCopy->setEnabled(true);
    }

    int
    Workspace::Index()
    {
      return rand() % NO_LETTERS;
    }

    SyllableType
    Workspace::V(QString& result)
    {
      result += LETTER[mLanguage][Vowel][Index()];
      return mLanguage == Kkree ?
            After_V :
            mLanguage == Vargr ||
            mLanguage == Vilani ?
              Alternate :
              Basic;
    }

    SyllableType
    Workspace::CV(QString& result)
    {
      result += LETTER[mLanguage][Initial][Index()];
      V(result);
      return mLanguage == Kkree ?
            After_V :
            mLanguage == Vargr ||
            mLanguage == Vilani ?
              Alternate :
              Basic;
    }

    SyllableType
    Workspace::VC(QString& result)
    {
      V(result);
      result += LETTER[mLanguage][Final][Index()];
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
    Workspace::CVC(QString& result)
    {
      CV(result);
      result += LETTER[mLanguage][Final][Index()];
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
