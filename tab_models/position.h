//表示五档行情的model
#ifndef POSITION_H
#define POSITION_H

#include <QAbstractTableModel>
#include <public_info.h>
#include <memory>
#include <QString>
class Position: public QAbstractTableModel
{
public:
    Position(QObject *parents=0);
    void setTableMode( QMap<QString,QVector<QString>>, std::shared_ptr<QString> inst_ID);
    void setTableMode(QMap<QString, QVector<QString> > );
    int rowCount(const QModelIndex &parent)const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
private:
    QMap<QString,QVector<QString> > currencyMap;
    std::shared_ptr<QString> current_instrumentID;
   // QString *current_instrumentID;
};

#endif // POSITION_H
