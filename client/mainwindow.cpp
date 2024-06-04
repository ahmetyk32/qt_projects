#include "mainwindow.h"
#include "qabstractsocket.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)       //constructor QT arayuzunu kurar.
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setDeviceController();
}

MainWindow::~MainWindow()       //destructor.Arayüz temizler
{
    delete ui;
}

void MainWindow::on_InIPAddress_textChanged(const QString &arg1)
{       //IP adresi girilirken 0 yazarsak uc nokta koy saga atla
    QString state = "0";
    if(arg1 == "..."){

        state = "";

    }else{

    QHostAddress address(arg1);

    if(QAbstractSocket :: IPv4Protocol == address.protocol()){  //IP adresi giris alanındaki metin degistiginde cagrılır.Gecerli bir IPv4 adresi olup olmadıgını kontrol eder.
        state = "1";
        }
    }

    ui->InIPAddress->setProperty("state",state);
    style()->polish(ui->InIPAddress);
}


void MainWindow::on_Button_Connect_clicked()
{
    if(_controller.isConnected()){      //butona tıklandıgındaki durum
        _controller.disconnect();
    }else{

        auto ip = ui->InIPAddress->text();
        auto port = ui->spnPort->value();
        _controller.connetToDevice(ip,port);

    }

}

void MainWindow::device_connected()
{       //baglantı kesildikten sonra cagrılır.Konsola mesajı ekler ve buton metnini 'connect' olarak deistirir.veri gondertmez
    ui->lstConsole->addItem("Connected to Device");
    ui->Button_Connect->setText("Disconnect");
    ui->Group_Send_Data->setEnabled(true);
}

void MainWindow::device_disconnected()
{
    ui->lstConsole->addItem("Disconnected from Device");
    ui->Button_Connect->setText("Connect");
    ui->Group_Send_Data->setEnabled(false);
}

void MainWindow::device_stateChanged(QAbstractSocket::SocketState state)
{//Soketin durumu degistiginde cagrılır konsola yeni durumu ekler.
    QMetaEnum metaEnum = QMetaEnum::fromType<QAbstractSocket::SocketState >();
    ui->lstConsole->addItem(metaEnum.valueToKey(state));
}

void MainWindow::device_errorOccurred(QAbstractSocket::SocketError error)
{//Bir hata olustugunda cagrılır konsola hata mesajını ekler
    QMetaEnum metaEnum = QMetaEnum::fromType<QAbstractSocket::SocketError >();
    ui->lstConsole->addItem(metaEnum.valueToKey(error));
}

void MainWindow::device_dataReady(QByteArray data)
{//Cihazdan veri alındıgında cagrılır konsola gelen veriyi ekler
    ui->lstConsole->addItem(QString(data));
}

void MainWindow::setDeviceController(){
    //'DeviceControler' sınıfı ile 'MainWindow' sınıfı arasındaki baglantıyı kurar.'DeviceControler' sinyallerini 'MainWindow' sloatlarına baglar
    connect(&_controller, &DeviceControler::connected,    this,&MainWindow::device_connected);
    connect(&_controller, &DeviceControler::disconnected, this,&MainWindow::device_disconnected);
    connect(&_controller, &DeviceControler::stateChanged, this,&MainWindow::device_stateChanged);
    connect(&_controller, &DeviceControler::errorOccurred,this,&MainWindow::device_errorOccurred);
    connect(&_controller, &DeviceControler::dataReady,    this,&MainWindow::device_dataReady);
}

void MainWindow::on_Button_Send_clicked()
{//Gonder dugmesine tıklandıgında cagrılır ve kullanıcıdan alınan mesaj kontrolcusu ile gönderir.
    auto message = ui->InMessage->text().trimmed();
    _controller.send(message);
}

