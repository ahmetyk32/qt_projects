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
#include <QtWidgets/QComboBox>
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
    QPushButton *btnPortsInfo;
    QComboBox *cmbPorts;
    QPushButton *btnOpenPort;
    QLineEdit *lnMessage;
    QPushButton *btnSend;
    QListWidget *lstMessages;
    QPushButton *btnStart;
    QPushButton *btnStop;
    QPushButton *btnChangeSpeed;
    QSpinBox *spnSpeed;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 320);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnPortsInfo = new QPushButton(centralwidget);
        btnPortsInfo->setObjectName(QString::fromUtf8("btnPortsInfo"));
        btnPortsInfo->setGeometry(QRect(50, 90, 90, 24));
        cmbPorts = new QComboBox(centralwidget);
        cmbPorts->setObjectName(QString::fromUtf8("cmbPorts"));
        cmbPorts->setGeometry(QRect(150, 90, 101, 24));
        btnOpenPort = new QPushButton(centralwidget);
        btnOpenPort->setObjectName(QString::fromUtf8("btnOpenPort"));
        btnOpenPort->setGeometry(QRect(270, 90, 90, 24));
        lnMessage = new QLineEdit(centralwidget);
        lnMessage->setObjectName(QString::fromUtf8("lnMessage"));
        lnMessage->setGeometry(QRect(50, 140, 201, 24));
        btnSend = new QPushButton(centralwidget);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        btnSend->setGeometry(QRect(270, 140, 90, 24));
        lstMessages = new QListWidget(centralwidget);
        lstMessages->setObjectName(QString::fromUtf8("lstMessages"));
        lstMessages->setGeometry(QRect(450, 20, 256, 211));
        btnStart = new QPushButton(centralwidget);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));
        btnStart->setGeometry(QRect(220, 190, 90, 24));
        btnStop = new QPushButton(centralwidget);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        btnStop->setGeometry(QRect(220, 220, 90, 24));
        btnChangeSpeed = new QPushButton(centralwidget);
        btnChangeSpeed->setObjectName(QString::fromUtf8("btnChangeSpeed"));
        btnChangeSpeed->setGeometry(QRect(220, 250, 90, 24));
        spnSpeed = new QSpinBox(centralwidget);
        spnSpeed->setObjectName(QString::fromUtf8("spnSpeed"));
        spnSpeed->setGeometry(QRect(130, 250, 81, 22));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnPortsInfo->setText(QCoreApplication::translate("MainWindow", "Ports", nullptr));
        btnOpenPort->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        btnSend->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        btnStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        btnStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        btnChangeSpeed->setText(QCoreApplication::translate("MainWindow", "Change Speed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
