//表示所订阅的合约行情的Model
#ifndef MARKET_INFO_H
#define MARKET_INFO_H

#include<QAbstractTableModel>
#

class Market_Info : public QAbstractTableModel
{
public:
    Market_Info(QObject *parents=0);
    void setTableMode( QMap<QString,QVector<QString>>map);
    int rowCount(const QModelIndex &parent)const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;

private:
    QMap<QString,QVector<QString>>currencyMap;
    QVector<QString> head;
};

#endif // MARKET_INFO_H
