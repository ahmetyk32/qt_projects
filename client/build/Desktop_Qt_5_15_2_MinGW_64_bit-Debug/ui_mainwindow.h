/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *InIPAddress;
    QSpinBox *spnPort;
    QPushButton *Button_Connect;
    QListWidget *lstConsole;
    QPushButton *pushButton;
    QGroupBox *Group_Send_Data;
    QLabel *label_3;
    QLineEdit *InMessage;
    QPushButton *Button_Send;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("#InIPAddress[state=\"0\"]{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
"#InIPAddress[state=\"1\"]{\n"
"	background-color: rgb(85, 255, 0);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 61, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 81, 16));
        InIPAddress = new QLineEdit(groupBox);
        InIPAddress->setObjectName(QString::fromUtf8("InIPAddress"));
        InIPAddress->setGeometry(QRect(150, 30, 121, 22));
        InIPAddress->setClearButtonEnabled(true);
        spnPort = new QSpinBox(groupBox);
        spnPort->setObjectName(QString::fromUtf8("spnPort"));
        spnPort->setGeometry(QRect(150, 70, 121, 22));
        spnPort->setMinimum(1024);
        spnPort->setMaximum(66535);
        Button_Connect = new QPushButton(groupBox);
        Button_Connect->setObjectName(QString::fromUtf8("Button_Connect"));
        Button_Connect->setGeometry(QRect(150, 110, 121, 24));
        Button_Connect->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        lstConsole = new QListWidget(groupBox);
        lstConsole->setObjectName(QString::fromUtf8("lstConsole"));
        lstConsole->setGeometry(QRect(370, 20, 256, 361));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 400, 261, 24));
        Group_Send_Data = new QGroupBox(groupBox);
        Group_Send_Data->setObjectName(QString::fromUtf8("Group_Send_Data"));
        Group_Send_Data->setEnabled(false);
        Group_Send_Data->setGeometry(QRect(0, 160, 301, 191));
        label_3 = new QLabel(Group_Send_Data);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 30, 61, 21));
        InMessage = new QLineEdit(Group_Send_Data);
        InMessage->setObjectName(QString::fromUtf8("InMessage"));
        InMessage->setGeometry(QRect(110, 30, 121, 22));
        InMessage->setClearButtonEnabled(true);
        Button_Send = new QPushButton(Group_Send_Data);
        Button_Send->setObjectName(QString::fromUtf8("Button_Send"));
        Button_Send->setGeometry(QRect(110, 100, 121, 24));
        Button_Send->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));

        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), lstConsole, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        MainWindow->setProperty("state", QVariant(QCoreApplication::translate("MainWindow", "1", nullptr)));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Connection Information", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "IP Address", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Port Number", nullptr));
        InIPAddress->setInputMask(QCoreApplication::translate("MainWindow", "000.000.000.000;_", nullptr));
        InIPAddress->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        InIPAddress->setProperty("state", QVariant(QString()));
        Button_Connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        Group_Send_Data->setTitle(QCoreApplication::translate("MainWindow", "Send Data", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Message", nullptr));
        InMessage->setInputMask(QString());
        InMessage->setText(QString());
        InMessage->setProperty("state", QVariant(QString()));
        Button_Send->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
