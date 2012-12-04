#include "issueeditordelegate.h"
#include "ui_issue_editor.h"

IssueEditorDelegate::IssueEditorDelegate(QObject *parent) :
    QObject(parent)
{
}

IssueEditorDelegate::IssueEditorDelegate(Ui::IssueEditor *issueEditor, QObject *parent):
    QObject(parent)
{
    issueEditor->btn_apply->setDisabled(true);
    setupSignals(issueEditor);
}

void IssueEditorDelegate::setupSignals(Ui::IssueEditor *issueEditor)
{
    connect(issueEditor->btn_nextTab,SIGNAL(clicked()),
            this->parent(),SLOT(nextTab()));
}
