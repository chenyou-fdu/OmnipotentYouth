#ifndef ONE_MINUTE_DATA_H
#define ONE_MINUTE_DATA_H

#include <QThread>

class One_Minute_Data : public QThread
{
    Q_OBJECT
public:
    One_Minute_Data(QObject *parent=0);
    void run();
signals:
    void One_Min_Over();
};

#endif // ONE_MINUTE_DATA_H
