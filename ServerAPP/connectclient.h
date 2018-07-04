#ifndef CONNECTCLIENT_H
#define CONNECTCLIENT_H

#include <QWidget>
#include <QTcpSocket>
#include <QList>

namespace Ui {
class ConnectClient;
}

class ConnectClient : public QWidget
{
    Q_OBJECT

public slots:
        void slotReadyRead();

public:
    explicit ConnectClient(QTcpSocket *tcpSocket,
                           QWidget *parent = 0);
    ~ConnectClient();

private slots:
    void on_pushButton_send_clicked();

private:
    Ui::ConnectClient *ui;

    QTcpSocket *m_connection;
    qint16 m_tcpBlockSize;
};

typedef QList<ConnectClient*> ConnectClientList;
#endif // CONNECTCLIENT_H
