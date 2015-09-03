#include "market.h"
#include "ui_market.h"

#include <QDebug>
market::market(std::shared_ptr<class CTraderApi>trader, std::shared_ptr<class CUserApi>user, QWidget *parent) :
    TraderApi(trader),
    UserApi(user),
    QWidget(parent),
    ui(new Ui::market)
{
    //
   Insert_Ord=new InsertOrder(TraderApi,InstrumentIDs);
    //
//    InstrumentIDs=new QVector<QString>();
//    current_instr=new QString();
    //
    Mkt_Info_Model=new Market_Info();
    Position_info=new Position();
    Position_info->setTableMode(Position_Price,current_instr);
    Mkt_Info_Model->setTableMode(MktDatMap);

    //
   Refreash=new MktinfoRefreshThread();
    //
    ui->setupUi(this);
    ui->MktPriceTab->setModel(Mkt_Info_Model);
    ui->MktPriceTab->setShowGrid(false);
    ui->MktPriceTab->setAlternatingRowColors(true);
    ui->MktPriceTab->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setModel(Position_info);
    for(int i=0;i<4;++i){
        if(i<2){
            ui->tableView->setColumnWidth(i,50);
        }
        else{
            ui->tableView->setColumnWidth(i,100);
        }

    }
    for(int i = 0; i<10; ++i){
        ui->tableView->setRowHeight(i,30);
    }
//    connect to spi
    connect(UserApi->Spi,SIGNAL(OnRtnDepthMarketData(CUstpFtdcDepthMarketDataField*)),
            this,SLOT(RecordMarketPrice(CUstpFtdcDepthMarketDataField*)));
    connect(UserApi->Spi,SIGNAL(OnRtnDepthMarketData(CUstpFtdcDepthMarketDataField*)),
            this,SLOT(RecordPoistion(CUstpFtdcDepthMarketDataField*)));
    connect(UserApi->Spi,SIGNAL(OnRspUserLogin(CUstpFtdcRspUserLoginField*,CUstpFtdcRspInfoField*,int,bool)),
            this,SLOT(SubScribMarket()));
    //building...
    connect(this,SIGNAL(Set_IDs()),this->Insert_Ord,SLOT(Insert_IDs()));
    //
    connect(ui->MktPriceTab,SIGNAL(doubleClicked(QModelIndex)),this,SLOT(Show_Insert_Order(QModelIndex)));
    connect(ui->MktPriceTab,SIGNAL(clicked(QModelIndex)),this,SLOT(Set_Current_InstrumentID(QModelIndex)));
    connect(ui->MktPriceTab,SIGNAL(clicked(QModelIndex)),this,SLOT(Refreash_Pos()));
   connect(Refreash,SIGNAL(Refreash_mkt()),this,SLOT(Refreash_Mkt()));

    Refreash->start();
    //
    connect(TraderApi->Spi,SIGNAL(OnRspQryTrade(CUstpFtdcTradeField*,CUstpFtdcRspInfoField*,int,bool)),
            this,SLOT(show_qry(CUstpFtdcTradeField*,CUstpFtdcRspInfoField*,int,bool)));
    connect(TraderApi->Spi,SIGNAL(OnRspQryOrder(CUstpFtdcOrderField*,CUstpFtdcRspInfoField*,int,bool)),
            this,SLOT(show_qry()));
    connect(TraderApi->Spi,SIGNAL(OnRspQryInvestorPosition(CUstpFtdcRspInvestorPositionField*,CUstpFtdcRspInfoField*,int,bool)),
            this,SLOT(show_qry()));
}

market::~market()
{
    delete ui;
    delete Mkt_Info_Model;
    delete Position_info;
    delete Refreash;
    delete Insert_Ord;
}





//初始化市场信息数据
void market::Initial()

{

    const char* market="MARKETDATA1";
    if(!tf->Open(API_INI_NAME)){
        //...Show something in the widget..building
        qDebug()<<"不能打开配置文件<config.ini>\n";
    }

    int subnum=tf->ReadInt(market,"SubInsNum",0);

    char** contracts = new char*[subnum];
    int i=0;
    char instmp[128];
    char tmp[256];
    for(;i<subnum;i++)
    {
        sprintf(instmp,"SubIns%d",i+1);
        tf->ReadString(market,instmp,"",tmp,sizeof(tmp)-1);
        contracts[i]=new char[strlen(tmp)+1];
        strncpy(contracts[i],tmp,strlen(tmp)+1);
    }

    for(int i=0;i<subnum;i++){
         MktDatMap.insert(QString::fromUtf8(contracts[i]),QVector<QString>(8," "));
         Position_Price.insert(QString::fromUtf8(contracts[i]),QVector<QString>(20,"-"));
         InstrumentIDs->push_back(QString::fromUtf8(contracts[i]));
         qDebug()<<contracts[i];

    }
    One_Min_Data=new Restore_Data(InstrumentIDs,UserApi);
    emit(Set_IDs());
    Refreash_Mkt();
}



