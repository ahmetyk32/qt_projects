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
#include <QtWidgets/QFormLayout>
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QListWidget *lstConsole;
    QLabel *label;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLineEdit *lnMsg;
    QPushButton *BtnSendToAll;
    QLabel *Connection_Status;
    QSpinBox *Spn_Server_Port;
    QPushButton *Button_Start_Server;
    QPushButton *Btn_Clear;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(681, 483);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        lstConsole = new QListWidget(groupBox_2);
        lstConsole->setObjectName(QString::fromUtf8("lstConsole"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, lstConsole);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        lnMsg = new QLineEdit(groupBox_3);
        lnMsg->setObjectName(QString::fromUtf8("lnMsg"));

        verticalLayout_4->addWidget(lnMsg);

        BtnSendToAll = new QPushButton(groupBox_3);
        BtnSendToAll->setObjectName(QString::fromUtf8("BtnSendToAll"));

        verticalLayout_4->addWidget(BtnSendToAll);


        formLayout_2->setWidget(5, QFormLayout::LabelRole, groupBox_3);

        Connection_Status = new QLabel(groupBox_2);
        Connection_Status->setObjectName(QString::fromUtf8("Connection_Status"));
        Connection_Status->setEnabled(false);
        Connection_Status->setMinimumSize(QSize(25, 25));
        Connection_Status->setMaximumSize(QSize(25, 25));
        Connection_Status->setStyleSheet(QString::fromUtf8("#ConnectionStatus [state=\"0\"]{\n"
"background-color: rgb(255, 0, 0);\n"
"}\n"
"#ConnectionStatus [state=\"1\"]{\n"
"background-color: rgb(85, 255, 0);\n"
"}"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, Connection_Status);

        Spn_Server_Port = new QSpinBox(groupBox_2);
        Spn_Server_Port->setObjectName(QString::fromUtf8("Spn_Server_Port"));
        Spn_Server_Port->setMinimum(1024);
        Spn_Server_Port->setMaximum(65535);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, Spn_Server_Port);

        Button_Start_Server = new QPushButton(groupBox_2);
        Button_Start_Server->setObjectName(QString::fromUtf8("Button_Start_Server"));
        Button_Start_Server->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, Button_Start_Server);

        Btn_Clear = new QPushButton(groupBox_2);
        Btn_Clear->setObjectName(QString::fromUtf8("Btn_Clear"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, Btn_Clear);


        formLayout->setWidget(0, QFormLayout::LabelRole, groupBox_2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 681, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(Btn_Clear, SIGNAL(clicked()), lstConsole, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "WARNINGGG", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Server Information", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Message Information", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Message", nullptr));
        BtnSendToAll->setText(QCoreApplication::translate("MainWindow", "Send to All", nullptr));
        Connection_Status->setText(QString());
        Connection_Status->setProperty("state", QVariant(QCoreApplication::translate("MainWindow", "0", nullptr)));
        Button_Start_Server->setText(QCoreApplication::translate("MainWindow", "Start Server", nullptr));
        Btn_Clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
