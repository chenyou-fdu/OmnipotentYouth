#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(std::shared_ptr<CTraderApi>trader, std::shared_ptr<CUserApi>user, QWidget *parent) :
    TraderApi(trader),
    UserApi(user),
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MktWidget=new market(TraderApi,UserApi);
    MktWidget->Initial();
   this->setCentralWidget(MktWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete MktWidget;
}

void MainWindow::on_pushButton_clicked()
{

}
