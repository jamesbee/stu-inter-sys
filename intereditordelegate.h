#ifndef INTEREDITORDELEGATE_H
#define INTEREDITORDELEGATE_H

#include <QObject>

namespace Ui {
class InterEditor;
}

class InterEditorDelegate : public QObject
{
  Q_OBJECT
public:
  explicit InterEditorDelegate(QObject *parent = 0);
  InterEditorDelegate(Ui::InterEditor *interEditor, QObject *parent = 0);

  void setupSignals(Ui::InterEditor *interEditor);
signals:
  
public slots:
  
};

#endif // INTEREDITORDELEGATE_H
