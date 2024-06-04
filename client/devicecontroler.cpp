#include "devicecontroler.h"

DeviceControler::DeviceControler(QObject *parent)   //QObject tarafından uretilen constructor fonksiyondur. *parent nesnesi bir ust nesne olarak atanabilir.
    : QObject{parent}
{
    //connect fonksiyonları 'QTcp Socket' sinyalleri ile 'DeviceControler' sloatları arasında baglantı kurar
    connect(&_socket, &QTcpSocket::connected,    this,&DeviceControler::connected);     //baglantı kuruldugunda sinyal tetiklenir
    connect(&_socket, &QTcpSocket::disconnected, this,&DeviceControler::disconnected);  //baglantı kesildiginde sinyal tetiklenir
    connect(&_socket, &QTcpSocket::stateChanged, this,&DeviceControler::socket_stateChanged);   //socket durumu degistiginde sinyal tetiklenir
    connect(&_socket, &QTcpSocket::errorOccurred,this,&DeviceControler::errorOccurred);         //hata olustugunda sinyal tetiklenir
    connect(&_socket, &QTcpSocket::readyRead,    this,&DeviceControler::socket_readyRead);      //veriler alındıgında sinyal tetiklenir
}

void DeviceControler::connetToDevice(QString ip,int port){  //verilen IP adresine ve porta baglanmak icin kullanılır
//Eger socket zaten acik ise ve aynı IP adresi ve porta baglı ise hicbir sey yapma. Eger farklı bir IP adresi ve port baglı ise önce mevcut baglantıyı kapat.Yeni IP adresi ve port ayarla ve bu sockete baglan
    if(_socket.isOpen()){
        if(ip == _ip && port == _port){
            return;

        }

        _socket.close();
    }

    _ip = ip;
    _port = port;
    _socket.connectToHost(_ip,_port);
}

void DeviceControler::disconnect()
{
    _socket.close();    //Mevcut TCP baglantısını kesmek icin kullanılır
}

QAbstractSocket::SocketState DeviceControler::state()
{
    return _socket.state(); //TCP soketinin mevcut durumunu döndürür
}

bool DeviceControler::isConnected()
{
    return _socket.state() == QAbstractSocket::ConnectedState;  //socket'in baglı olup olmadıgını kontrol eder ve baglı ise true degil ise false dondurur.
}

void DeviceControler::send(QString message)
{
    _socket.write(message.toUtf8());        //UTF-8 formatında mesaj gonderir
}

void DeviceControler::socket_stateChanged(QAbstractSocket::SocketState state)
{   //Soket durumu degistiginde cagrılır.Eger socket baglantısı kesilmisse soketi kapatır ve 'statecChanged' sinyalini yayar.
    if(state == QAbstractSocket::UnconnectedState){
        _socket.close();
    }
    emit stateChanged(state);
}

void DeviceControler::socket_readyRead()
{//Soketten veri alındıgında cagrılır.Gelen tüm veriyi okur ve 'dataReady' sinyalini yayar.
    auto data = _socket.readAll();
    emit dataReady(data);
}
