#ifndef PREFERENCES_HH
#define PREFERENCES_HH


#include <QDialog>

namespace GDW
{
  namespace RPG
  {
    class Workspace;

    class Preferences : public QDialog
    {
        Q_OBJECT

      public:
        Preferences(Workspace* parent);

      signals:

      public slots:
    };
  };
};

#endif // PREFERENCES_HH
