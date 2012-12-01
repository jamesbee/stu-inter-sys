#include "centerview.h"
#include "ui_centerview.h"

#include "ui_InterEditor.h"
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
}

CenterView::~CenterView()
{
    delete ui;
}
