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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnPortsInfo;
    QComboBox *cmbPort;
    QPushButton *btnOpenPort;
    QPushButton *btnSend;
    QLineEdit *lnMessage;
    QListWidget *lstMessages;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(656, 350);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 100, 235, 86));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnPortsInfo = new QPushButton(layoutWidget);
        btnPortsInfo->setObjectName(QString::fromUtf8("btnPortsInfo"));

        horizontalLayout->addWidget(btnPortsInfo);

        cmbPort = new QComboBox(layoutWidget);
        cmbPort->setObjectName(QString::fromUtf8("cmbPort"));

        horizontalLayout->addWidget(cmbPort);

        btnOpenPort = new QPushButton(layoutWidget);
        btnOpenPort->setObjectName(QString::fromUtf8("btnOpenPort"));

        horizontalLayout->addWidget(btnOpenPort);


        verticalLayout->addLayout(horizontalLayout);

        btnSend = new QPushButton(layoutWidget);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));

        verticalLayout->addWidget(btnSend);

        lnMessage = new QLineEdit(layoutWidget);
        lnMessage->setObjectName(QString::fromUtf8("lnMessage"));

        verticalLayout->addWidget(lnMessage);

        lstMessages = new QListWidget(centralwidget);
        lstMessages->setObjectName(QString::fromUtf8("lstMessages"));
        lstMessages->setGeometry(QRect(280, 40, 256, 192));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 656, 22));
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
