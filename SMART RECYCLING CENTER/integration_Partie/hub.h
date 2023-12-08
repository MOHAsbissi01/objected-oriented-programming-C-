// Dans hub.h
#ifndef HUB_H
#define HUB_H

#include <QDialog>
#include "machines.h"  // Inclusion du fichier machines.h
#include "notification.h"
#include "historique.h"
#include "connection.h"
namespace Ui {
class Hub;
}

class Hub : public QDialog
{
    Q_OBJECT

public:
    explicit Hub(QWidget *parent = nullptr);
    ~Hub();

private slots:
    void on_pb_notif_clicked();

private:
    Ui::Hub *ui;
    class MACHINES M;
    class MACHINES M1;
    notification notif;
    Historique historique;

};

#endif // HUB_H
