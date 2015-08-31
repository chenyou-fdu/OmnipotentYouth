#ifndef MARKET_H
#define MARKET_H

#include <QWidget>
#include <QMap>
#include <QVector>
#include <QString>
#include <QDebug>
#include <memory>
#include "USTPFtdcMduserApi.h"
#include "USTPFtdcUserApiDataType.h"
#include "USTPFtdcUserApiStruct.h"
#include "tab_models/market_info.h"
#include "tab_models/position.h"
#include "api/cuserapi.h"
#include "api/Ctraderapi.h"
#include "profile.h"
#include "public_info.h"
#include "insertorder.h"
#include "restore_data.h"
#include "thread/mktinfo_refresh_thread.h"
namespace Ui {
class market;
}
class CUserSpi;
class market : public QWidget
{
    Q_OBJECT

public:
    explicit market(std::shared_ptr<CTraderApi>, std::shared_ptr<class CUserApi>, QWidget *parent = 0);
    ~market();
public slots:
    void Initial();
private slots:
    void RecordMarketPrice(CUstpFtdcDepthMarketDataField *pMarketData);
    void SubScribMarket();
    void RecordPoistion(CUstpFtdcDepthMarketDataField *pMarketData);
    void Show_Insert_Order(const QModelIndex);
    void Set_Current_InstrumentID(QModelIndex);
    void Refreash_Mkt();
    void Refreash_Pos();
    void on_pushButton_clicked();
    void show_qry();

signals:
    void Set_IDs();
private:
    std::shared_ptr<class CUserApi>UserApi;
    std::shared_ptr<class CTraderApi>TraderApi;
    Ui::market *ui;
    Restore_Data* One_Min_Data = NULL;
   // std::shared_ptr<class Restore_Data> One_Minute_Data=new Restore_Data(InstrumentIDs,UserApi);
    //注意这里要new 新对象
   InsertOrder *Insert_Ord;

    QMap<QString,QVector<QString> >MktDatMap;
    QMap<QString,QVector<QString> >Position_Price;

    std::shared_ptr<QVector<QString> >InstrumentIDs=new QVector<QString>;
    std::shared_ptr< QString> current_instr=new QString;
   // QString *current_instr;
    //tab model
    Market_Info *Mkt_Info_Model;
    Position *Position_info;
    //

    MktinfoRefreshThread *Refreash;
//    CUserSpi *m_Userspi=g_userspi;
    TIniFile *tf=new(TIniFile);
};

#endif // MARKET_H
