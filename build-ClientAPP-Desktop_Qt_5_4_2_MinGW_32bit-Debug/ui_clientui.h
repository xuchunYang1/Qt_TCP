/********************************************************************************
** Form generated from reading UI file 'clientui.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTUI_H
#define UI_CLIENTUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientUI
{
public:
    QLabel *label;

    void setupUi(QWidget *ClientUI)
    {
        if (ClientUI->objectName().isEmpty())
            ClientUI->setObjectName(QStringLiteral("ClientUI"));
        ClientUI->resize(400, 300);
        label = new QLabel(ClientUI);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 160, 281, 51));

        retranslateUi(ClientUI);

        QMetaObject::connectSlotsByName(ClientUI);
    } // setupUi

    void retranslateUi(QWidget *ClientUI)
    {
        ClientUI->setWindowTitle(QApplication::translate("ClientUI", "ClientUI", 0));
        label->setText(QApplication::translate("ClientUI", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class ClientUI: public Ui_ClientUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTUI_H
