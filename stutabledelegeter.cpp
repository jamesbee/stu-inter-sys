#include "stutabledelegeter.h"
#include <qheaderview.h>
#include "ui_stu_editor.h"

StuTableDelegeter::StuTableDelegeter(QObject *parent) :
  QObject(parent)
{

}

StuTableDelegeter::StuTableDelegeter(QTableView *stuTable, QObject *parent) :
  QObject(parent)
{
  model = new StuTableModel(this);
  model->insertRows (0,4);
  stuTable->setModel (model);
  stuTable->horizontalHeader()->setStretchLastSection(true);  //拉伸最后一列
  //stuTable->horizontalHeader()->setResizeMode(QHeaderView::Stretch);  //等长
}
