/********************************************************************************
** Form generated from reading UI file 'serverui.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERUI_H
#define UI_SERVERUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerUI
{
public:

    void setupUi(QWidget *ServerUI)
    {
        if (ServerUI->objectName().isEmpty())
            ServerUI->setObjectName(QStringLiteral("ServerUI"));
        ServerUI->resize(400, 300);

        retranslateUi(ServerUI);

        QMetaObject::connectSlotsByName(ServerUI);
    } // setupUi

    void retranslateUi(QWidget *ServerUI)
    {
        ServerUI->setWindowTitle(QApplication::translate("ServerUI", "ServerUI", 0));
    } // retranslateUi

};

namespace Ui {
    class ServerUI: public Ui_ServerUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERUI_H
