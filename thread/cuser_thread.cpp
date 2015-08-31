#include "cuser_thread.h"


void CUser_Thread::run()
{
    UserApi->Api->Init();
    UserApi->Api->Join();
}
