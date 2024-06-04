#ifndef DEVICECONTROLER_H
#define DEVICECONTROLER_H

#include <QObject>
#include <QTcpSocket>       //TCP socket kutuphanesi implemente edildi.

class DeviceControler : public QObject      //QObject sınıfından uretilmis bir class,sinyal-slot mekanizmasını kullanabilinmesini saglar
{
    Q_OBJECT        //sinyal- slot icin derleyiciye ozel kodlar ekler
public:
    explicit DeviceControler(QObject *parent = nullptr);    //constructor--> bu sınıfın yapıcı fonksiyonudur

    void connetToDevice(QString ip, int port);      //ipV_ ve port icin fonksiyon acildi
    void disconnect();      //mecvut baglantıyı kesmek icin kullanilir
    QAbstractSocket::SocketState state();   //mevcut durumu döndürür
    bool isConnected();         //soketin baglantısını kontrol eder
    void send(QString message); //mesajı soketten gönderen fonksiyon

signals:
    void connected();       //baglanti basarili oldugunda tetiklenen sinyal
    void disconnected();       //beglanti kesildiginde tetiklenen sinyal
    void stateChanged(QAbstractSocket::SocketState);    //soketin durumu degistiginde tetiklenen sinyal
    void errorOccurred(QAbstractSocket::SocketError);   //hata olustugunda tetiklenen sinyal
    void dataReady(QByteArray);     //soketten veri okundugunda tetiklenen sinyal


private slots:
    void socket_stateChanged(QAbstractSocket::SocketState state);   //soketin durumu degistiginde cagrılan ozel slot
    void socket_readyRead();    //soketten veri okumaya hazır oldugunda cagrılan ozel slot

private:        //tanimlamalar
    QTcpSocket _socket;     //tcp baglantısı icin kullanılan soket nesnesi
    QString _ip;        //baglanılacak ip adresi
    int _port;          //baglanılacak port numarası

};

#endif // DEVICECONTROLER_H
