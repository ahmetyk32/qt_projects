/********************************************************************************
** Form generated from reading UI file 'DeviceDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICEDIALOG_H
#define UI_DEVICEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DeviceDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *lstMessage;
    QVBoxLayout *verticalLayout;
    QPushButton *btnConnect;
    QLineEdit *lnMessage;
    QPushButton *btnSend;
    QLabel *label;
    QLabel *lblState;
    QLabel *label_3;
    QLabel *lblSpeed;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *DeviceDialog)
    {
        if (DeviceDialog->objectName().isEmpty())
            DeviceDialog->setObjectName(QString::fromUtf8("DeviceDialog"));
        DeviceDialog->resize(488, 409);
        horizontalLayout = new QHBoxLayout(DeviceDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lstMessage = new QListWidget(DeviceDialog);
        lstMessage->setObjectName(QString::fromUtf8("lstMessage"));

        horizontalLayout->addWidget(lstMessage);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnConnect = new QPushButton(DeviceDialog);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        verticalLayout->addWidget(btnConnect);

        lnMessage = new QLineEdit(DeviceDialog);
        lnMessage->setObjectName(QString::fromUtf8("lnMessage"));

        verticalLayout->addWidget(lnMessage);

        btnSend = new QPushButton(DeviceDialog);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));

        verticalLayout->addWidget(btnSend);

        label = new QLabel(DeviceDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lblState = new QLabel(DeviceDialog);
        lblState->setObjectName(QString::fromUtf8("lblState"));

        verticalLayout->addWidget(lblState);

        label_3 = new QLabel(DeviceDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        lblSpeed = new QLabel(DeviceDialog);
        lblSpeed->setObjectName(QString::fromUtf8("lblSpeed"));

        verticalLayout->addWidget(lblSpeed);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(DeviceDialog);

        QMetaObject::connectSlotsByName(DeviceDialog);
    } // setupUi

    void retranslateUi(QDialog *DeviceDialog)
    {
        DeviceDialog->setWindowTitle(QCoreApplication::translate("DeviceDialog", "Dialog", nullptr));
        btnConnect->setText(QCoreApplication::translate("DeviceDialog", "Connect", nullptr));
        btnSend->setText(QCoreApplication::translate("DeviceDialog", "Send", nullptr));
        label->setText(QCoreApplication::translate("DeviceDialog", "Device State", nullptr));
        lblState->setText(QCoreApplication::translate("DeviceDialog", "-------------", nullptr));
        label_3->setText(QCoreApplication::translate("DeviceDialog", "Device Speed", nullptr));
        lblSpeed->setText(QCoreApplication::translate("DeviceDialog", "-------------", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeviceDialog: public Ui_DeviceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICEDIALOG_H
