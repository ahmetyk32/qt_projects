#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>       //pencere kutuphanesi
#include <QHostAddress>      //IP adres kutuphanesi
#include <QStyle>            //gorunum ve yazi kutuphanesi
#include "Devicecontroler.h"
#include <QMetaEnum>         //Meta nesne sisteminde enum'larla calismak icin eklenen kutuphane

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;       //QT designer tarafından olusuturlan kodları icerir.Kullanıcı arayüzü nesnelerini iceren sınıftır.
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT        //QT meta nesne sistemi ve sinyal-slot mekanizması icin eklenen kutuphane

public:
    MainWindow(QWidget *parent = nullptr);      //constructor(yapıcı fonksiyon)
    ~MainWindow();                              //destrcutor(yıkıcı fonksiyon)

private slots:
    void on_InIPAddress_textChanged(const QString &arg1);   //IP adresindeki metin degistiginde cagrılır
    void on_Button_Connect_clicked();       //baglan dugmesine tiklandıgında cagrilir

    void device_connected();        //cihaz baglandıgında cagrılan slot
    void device_disconnected();     //cihaz baglantısı kesildiginde cagrılan slot
    void device_stateChanged(QAbstractSocket::SocketState); //cihazın soket durumu degistiginde cagrılan slot
    void device_errorOccurred(QAbstractSocket::SocketError);    //cihazda bir hata oldugunda cagrılan slot
    void device_dataReady(QByteArray data); //cihazdan veri alındıgında cagrılan slot

    void on_Button_Send_clicked();  //gonder dugmesi tıklandıgında cagrılan slot

private:
    Ui::MainWindow *ui;

    DeviceControler _controller;    //cihaz kontrolcusu nesnesi

    //method

    void setDeviceController();

};
#endif // MAINWINDOW_H
