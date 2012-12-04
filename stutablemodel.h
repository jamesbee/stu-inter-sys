#ifndef STUTABLEMODEL_H
#define STUTABLEMODEL_H

#include <QAbstractTableModel>

class StuTableModel : public QAbstractTableModel
{
  Q_OBJECT
public:
  explicit StuTableModel(QObject *parent = 0);
  StuTableModel(QList< QPair<QString, QString> > listofStudents, QObject *parent=0);

  int rowCount(const QModelIndex &parent) const;
  int columnCount(const QModelIndex &parent) const;
  QVariant data(const QModelIndex &index, int role) const;
  QVariant headerData(int section, Qt::Orientation orientation, int role) const;
  Qt::ItemFlags flags(const QModelIndex &index) const;
  bool setData(const QModelIndex &index, const QVariant &value, int role=Qt::EditRole);
  bool insertRows(int position, int rows, const QModelIndex &index=QModelIndex());
  bool removeRows(int position, int rows, const QModelIndex &index=QModelIndex());
  QList< QPair<QString, QString> > getList();

private:
  QList< QPair<QString, QString> > listOfStudents;
  
signals:
  
public slots:
  
};

#endif // STUTABLEMODEL_H
