#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QThread>
MainWindow::MainWindow(std::shared_ptr<CTraderApi>trader, std::shared_ptr<CUserApi>user, QWidget *parent) :
    TraderApi(trader),
    UserApi(user),
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    lg=new Login_dialog(TraderApi,UserApi);
    ui->setupUi(this);
    MktWidget=new market(TraderApi,UserApi,ui->center);
    MktWidget->Initial();

  // this->setCentralWidget(MktWidget);


}

MainWindow::~MainWindow()
{
    delete ui;
    delete MktWidget;
}

void MainWindow::on_pushButton_clicked()
{

}



void MainWindow::on_actionDenglu_triggered()
{
    char tmp[256];
    sprintf(tmp,"MARKETDATA%d",1);
    TraderApi->InitialInstance(tmp,API_INI_NAME);
    lg->setModal(true);
    lg->show();


}

void MainWindow::on_actionLianjie_triggered()
{
    char tmp[256];
    sprintf(tmp,"MARKETDATA%d",1);
    UserApi->InitInstance(tmp,API_INI_NAME);
}
