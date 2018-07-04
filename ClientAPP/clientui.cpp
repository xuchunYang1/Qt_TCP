#include "clientui.h"
#include "ui_clientui.h"

#include <QDebug>

ClientUI::ClientUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientUI)
{
    ui->setupUi(this);

    m_tcpBlockSize = 0;
    m_tcpSocket = new QTcpSocket(this);

    connect(m_tcpSocket, SIGNAL(readyRead()),
            this, SLOT(slotReadyRead()));

    m_tcpSocket->connectToHost("localhost", 55555);
}

ClientUI::~ClientUI()
{
    delete ui;
}

void ClientUI::slotReadyRead()
{
    qDebug() << "ClientUI::slotReadyRead()";

    QDataStream in(m_tcpSocket);
    in.setVersion(QDataStream::Qt_4_6);

    if(m_tcpBlockSize == 0)  //判断接收数据的完整性
    {
        if(m_tcpSocket->bytesAvailable()<sizeof(quint16))
            return;

        in >> m_tcpBlockSize;
    }

    if(m_tcpSocket->bytesAvailable() < m_tcpBlockSize)
        return;

    qDebug() << "=====================";
    QString greeting;

    in >> greeting;
    qDebug() << "{{{{ " << greeting;
//    doSomething(greeting);
    ui->textBrowser_recv->append(greeting);
    m_tcpBlockSize = 0;
}

void ClientUI::on_pushButton_send_clicked()
{
    QByteArray buffer;
    QDataStream out(&buffer, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);

//    QString greeting = QString("Hello! The time is %1")
//        .arg(QTime::currentTime().toString());
    out << (quint16)0;
    out << ui->textEdit_send->toPlainText();   //获取界面文本输入
    out.device()->seek(0);
    out << (quint16)(buffer.size() - sizeof(quint16));

    m_tcpSocket->write(buffer);
    qDebug() << buffer;
}
