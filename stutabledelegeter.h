#ifndef STUTABLEDELEGETER_H
#define STUTABLEDELEGETER_H

#include <QObject>
#include <QTableView>
#include "stutablemodel.h"

class StuTableDelegeter : public QObject
{
  Q_OBJECT
public:
  explicit StuTableDelegeter(QObject *parent = 0);
  StuTableDelegeter(QTableView *stuTable, QObject *parent =0);

private:
  StuTableModel *model;

signals:

public slots:

};

#endif // STUTABLEDELEGETER_H
