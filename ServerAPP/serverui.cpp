#include "serverui.h"
#include "ui_serverui.h"

#include <QDebug>
#include <QTcpSocket>
#include <QTime>
#include "connectclient.h"

ServerUI::ServerUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServerUI)
{
    ui->setupUi(this);
    m_index = 0;
    m_tcpServer = new QTcpServer(this);
    connect(m_tcpServer, SIGNAL(newConnection()),
            this, SLOT(slotNewConnection()));

    m_tcpServer->listen(QHostAddress::Any, 55555);
}

ServerUI::~ServerUI()
{
    delete ui;
}

void ServerUI::slotNewConnection()
{
    qDebug() << "ServerUI::slotNewConnection()";
    QTcpSocket *connection = m_tcpServer->nextPendingConnection();

    ConnectClient *client = new ConnectClient(connection);
    m_list.append(client);

    ui->listWidget->addItem(QString::number(++m_index));
    ui->stackedWidget->addWidget(client);

}


void ServerUI::on_listWidget_doubleClicked(const QModelIndex &index)
{
    ui->stackedWidget->setCurrentIndex(index.row());
}
