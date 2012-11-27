#include "centerview.h"
#include "ui_centerview.h"

CenterView::CenterView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CenterView)
{
    ui->setupUi(this);
}

CenterView::~CenterView()
{
    delete ui;
}
