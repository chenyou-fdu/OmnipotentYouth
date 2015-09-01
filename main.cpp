#include "mainwindow.h"
#include <QApplication>
#include <memory>

#include "profile.h"
#include "login_dialog.h"
#include "api/ctraderapi.h"
#include "api/cuserapi.h"
#include "public_info.h"


#include "market.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    strcpy(g_BrokerID, "1004");
    strcpy(g_UserID, "0193764601");
    strcpy(g_Password, "d50cc7d90bd7908e10a46fc5d556dda3");


    //char* API_INI_NAME="./config/mduserdemo.ini";
    TIniFile tf;
    char tmp[256];
    if (!tf.Open(API_INI_NAME))
    {
        qDebug()<<"不能打开配置文件\n";
        exit(-1000);
    }
    sprintf(tmp,"MARKETDATA%d",1);

    std::shared_ptr<typename CTraderApi> TraderApi(new CTraderApi);
    std::shared_ptr<typename CUserApi>UserApi(new CUserApi);


    Login_dialog lg(TraderApi,UserApi);

    TraderApi->InitialInstance(tmp,API_INI_NAME);
    UserApi->InitInstance(tmp,API_INI_NAME);
    lg.setModal(true);
    lg.show();

     MainWindow w(TraderApi,UserApi);

      w.show();

    return a.exec();
}
