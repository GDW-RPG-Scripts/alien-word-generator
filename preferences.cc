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
