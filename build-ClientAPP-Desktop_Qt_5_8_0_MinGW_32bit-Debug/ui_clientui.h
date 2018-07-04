/********************************************************************************
** Form generated from reading UI file 'clientui.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTUI_H
#define UI_CLIENTUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientUI
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_recv;
    QTextBrowser *textBrowser_recv;
    QGroupBox *groupBox_send;
    QTextEdit *textEdit_send;
    QPushButton *pushButton_send;

    void setupUi(QWidget *ClientUI)
    {
        if (ClientUI->objectName().isEmpty())
            ClientUI->setObjectName(QStringLiteral("ClientUI"));
        ClientUI->resize(598, 453);
        gridLayout = new QGridLayout(ClientUI);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox_recv = new QGroupBox(ClientUI);
        groupBox_recv->setObjectName(QStringLiteral("groupBox_recv"));
        textBrowser_recv = new QTextBrowser(groupBox_recv);
        textBrowser_recv->setObjectName(QStringLiteral("textBrowser_recv"));
        textBrowser_recv->setGeometry(QRect(20, 20, 531, 171));

        gridLayout->addWidget(groupBox_recv, 0, 0, 1, 1);

        groupBox_send = new QGroupBox(ClientUI);
        groupBox_send->setObjectName(QStringLiteral("groupBox_send"));
        textEdit_send = new QTextEdit(groupBox_send);
        textEdit_send->setObjectName(QStringLiteral("textEdit_send"));
        textEdit_send->setGeometry(QRect(20, 30, 451, 161));
        pushButton_send = new QPushButton(groupBox_send);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));
        pushButton_send->setGeometry(QRect(490, 120, 75, 23));

        gridLayout->addWidget(groupBox_send, 1, 0, 1, 1);


        retranslateUi(ClientUI);

        QMetaObject::connectSlotsByName(ClientUI);
    } // setupUi

    void retranslateUi(QWidget *ClientUI)
    {
        ClientUI->setWindowTitle(QApplication::translate("ClientUI", "ClientUI", Q_NULLPTR));
        groupBox_recv->setTitle(QApplication::translate("ClientUI", "Recv:", Q_NULLPTR));
        groupBox_send->setTitle(QApplication::translate("ClientUI", "Send:", Q_NULLPTR));
        pushButton_send->setText(QApplication::translate("ClientUI", "Send", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClientUI: public Ui_ClientUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTUI_H
