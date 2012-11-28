#include "centerview.h"
#include "ui_centerview.h"
#include "ui_InterEditor.h"

CenterView::CenterView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CenterView),
    interEditor_ui(new Ui::InterEditor)
{
    ui->setupUi(this);
    interEditor_ui->setupUi(ui->interEditor);
}

CenterView::~CenterView()
{
    delete ui;
}
