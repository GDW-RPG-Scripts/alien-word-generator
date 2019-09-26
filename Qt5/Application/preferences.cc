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

#include "preferences.hh"
#include "workspace.hh"

#include <QtWidgets>

namespace GDW
{
  namespace RPG
  {
    Preferences::Preferences(Workspace* workspace)
      : QDialog(workspace)
    {
      QSettings settings;
      QVBoxLayout* dialogLayout = new QVBoxLayout;

      //
      QGroupBox* startBox = new QGroupBox(tr("Generation settings") + ":", this);
      QVBoxLayout* startBoxLayout = new QVBoxLayout(startBox);

      QCheckBox* strictCheckBox =
          new QCheckBox(tr("Strict rules word generation") + ".", startBox);
      strictCheckBox->setChecked(workspace->Strict());
      connect(strictCheckBox, &QCheckBox::stateChanged, workspace, &Workspace::SetStrict);
      startBoxLayout->addWidget(strictCheckBox);

      //
      QWidget* widget = new QWidget(this);
      QFormLayout* formLayout = new QFormLayout(widget);
      formLayout->setMargin(0);

      QLineEdit* batchSizeLineEdit =
          new QLineEdit(QString::number(workspace->GetBatchSize()), this);
      batchSizeLineEdit->setValidator(new QIntValidator(1, USHRT_MAX));
      connect(batchSizeLineEdit, &QLineEdit::textChanged, workspace, &Workspace::SetBatchSize);
      formLayout->addRow(tr("&Number of names to generate") + ":", batchSizeLineEdit);
      widget->setLayout(formLayout);
      startBoxLayout->addWidget(widget);

      startBox->setLayout(startBoxLayout);
      dialogLayout->addWidget(startBox);

      //
      QGroupBox* fileBox = new QGroupBox(tr("File-handling settings") + ":", this);
      QVBoxLayout* fileBoxLayout = new QVBoxLayout(fileBox);
      QCheckBox* saveCheckBox =
          new QCheckBox(tr("Check for save on exit") + ".", fileBox);
      saveCheckBox->setChecked(workspace->SaveOnExit());
      connect(saveCheckBox, &QCheckBox::stateChanged, workspace, &Workspace::SetSaveOnExit);
      fileBoxLayout->addWidget(saveCheckBox);
      fileBox->setLayout(fileBoxLayout);
      dialogLayout->addWidget(fileBox);

      //
      QDialogButtonBox* buttonBox =
          new QDialogButtonBox(QDialogButtonBox::Ok, this);
      connect(buttonBox, &QDialogButtonBox::accepted, this, &QDialog::accept);
      dialogLayout->addWidget(buttonBox);

      setWindowTitle(tr("Preferences"));
      setLayout(dialogLayout);
    }
  };
};
