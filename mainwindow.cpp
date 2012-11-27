#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  CenterView *centerWidget = new CenterView(this);
  this->setCentralWidget(centerWidget);
}

MainWindow::~MainWindow()
{
  delete ui;
}