//在登陆后被调用读取配置文件，在修改配置文件后重新读取配置文件，订阅合约
void market::SubScribMarket()
{

    const char* market="MARKETDATA1";
    if(!tf->Open(API_INI_NAME)){
        //...Show something in the widget..building
        qDebug()<<"不能打开配置文件<config.ini>\n";
    }
    int subnum=tf->ReadInt(market,"SubInsNum",0);

    char** contracts = new char*[subnum];
    int i=0;
    char instmp[128];
    char tmp[256];
    for(;i<subnum;i++)
    {
        sprintf(instmp,"SubIns%d",i+1);
        tf->ReadString(market,instmp,"",tmp,sizeof(tmp)-1);
        contracts[i]=new char[strlen(tmp)+1];
        strncpy(contracts[i],tmp,strlen(tmp)+1);
//        MktDatMap.insert(QString::fromUtf8(contracts[i]),QVector<QString>(8," "));
//        InstrumentIDs->push_back(QString::fromUtf8(contracts[i]));
//        Position_Price.insert(QString::fromUtf8(contracts[i]),QVector<QString>(20,"-"));
    }


     UserApi->Api->SubMarketData(contracts, subnum);
     int unsubnum = tf->ReadInt(market,"UnSubInsNum",0);
     char** uncontracts = new char*[unsubnum];
     i=0;
     for(;i<unsubnum;i++)
     {
         sprintf(instmp,"UnSubIns%d",i+1);
         tf->ReadString(market,instmp,"",tmp,sizeof(tmp)-1);
         uncontracts[i]=new char[strlen(tmp)+1];
         strncpy(uncontracts[i],tmp,strlen(tmp)+1);
     }
     UserApi->Api->UnSubMarketData(uncontracts, unsubnum);
     emit(Set_IDs());

}

void market::RecordMarketPrice(CUstpFtdcDepthMarketDataField *pMarketData)
{

    QVector<QString>tmp;
    tmp.push_back(QString::fromUtf8(pMarketData->InstrumentID));
    if(pMarketData->LastPrice==DBL_MAX){
        tmp.push_back(" ");
    }
    else{
        tmp.push_back(QString::number(pMarketData->LastPrice));
    }


    if(pMarketData->Volume== 2147483647){
        tmp.push_back(" ");

    }
    else{
        tmp.push_back(QString::number(pMarketData->Volume));
    }



    if (pMarketData->BidPrice1==DBL_MAX){
        tmp.push_back(" ");
    }
    else{
        tmp.push_back(QString::number(pMarketData->BidPrice1));
    }
    if(pMarketData->BidVolume1== 2147483647){
        tmp.push_back(" ");
    }
    else{
        tmp.push_back(QString::number(pMarketData->BidVolume1));
    }


    if (pMarketData->AskPrice1==DBL_MAX){
        tmp.push_back(" ");
    }
    else{
        tmp.push_back(QString::number(pMarketData->AskPrice1));
    }
    if(pMarketData->AskVolume1== 2147483647){
        tmp.push_back(" ");
    }
    else{
        tmp.push_back(QString::number(pMarketData->AskVolume1));
    }
    tmp.push_back(QString::number(pMarketData->LastPrice-pMarketData->PreClosePrice));

    MktDatMap.insert(QString::fromUtf8(pMarketData->InstrumentID),tmp);
}



