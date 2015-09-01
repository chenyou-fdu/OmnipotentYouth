#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include "position.h"
#include<QColor>
#include<QBrush>
#include<QSize>
#include <QDebug>
Position::Position(QObject *parents)
{


}

void Position::setTableMode(QMap<QString, QVector<QString> > map, std::shared_ptr<QString> inst_ID)
{
    beginResetModel();
    current_instrumentID=inst_ID;
    currencyMap=map;
    endResetModel();
}

void Position::setTableMode(QMap<QString, QVector<QString> > map)
{
    beginResetModel();
     currencyMap=map;
     endResetModel();

}

int Position::rowCount(const QModelIndex &parent) const
{
    return 10;
}

int Position::columnCount(const QModelIndex &parent) const
{
    return 4;
}
//building....
QVariant Position::data(const QModelIndex &index, int role) const
{


    if (!index.isValid())
        return QVariant();
    if (role == Qt::DisplayRole) {
        if((index.row()==1)&&(index.column()==0)){
            return QString("卖");
        }
        else if((index.row()==3)&&(index.column()==0)){
            return QString("价");
        }
        else if((index.row()==6)&&(index.column()==0)){
            return QString("买");
        }
        else if((index.row()==8)&&(index.column()==0)){
            return QString("价");
        }
        else if(index.column()==1){
            if(index.row()<5){
                return QString::number(5-index.row());
            }

            return QString::number(index.row()%5+1);
        }
        else if(index.column()==2){
            if(current_instrumentID->size()==0){
                return QVariant();
            }
            else if(index.row()<5){
               // return *current_instrumentID;
                return currencyMap.find(*current_instrumentID).value().at(4*index.row());
            }
            else{
                return currencyMap.find(*current_instrumentID).value().at(2+(index.row()-5)*4);
            }
        }
        else if(index.column()==3){
            if(current_instrumentID->size()==0){
                return QVariant();
            }
            else if(index.row()<5){
                return currencyMap.find(*current_instrumentID).value().at(4*index.row()+1);
            }
            else{
                return currencyMap.find(*current_instrumentID).value().at(3+(index.row()-5)*4);
            }
        }
        return QString("-");
    }
    else if (role == Qt::TextAlignmentRole) {
        //return int(Qt::AlignRight|Qt::AlignVCenter);
        if(index.column()==0){
            return int(Qt::AlignRight|Qt::AlignVCenter);
        }
        else if(index.column()==1){
            return int(Qt::AlignLeft|Qt::AlignVCenter);
        }
        else    return int(Qt::AlignRight|Qt::AlignVCenter);
    }
    if(role==Qt::BackgroundRole){
        return QBrush(QColor(0,0,10));
    }
    if(role==Qt::ForegroundRole){
        if(index.column()==2){
            return QBrush(QColor(50,50,50));
        }
        if(index.column()==3){
            return QBrush(QColor(100,100,100));
        }
        return QBrush(QColor(178,5,48));
    }
    if(role==Qt::SizeHintRole){
//        if(index.column()==0||index.column()==1){

//            return QSize(25,10);
//        }
        return QSize(25,25);
        //return QVariant();
    }
    //缺省不能少了
    return QVariant();
}
QVariant Position::headerData(int section, Qt::Orientation orientation, int role) const
{

    return QVariant();
}
