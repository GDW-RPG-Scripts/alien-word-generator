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
    Preferences::Preferences(Workspace* parent)
      : QDialog(parent)
    {
      QSettings settings;
      QVBoxLayout* dialogLayout = new QVBoxLayout;

      //
      QGroupBox* startBox = new QGroupBox(tr("Generation settings") + ":", this);
      QVBoxLayout* startBoxLayout = new QVBoxLayout;

      QCheckBox* checkbox =
          new QCheckBox(tr("Strict word generation") + ".", this);
      checkbox->setChecked(settings.value("strictGeneration", true).toBool());
      connect(checkbox, SIGNAL(stateChanged(int)), parent, SLOT(StrictGeneration(int)));

      startBoxLayout->addWidget(checkbox);
      startBox->setLayout(startBoxLayout);
      dialogLayout->addWidget(startBox);

      //
      QDialogButtonBox* buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok, this);
      connect(buttonBox, &QDialogButtonBox::accepted, this, &QDialog::accept);
      dialogLayout->addWidget(buttonBox);

      setWindowTitle(tr("Preferences"));
      setLayout(dialogLayout);
    }
  };
};