void market::RecordPoistion(CUstpFtdcDepthMarketDataField *pMarketData)
{
    QVector<QString> pos_price;
    if (pMarketData->BidPrice1==DBL_MAX){
        pos_price.push_back("-");
    }
    else{
        pos_price.push_back(QString::number(pMarketData->BidPrice1));
    }
    if(pMarketData->BidVolume1== 2147483647){
        pos_price.push_back("-");
    }
    else{
        pos_price.push_back(QString::number(pMarketData->BidVolume1));
    }


    if (pMarketData->AskPrice1==DBL_MAX){
        pos_price.push_back("-");
    }
    else{

        pos_price.push_back(QString::number(pMarketData->AskPrice1));
    }
    if(pMarketData->AskVolume1== 2147483647){
        pos_price.push_back("-");
    }
    else{
        pos_price.push_back(QString::number(pMarketData->AskVolume1));
    }
    if (pMarketData->BidPrice2==DBL_MAX){
        pos_price.push_back("-");
    }
    else{
        pos_price.push_back(QString::number(pMarketData->BidPrice1));
    }
    if(pMarketData->BidVolume2== 2147483647){
        pos_price.push_back("-");
    }
    else{
        pos_price.push_back(QString::number(pMarketData->BidVolume1));
    }


    if (pMarketData->AskPrice2==DBL_MAX){
        pos_price.push_back("-");
    }
    else{

        pos_price.push_back(QString::number(pMarketData->AskPrice1));
    }
    if(pMarketData->AskVolume2== 2147483647){
        pos_price.push_back("-");
    }
    else{
        pos_price.push_back(QString::number(pMarketData->AskVolume1));
    }
    if (pMarketData->BidPrice3==DBL_MAX){
        pos_price.push_back("-");
    }
    else{
        pos_price.push_back(QString::number(pMarketData->BidPrice1));
    }
    if(pMarketData->BidVolume3== 2147483647){
        pos_price.push_back("-");
    }
    else{
        pos_price.push_back(QString::number(pMarketData->BidVolume1));
    }


    if (pMarketData->AskPrice3==DBL_MAX){
        pos_price.push_back("-");
    }
    else{

        pos_price.push_back(QString::number(pMarketData->AskPrice1));
    }
    if(pMarketData->AskVolume3== 2147483647){
        pos_price.push_back("-");
    }
    else{
        pos_price.push_back(QString::number(pMarketData->AskVolume1));
    }
    if (pMarketData->BidPrice4==DBL_MAX){
        pos_price.push_back("-");
    }
    else{
        pos_price.push_back(QString::number(pMarketData->BidPrice1));
    }
    if(pMarketData->BidVolume4== 2147483647){
        pos_price.push_back("-");
    }
    else{
        pos_price.push_back(QString::number(pMarketData->BidVolume1));
    }


    if (pMarketData->AskPrice4==DBL_MAX){
        pos_price.push_back("-");
    }
    else{

        pos_price.push_back(QString::number(pMarketData->AskPrice1));
    }
    if(pMarketData->AskVolume4== 2147483647){
        pos_price.push_back("-");
    }
    else{
        pos_price.push_back(QString::number(pMarketData->AskVolume1));
    }
    if (pMarketData->BidPrice5==DBL_MAX){
        pos_price.push_back("-");
    }
    else{
        pos_price.push_back(QString::number(pMarketData->BidPrice1));
    }
    if(pMarketData->BidVolume5== 2147483647){
        pos_price.push_back("-");
    }
    else{
        pos_price.push_back(QString::number(pMarketData->BidVolume1));
    }


    if (pMarketData->AskPrice5==DBL_MAX){
        pos_price.push_back("-");
    }
    else{

        pos_price.push_back(QString::number(pMarketData->AskPrice1));
    }
    if(pMarketData->AskVolume5== 2147483647){
        pos_price.push_back("-");
    }
    else{
        pos_price.push_back(QString::number(pMarketData->AskVolume1));
    }
    Position_Price.insert(QString::fromUtf8(pMarketData->InstrumentID),pos_price);
}

void market::Show_Insert_Order(const QModelIndex )
{
   Insert_Ord->show();
}

void market::Set_Current_InstrumentID(QModelIndex index)
{
    *current_instr=((MktDatMap.begin()+index.row()).key());
}

void market::Refreash_Mkt()
{

    Mkt_Info_Model->setTableMode(MktDatMap);
    Position_info->setTableMode(Position_Price);
}
void market::Refreash_Pos(){
    Position_info->setTableMode(Position_Price,current_instr);
}





void market::on_pushButton_clicked()
{
    CUstpFtdcQryOrderField QryOrder;
    memset(&QryOrder,0,sizeof(CUstpFtdcQryOrderField));

    strcpy_s(QryOrder.ExchangeID,"CFFEX");
    strcpy_s(QryOrder.BrokerID,g_BrokerID);
    strcpy_s(QryOrder.UserID,g_UserID);
    //strcpy_s(QryOrder.OrderSysID,"");
    TraderApi->Api->ReqQryOrder(&QryOrder,g_nOrdLocalID++);

    return ;
}

void market::show_qry()
{
    qDebug()<<"something\n";
}
