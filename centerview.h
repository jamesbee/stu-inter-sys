#ifndef CENTERVIEW_H
#define CENTERVIEW_H

#include <QWidget>

namespace Ui {
class CenterView;

class InterEditor;
class StuEditor;
class InterManeger;
class IssueEditor;
}

class CenterView : public QWidget
{
    Q_OBJECT
    
public:
    explicit CenterView(QWidget *parent = 0);
    ~CenterView();
    
private:
    Ui::CenterView *ui;

    Ui::InterEditor *interEditor_ui;
    Ui::InterManeger *interManeger_ui;
    Ui::StuEditor *stuEditor_ui;
    Ui::IssueEditor *issueEditor_ui;
};

#endif // CENTERVIEW_H
