#ifndef CUSER_THREAD_H
#define CUSER_THREAD_H

#include "../api/cuserapi.h"
#include<QThread>

class CUser_Thread : public QThread
{
public:
    CUser_Thread(class CUserApi* userapi):UserApi(userapi){}
    ~CUser_Thread(){}
    void run();
    class CUserApi* UserApi;
};

#endif // CUSER_THREAD_H
