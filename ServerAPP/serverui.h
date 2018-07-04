#ifndef SERVERUI_H
#define SERVERUI_H

#include <QWidget>
#include <QTcpServer>

#include "connectclient.h"


namespace Ui {
class ServerUI;
}

class ServerUI : public QWidget
{
    Q_OBJECT

public slots:
    void slotNewConnection();

public:
    explicit ServerUI(QWidget *parent = 0);
    ~ServerUI();

private slots:
    void on_listWidget_doubleClicked(const QModelIndex &index);

private:
    Ui::ServerUI *ui;
    QTcpServer *m_tcpServer;
    ConnectClientList m_list;
    quint16 m_index;
};

#endif // SERVERUI_H
