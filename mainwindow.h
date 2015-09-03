#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>
#include <QMenu>
#include <QtGui>
#include <QtCore>
#include "market.h"
#include "api/ctraderapi.h"
#include "api/cuserapi.h"
#include "public_info.h"
#include "login_dialog.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(std::shared_ptr<class CTraderApi>,std::shared_ptr<class CUserApi>,QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_actionDenglu_triggered();

    void on_actionLianjie_triggered();

private:

    Login_dialog *lg=nullptr;
    Ui::MainWindow *ui;



    std::shared_ptr<class CTraderApi> TraderApi;
    std::shared_ptr<class CUserApi> UserApi;
    market* MktWidget=NULL;
};

#endif // MAINWINDOW_H
