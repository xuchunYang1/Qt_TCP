#ifndef CLIENTUI_H
#define CLIENTUI_H

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class ClientUI;
}

class ClientUI : public QWidget
{
    Q_OBJECT

public slots:
    void slotReadyRead();

public:
    explicit ClientUI(QWidget *parent = 0);
    ~ClientUI();

private slots:
    void on_pushButton_send_clicked();

private:
    Ui::ClientUI *ui;

    quint16 m_tcpBlockSize;
    QTcpSocket *m_tcpSocket;
};

#endif // CLIENTUI_H
