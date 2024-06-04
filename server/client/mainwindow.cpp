#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)     //Constructor
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _server = nullptr;
}

MainWindow::~MainWindow()       //desctructor
{
    delete ui;
}

void MainWindow::on_Button_Start_Server_clicked()
{   //Suncucu baslatılmamıssa ('_server==nullptr') gui'den port numarası alır ve yeni bir 'MyTcpServer' olusturur
    if(_server == nullptr){
        auto port = ui->Spn_Server_Port->value();
        _server = new MyTcpServer(port);
        connect(_server,&MyTcpServer::newClientConnected,this,&MainWindow::New_Client_Connected);   //Yeni bir istemci baglandıgında
        connect(_server,&MyTcpServer::dataRecieved,this,&MainWindow::clientDataReceived);           //İstemciden veri alındıgında
        connect(_server,&MyTcpServer::clientDisconnect,this,&MainWindow::clientDisconnected);       //İstemci baglantısı kesildiginde

    }
//Sunucunun baslatılıp baslatılmadıgını kontrol eder ve durumu 'Connection_Status' etiketi uzerinden gunceller
    auto state = (_server->isStarted())? "1" : "0";
    ui->Connection_Status->setProperty("state",state);
    style()->polish(ui->Connection_Status);

}

void MainWindow::New_Client_Connected()
{//Yeni bir istemci baglandıgında konsola yazan yazı
    ui->lstConsole->addItem("New Client connected");
}


void MainWindow::on_BtnSendToAll_clicked()
{//Kullanıcıdan alınan mesajı alır ve tum baglı istemcilere gonderir
    auto message = ui->lnMsg->text().trimmed();
    _server->sendToAll(message);
}

void MainWindow::clientDisconnected()
{//İstemci baglantısı kesildiginde konsola yazan yazı
    ui->lstConsole->addItem("Client disconnected");
}

void MainWindow::clientDataReceived(QString message)
{
    ui->lstConsole->addItem(message);
}

