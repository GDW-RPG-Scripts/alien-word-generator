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
#include <QFileDialog>
#include <QListWidgetItem>
#include <QMessageBox>
#include <QSettings>

#include <cstdlib>
#include <ctime>

namespace GDW
{
  namespace RPG
  {
    Workspace::Workspace(QWidget* parent)
      : QMainWindow(parent), mClean(true),
        mStrict(false), mBatchSize(20), mSaveOnExit(false)
    {
      ReadSettings();

      mUi.setupUi(this);

      srand(time(NULL));

      setUnifiedTitleAndToolBarOnMac(true);
    }

    Workspace::~Workspace()
    {}

    //
    // Events
    //
    void
    Workspace::closeEvent(QCloseEvent* event)
    {
      WriteSettings();

      if(MaybeSave()) {
        event->accept();
      } else {
        event->ignore();
      }
    }

    //
    // Slots
    //
    void
    Workspace::New()
    {
      if (MaybeSave()) {
        mUi.listWidget->clear();
        SetCurrentFile(QString());
      }
    }

    void
    Workspace::Open()
    {
      if (MaybeSave()) {
        QString fileName =
            QFileDialog::getOpenFileName(this,
                                         tr("Load Words"),
                                         ".",
                                         tr("GDW RPG Word files (*.grw *.txt)"));
        if (!fileName.isEmpty())
          LoadFile(fileName);
      }
    }

    bool
    Workspace::Save()
    {
      if (mCurrentFile.isEmpty()) {
        return SaveAs();
      } else {
        return SaveFile(mCurrentFile);
      }
    }

    bool
    Workspace::SaveAs()
    {
      QString fileName =
          QFileDialog::getSaveFileName(this, tr("Save Words"),
                                       tr("Untitled"),
                                       tr("GDW RPG Word files (*.grw);; Text files (*.txt)"));

      if(fileName.isEmpty())
        return false;

      return SaveFile(fileName);
    }

    void
    Workspace::SetCurrentFile(const QString& fileName)
    {
      QFileInfo info(mCurrentFile = fileName);
      QString title(info.fileName());
      title += info.fileName().isEmpty() ? "" : " - ";
      setWindowTitle(title +
                     QCoreApplication::organizationName() + " " +
                     QCoreApplication::applicationName());
    }

    void
    Workspace::SetLanguage(int language)
    {
      mUi.clearButton->setEnabled(true);
      mUi.generateButton->setEnabled(true);
      mLanguage = LanguageType(language - 1);

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

    int
    Workspace::GetBatchSize() const
    {
      return mBatchSize;
    }

    void
    Workspace::SetBatchSize(const QString& batchSize)
    {
      bool valid;
      int newValue = batchSize.toInt(&valid);
      if(valid) {
        mBatchSize = newValue;

        QSettings settings;
        settings.setValue("batchSize", mBatchSize);
      }
    }

    bool
    Workspace::Strict() const
    {
      return mStrict;
    }

    void
    Workspace::SetStrict(int state)
    {
      mStrict = state > 0;

      QSettings settings;
      settings.setValue("strict", mStrict);
    }

    bool
    Workspace::SaveOnExit() const
    {
      return mSaveOnExit;
    }

    void
    Workspace::SetSaveOnExit(int state)
    {
      mSaveOnExit = state > 0;

      QSettings settings;
      settings.setValue("saveOnExit", mSaveOnExit);
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
    Workspace::Fill()
    {
      Language word(mLanguage, mStrict);

      for (int i = 0; i < mBatchSize; ++i) {
        QString result = word.Generate();
        result[0] = result[0].toUpper();
        new QListWidgetItem(result, mUi.listWidget);
      }

      mClean = false;
    }

    void
    Workspace::ItemSelected(int)
    {
      mUi.actionCopy->setEnabled(true);
    }

    bool
    Workspace::MaybeSave()
    {
      if(mClean || !SaveOnExit() || mUi.listWidget->count() <= 0) {
        return true;
      }

      const QMessageBox::StandardButton ret
          = QMessageBox::warning(this,
                                 QCoreApplication::organizationName() + " " +
                                 QCoreApplication::applicationName(),
                                 tr("Words have been generated.\n"
                                    "Do you want to save them?"),
                                 QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
      switch (ret) {
        case QMessageBox::Save:
          return Save();
        case QMessageBox::Cancel:
          return false;
        default:
          break;
      }

      return true;
    }

    void
    Workspace::LoadFile(const QString& fileName)
    {
      QFile file(fileName);
      if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QString message =
            tr("Cannot read file %1:\n%2.").arg(QDir::toNativeSeparators(fileName),
                                                file.errorString());
        QMessageBox::warning(this,
                             QCoreApplication::organizationName() + " " +
                             QCoreApplication::applicationName(),
                             message);
        return;
      }

#ifndef QT_NO_CURSOR
      QApplication::setOverrideCursor(Qt::WaitCursor);
#endif

      QTextStream in(&file);
      QString word;
      while(in.readLineInto(&word))
        mUi.listWidget->addItem(word);

      file.close();

#ifndef QT_NO_CURSOR
      QApplication::restoreOverrideCursor();
#endif

      SetCurrentFile(fileName);
      // UpdateActions();
      statusBar()->showMessage(tr("Words loaded"), 5000);
    }

    bool
    Workspace::SaveFile(const QString& fileName)
    {
      QFile file(fileName);
      if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this,
                             QCoreApplication::organizationName() + " " +
                             QCoreApplication::applicationName(),
                             tr("Cannot write file %1:\n%2.")
                             .arg(QDir::toNativeSeparators(fileName),
                                  file.errorString()));
        return false;
      }

      QTextStream out(&file);

#ifndef QT_NO_CURSOR
      QApplication::setOverrideCursor(Qt::WaitCursor);
#endif

      for (int i = 0; i < mUi.listWidget->count(); ++i) {
        out << mUi.listWidget->item(i)->text() << endl;
      }

#ifndef QT_NO_CURSOR
      QApplication::restoreOverrideCursor();
#endif

      mClean = true;
      SetCurrentFile(fileName);
      statusBar()->showMessage(tr("Words saved"), 5000);
      return true;
    }

    void
    Workspace::ReadSettings()
    {
      QSettings settings;

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

      mBatchSize =
          settings.value("batchSize", mBatchSize).toInt();

      mSaveOnExit =
          settings.value("saveOnExit", mSaveOnExit).toBool();

      mStrict =
          settings.value("strict", mStrict).toBool();
    }

    void
    Workspace::WriteSettings()
    {
      QSettings settings;
      settings.setValue("geometry", saveGeometry());
      settings.setValue("batchSize", mBatchSize);
      settings.setValue("saveOnExit", mSaveOnExit);
      settings.setValue("strict", mStrict);
    }
  };
};
