#ifndef ISSUEEDITORDELEGATE_H
#define ISSUEEDITORDELEGATE_H

#include <QObject>

namespace Ui
{
class IssueEditor;
}

class IssueEditorDelegate : public QObject
{
    Q_OBJECT
public:
    explicit IssueEditorDelegate(QObject *parent = 0);
    IssueEditorDelegate(Ui::IssueEditor *issueEditor, QObject *parent = 0);

    void setupSignals(Ui::IssueEditor *issueEditor);
signals:

public slots:

};

#endif // ISSUEEDITORDELEGATE_H
