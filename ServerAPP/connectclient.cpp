#include "connectclient.h"
#include "ui_connectclient.h"

ConnectClient::ConnectClient(QTcpSocket *tcpSocket,
                             QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConnectClient)
{
    ui->setupUi(this);

    m_tcpBlockSize = 0;
    m_connection = tcpSocket;
    connect(m_connection, SIGNAL(readyRead()),
            this, SLOT(slotReadyRead()));
}

ConnectClient::~ConnectClient()
{
    delete ui;
}

void ConnectClient::slotReadyRead()
{
    qDebug() << "ServerUI::slotReadyRead()";

    QDataStream in(m_connection);
    in.setVersion(QDataStream::Qt_4_6);

    if(m_tcpBlockSize == 0)  //判断接收数据的完整性
    {
        if(m_connection->bytesAvailable()<sizeof(quint16))
            return;

        in >> m_tcpBlockSize;
    }

    if(m_connection->bytesAvailable() < m_tcpBlockSize)
        return;

    qDebug() << "=====================";
    QString greeting;
    in >> greeting;
//    doSomething(greeting);
    ui->textBrowser_recv->append(greeting);
    m_tcpBlockSize = 0;
}

void ConnectClient::on_pushButton_send_clicked()
{
    QByteArray buffer;
    QDataStream out(&buffer, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);

    QString greeting = QString("Hello! The time is %1")
                    .arg(QTime::currentTime().toString());
    out << (quint16)0;
    out << greeting;
    out << ui->textEdit_send->toPlainText();   //获取界面文本输入
    out.device()->seek(0);
    out << (quint16)(buffer.size() - sizeof(quint16));

    m_connection->write(buffer);
}
