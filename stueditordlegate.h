#ifndef STUEDITORDLEGATE_H
#define STUEDITORDLEGATE_H

#include <QObject>

class StuTableDelegeter;

namespace Ui {
class StuEditor;
}

class StuEditorDlegate : public QObject
{
    Q_OBJECT
public:
    explicit StuEditorDlegate(QObject *parent = 0);
    StuEditorDlegate(Ui::StuEditor *stuEditor, QObject *parent = 0);

    void setupSignal(Ui::StuEditor *stuEditor);

private:
    StuTableDelegeter *tableDelegate;
signals:
    
public slots:
    
};

#endif // STUEDITORDLEGATE_H
