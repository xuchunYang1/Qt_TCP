/********************************************************************************
** Form generated from reading UI file 'connectclient.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTCLIENT_H
#define UI_CONNECTCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectClient
{
public:
    QGroupBox *groupBox_recv;
    QTextBrowser *textBrowser_recv;
    QGroupBox *groupBox_send;
    QTextEdit *textEdit_send;
    QPushButton *pushButton_send;

    void setupUi(QWidget *ConnectClient)
    {
        if (ConnectClient->objectName().isEmpty())
            ConnectClient->setObjectName(QStringLiteral("ConnectClient"));
        ConnectClient->resize(638, 452);
        groupBox_recv = new QGroupBox(ConnectClient);
        groupBox_recv->setObjectName(QStringLiteral("groupBox_recv"));
        groupBox_recv->setGeometry(QRect(30, 10, 582, 214));
        textBrowser_recv = new QTextBrowser(groupBox_recv);
        textBrowser_recv->setObjectName(QStringLiteral("textBrowser_recv"));
        textBrowser_recv->setGeometry(QRect(20, 20, 531, 171));
        groupBox_send = new QGroupBox(ConnectClient);
        groupBox_send->setObjectName(QStringLiteral("groupBox_send"));
        groupBox_send->setGeometry(QRect(30, 230, 582, 214));
        textEdit_send = new QTextEdit(groupBox_send);
        textEdit_send->setObjectName(QStringLiteral("textEdit_send"));
        textEdit_send->setGeometry(QRect(30, 30, 421, 151));
        pushButton_send = new QPushButton(groupBox_send);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));
        pushButton_send->setGeometry(QRect(490, 120, 75, 23));

        retranslateUi(ConnectClient);

        QMetaObject::connectSlotsByName(ConnectClient);
    } // setupUi

    void retranslateUi(QWidget *ConnectClient)
    {
        ConnectClient->setWindowTitle(QApplication::translate("ConnectClient", "Form", Q_NULLPTR));
        groupBox_recv->setTitle(QApplication::translate("ConnectClient", "Recv:", Q_NULLPTR));
        groupBox_send->setTitle(QApplication::translate("ConnectClient", "Send:", Q_NULLPTR));
        pushButton_send->setText(QApplication::translate("ConnectClient", "Send", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConnectClient: public Ui_ConnectClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTCLIENT_H
