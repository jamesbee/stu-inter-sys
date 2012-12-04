#include "centerview.h"
#include "ui_centerview.h"

#include "ui_inter_editor.h"
#include "ui_issue_editor.h"
#include "ui_stu_editor.h"
#include "ui_inter_maneger.h"

CenterView::CenterView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CenterView),
    interEditor_ui(new Ui::InterEditor),
    stuEditor_ui(new Ui::StuEditor),
    issueEditor_ui(new Ui::IssueEditor),
    interManeger_ui(new Ui::InterManeger)

{
    ui->setupUi(this);

    interEditor_ui->setupUi(ui->interEditor);
    issueEditor_ui->setupUi (ui->issueEditor);
    stuEditor_ui->setupUi (ui->stuEditor);
    interManeger_ui->setupUi (ui->interManeger);

    issueEditorDelegate = new IssueEditorDelegate(issueEditor_ui, this);
    interEditorDelegate = new InterEditorDelegate(interEditor_ui, this);
    stuEditorDelegate = new StuEditorDlegate(stuEditor_ui, this);
}

CenterView::~CenterView()
{
    delete ui;
}

void CenterView::nextTab()
{
    if(ui->tabView->currentIndex() < 3)
    {
        ui->tabView->setCurrentIndex(
                    ui->tabView->currentIndex() + 1);
    }
}
