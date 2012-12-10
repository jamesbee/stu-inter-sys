#include "stutablemodel.h"

StuTableModel::StuTableModel(QObject *parent) :
  QAbstractTableModel(parent)
{
}

StuTableModel::StuTableModel(QList<QPair<QString, QString> > students, QObject *parent) :
  QAbstractTableModel(parent)
{
  listOfStudents = students;
}

int StuTableModel::rowCount(const QModelIndex &parent) const
{
  Q_UNUSED(parent);
  return listOfStudents.size();
}

int StuTableModel::columnCount(const QModelIndex &parent) const
{
  Q_UNUSED(parent);
  return 2;
}

QVariant StuTableModel::data(const QModelIndex &index, int role) const
{
  if (!index.isValid())
    return QVariant();

  if (index.row() >= listOfStudents.size() || index.row() < 0)
    return QVariant();

  if (role == Qt::DisplayRole) {
      QPair<QString, QString> pair = listOfStudents.at(index.row());

      if (index.column() == 0)
        return pair.first;
      else if (index.column() == 1)
        return pair.second;
    }
  return QVariant();
}

QVariant StuTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
  if (role != Qt::DisplayRole)
    return QVariant();

  if (orientation == Qt::Horizontal) {
      switch (section) {
        case 0:
          return tr("姓名");
        case 1:
          return tr("证件号");
        default:
          return QVariant();
        }
    }
  return QVariant();
}

bool StuTableModel::insertRows(int position, int rows, const QModelIndex &index)
{
  Q_UNUSED(index);
  beginInsertRows(QModelIndex(), position, position+rows-1);

  for (int row=0; row < rows; row++) {
      QPair<QString, QString> pair(" ", " ");
      listOfStudents.insert(position, pair);
    }

  endInsertRows();
  return true;
}

bool StuTableModel::removeRows(int position, int rows, const QModelIndex &index)
{
  Q_UNUSED(index);
  beginRemoveRows(QModelIndex(), position, position+rows-1);

  for (int row=0; row < rows; ++row) {
      listOfStudents.removeAt(position);
    }

  endRemoveRows();
  return true;
}

bool StuTableModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
  if (index.isValid() && role == Qt::EditRole) {
      int row = index.row();

      QPair<QString, QString> p = listOfStudents.value(row);

      if (index.column() == 0)
        p.first = value.toString();
      else if (index.column() == 1)
        p.second = value.toString();
      else
        return false;

      listOfStudents.replace(row, p);
      emit(dataChanged(index, index));

      return true;
    }

  return false;
}

Qt::ItemFlags StuTableModel::flags(const QModelIndex &index) const
{
  if (!index.isValid())
    return Qt::ItemIsEnabled;

  return QAbstractTableModel::flags(index) | Qt::ItemIsEditable;
}

QList< QPair<QString, QString> > StuTableModel::getList()
{
  return listOfStudents;
}
