#include "mytcpserver.h"

MyTcpServer::MyTcpServer(int port, QObject *parent)     //Constructor.Port numarasını baslatır
    : QObject{parent}
{
    _server = new QTcpServer(this); //Yeni bir 'QTcpServer' nesnesi olusturur
    connect(_server, &QTcpServer::newConnection, this, &MyTcpServer::on_client_connecting); //'QTcpServer' nesnesinin 'newConnection' sinyalini, 'MyTcpServer' sınıfının 'on_client_connecting' slotuna baglar
    _isStarted = _server->listen(QHostAddress::Any,port);   //Sunucuyu belirtilen portta dinlemeye baslar
    if(! _isStarted){       //Sunucunun baslatılıp baslatılmadıgını konsola yazdırır
        qDebug() << "Server could not start";

    }else{
        qDebug() << "Server started";
    }
}

void MyTcpServer::on_client_connecting()
{
    qDebug() << "Client connected to server";
    auto socket = _server->nextPendingConnection();     //Yeni baglanan istemciyi temsil eden 'QTcpSocket' nesnesini alır
    connect(socket,&QTcpSocket::readyRead,this,&MyTcpServer::clientDataReady);  //İstemciden veri geldiginde 'clientDataReady' slotunu cagırır
    connect(socket,&QTcpSocket::disconnected,this,&MyTcpServer::clientDisconnected);    //İstemci baglantısı kesildiginde 'clientDisconnected' slotunu cagırır
    _socketsList.append(socket);        //Yeni baglanan istemciyi baglı istemciler listesine ekler
    socket->write("Welcome to this Server");    //İstemciye hos geldiniz mesajı gönderir
    emit newClientConnected();  //Yeni bir istemci baglandıgını sinyal olarak yayımlar

}

void MyTcpServer::clientDisconnected()
{//İstemci baglantısı kesildiginde sinyal olarak yayımlar
    emit clientDisconnect();
}

void MyTcpServer::clientDataReady()
{
    auto socket = qobject_cast < QTcpSocket*> (sender());   //Veriyi gonderen istemci socket'ini alır
    auto data = socket->readAll();  //İstemciden gelen tüm veriyi okur
    emit dataRecieved(QString(data));   //İstemciden alınan veriyi sinyal olarak yayımlar
}

bool MyTcpServer::isStarted() const
{//Sunucunun baslatılıp baslatılmadıgını dondurur
    return _isStarted;
}

void MyTcpServer::sendToAll(QString message)
{//Tum baglı istemcilere belirtilen mesajı gonderir (UTF-8 formatında)
    foreach (auto socket, _socketsList) {
        socket->write(message.toUtf8());
    }
}
