#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , _serialPort(nullptr)
{
    ui->setupUi(this);
    loadPort();
}

MainWindow::~MainWindow()
{
    delete ui;
    if(_serialPort != nullptr){
        _serialPort->close();
        delete _serialPort;
    }
}

void MainWindow::on_btnPortsInfo_clicked()
{


}

void MainWindow::loadPort()
{
    foreach(auto &port, QSerialPortInfo::availablePorts()){
        ui->cmbPort->addItem(port.portName());
    }
}


void MainWindow::on_btnOpenPort_clicked()
{

    _serialPort = new QSerialPort(this);
    _serialPort->setPortName(ui->cmbPort->currentText());
    _serialPort->setBaudRate(QSerialPort::Baud9600);
    _serialPort->setDataBits(QSerialPort::Data8);
    _serialPort->setParity(QSerialPort::NoParity);
    _serialPort->setStopBits(QSerialPort::OneStop);

    if(_serialPort->open(QIODevice::ReadWrite)){
        QMessageBox::information(this,"Result","Port opened succesfully...");
        connect(_serialPort,&QSerialPort::readyRead,this,&MainWindow::readData);
    }else{
        QMessageBox::critical(this,"Port Error","Unable to open speciifed port...");
    }
}


void MainWindow::on_btnSend_clicked()
{
    if(!_serialPort->isOpen()){
        QMessageBox::critical(this,"Port Error","Port is not opened...");
        return;
    }
    _serialPort->write(ui->lnMessage->text().toUtf8());
}

void MainWindow::readData()
{
    if(!_serialPort->isOpen()){
        QMessageBox::critical(this,"Port Error","Port is not opened...");
        return;
    }
    auto data = _serialPort->readAll();
    ui->lstMessages->addItem(QString(data));
}

