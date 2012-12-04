#include "stueditordlegate.h"
#include "ui_stu_editor.h"
#include "stutabledelegeter.h"

StuEditorDlegate::StuEditorDlegate(QObject *parent) :
    QObject(parent)
{
}

StuEditorDlegate::StuEditorDlegate(Ui::StuEditor *stuEditor, QObject *parent) :
    QObject(parent)
{
    stuEditor->btn_apply->setDisabled(true);

    setupSignal(stuEditor);
    tableDelegate = new StuTableDelegeter(stuEditor->stuTableView,this);
}

void StuEditorDlegate::setupSignal(Ui::StuEditor *stuEditor)
{
    connect(stuEditor->btn_nextTab,SIGNAL(clicked()),
            this->parent(),SLOT(nextTab()));
}
