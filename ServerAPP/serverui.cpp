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

    QByteArray buffer;
    QDataStream out(&buffer, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);

    QString greeting = QString("Hello! The time is %1")
        .arg(QTime::currentTime().toString());
    out << (quint16)0;
    out << greeting;
    out.device()->seek(0);
    out << (quint16)(buffer.size() - sizeof(quint16));


    qDebug() << "SendSize: " << buffer.size();
    connection->write(buffer);



    ConnectClient *client = new ConnectClient(connection);
    m_list.append(client);

    ui->listWidget->addItem(QString::number(++m_index));
    ui->stackedWidget->addWidget(client);

}


void ServerUI::on_listWidget_doubleClicked(const QModelIndex &index)
{
    ui->stackedWidget->setCurrentIndex(index.row());
}
