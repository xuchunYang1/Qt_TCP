/********************************************************************************
** Form generated from reading UI file 'serverui.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERUI_H
#define UI_SERVERUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerUI
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *ServerUI)
    {
        if (ServerUI->objectName().isEmpty())
            ServerUI->setObjectName(QStringLiteral("ServerUI"));
        ServerUI->resize(619, 432);
        gridLayout = new QGridLayout(ServerUI);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listWidget = new QListWidget(ServerUI);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(ServerUI);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));

        gridLayout->addWidget(stackedWidget, 0, 1, 1, 1);


        retranslateUi(ServerUI);

        QMetaObject::connectSlotsByName(ServerUI);
    } // setupUi

    void retranslateUi(QWidget *ServerUI)
    {
        ServerUI->setWindowTitle(QApplication::translate("ServerUI", "ServerUI", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ServerUI: public Ui_ServerUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERUI_H
