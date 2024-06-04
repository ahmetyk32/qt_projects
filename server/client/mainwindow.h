#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>      //Pencere kutuphanesi
#include <QStyle>              //Yazı ve gorsellik kutuphanesi
#include "mytcpserver.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;       //QT designer tarafından olusuturlan kodları icerir.Kullanıcı arayüzü nesnelerini iceren sınıftır.
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow   //QMainWindow sınıfından uretilmistir.Sinyal-slot mekanizmasının kullanılabilmesini saglar
{
    Q_OBJECT        //QT'nin meta nesne sistemi icin gereklidir ve sinyal-slot mekanizmasının calısmasi icin derleyiciye ozel kodlar ekler

public:
    MainWindow(QWidget *parent = nullptr);  //constructor
    ~MainWindow();                          //destructor

private slots:
    void on_Button_Start_Server_clicked();  //Sunucuyu baslatma dugmesine tıklandıgında cagrılan slot
    void New_Client_Connected();            //Yeni bir istemci baglandıgında cagrılan slot

    void on_BtnSendToAll_clicked();         //Tum istemcilere mesaj gonderme dugmesine tıklandıgında cagrılan slot

    void clientDisconnected();              //Bir istemci baglantısı kesildiginde cagrılan slot
    void clientDataReceived(QString message);//İstemciden veri alındıgında cagrılan slot
private:
    Ui::MainWindow *ui;     //Kullanıcı arayuzu nesnelerini iceren isaretci
    MyTcpServer *_server;   //TCP sunucu nesnesi

};
#endif // MAINWINDOW_H
