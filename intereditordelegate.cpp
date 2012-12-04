#include "intereditordelegate.h"
#include "ui_inter_editor.h"

InterEditorDelegate::InterEditorDelegate(QObject *parent) :
    QObject(parent)
{

}

InterEditorDelegate::InterEditorDelegate(Ui::InterEditor *interEditor, QObject *parent) :
    QObject(parent)
{
    interEditor->btn_apply->setDisabled(true);
    setupSignals(interEditor);
}

void InterEditorDelegate::setupSignals(Ui::InterEditor *interEditor)
{
    connect(interEditor->btn_nextTab,SIGNAL(clicked()),
            this->parent(),SLOT(nextTab()));
}
