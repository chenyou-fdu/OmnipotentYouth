#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include "market_info.h"
#include <QDebug>
Market_Info::Market_Info(QObject *parents)
{
    head.push_back("合约");
    head.push_back("最新价");
    head.push_back("成交量");
    head.push_back("买价");
    head.push_back("买量");
    head.push_back("卖价");
    head.push_back("卖量");
    head.push_back("涨跌");

}

void Market_Info::setTableMode( QMap<QString, QVector<QString>> map)
{
    beginResetModel();
    currencyMap=map;
    endResetModel();
}

int Market_Info::rowCount(const QModelIndex &parent) const
{
    return currencyMap.size();
}

int Market_Info::columnCount(const QModelIndex &parent) const
{
    return 8;
}

QVariant Market_Info::data(const QModelIndex &index, int role) const
{

    if (!index.isValid())
        return QVariant();
    if (role == Qt::TextAlignmentRole) {
    return int(Qt::AlignRight | Qt::AlignVCenter);}
    else if (role == Qt::DisplayRole) {
        if(currencyMap.empty()){
            return QVariant();
        }
        //return QString("hehe");
        QVector<QString> tmp=(currencyMap.begin()+index.row()).value();


        return tmp.at(index.column());
    }

    return QVariant();
}

QVariant Market_Info::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role != Qt::DisplayRole)
    return QVariant();
    if(orientation==0x2){
        //return (currencyMap.begin()+section).key();
        return QVariant();
    }
    if(orientation==0x1){
       return head.at(section);
       //return QVariant();
    }
}

