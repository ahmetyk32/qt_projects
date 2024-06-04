#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QObject>      //QT'nin temel nesne sınıfıdır.Sinyal-slot mekanizmasını saglar
#include <QTcpServer>   //TCP sunucusunu temsil eden sınıf
#include <QTcpSocket>   //TCO baglantısını temsil eden sınıf

class MyTcpServer : public QObject  //QObject tarafından uretilmis bir sınıftır.Bu olay,QT'nin özelleiklerini ve sinyal-slot mekanizmasını kullanabilmesini saglar
{
    Q_OBJECT    //QT'nin meta nesne sistemi icin gereklidir.Sinyal-slot mekanizmasının calısması icin derleyiciye ozel kodlar ekler
public:
    explicit MyTcpServer(int port, QObject *parent = nullptr);  //Constructor.'port' parametresi,dinleyecegi port numarasını belirtir.

    bool isStarted() const; //Sunucunun baslatılıp baslatılmadıgını döndurur
    void setIsStarted(bool newIsStarted);   //Sunucunun baslatılma durumunu ayarlar
    void sendToAll(QString message);        //Tum baglı istemcilere bir mesaj gonderir

signals:
    void newClientConnected();  //Yeni bir istemci baglandıgında yayilan sinyal
    void clientDisconnect();    //Bir istemci baglantısı kesildiginde yayılan sinyal
    void dataRecieved(QString message); //İstemciden veri alındıgında yayılan sinyal

private slots:
    void on_client_connecting();    //Yeni bir istemci baglandıgında cagrılan slot

    void clientDisconnected();      //Bir istemci baglantısı kesildiginde cagrılan slot
    void clientDataReady();         //İstemciden veri alındıgında cagrılan slot

private:
    QTcpServer *_server;            //TCP sunucusunu temsil eden işaretci
    QList<QTcpSocket *> _socketsList;//Baglı olan tum istemcileri iceren liste
    bool _isStarted;        //Sunucunun baslatılıp baslatılmadıgını belirten bayrak

};

#endif // MYTCPSERVER_H
