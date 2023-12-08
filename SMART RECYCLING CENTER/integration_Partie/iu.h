#ifndef IU_H
#define IU_H
#include "machines.h"
#include "historique.h"
#include "arduino.h"
#include "notification.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QDialog>
#include <iostream>
#include "connection.h"

namespace Ui {
class IU;
}

class IU : public QDialog
{
    Q_OBJECT

public:
    explicit IU(QWidget *parent = nullptr);
    ~IU();

private slots:
    void on_pb_ajouter_2_clicked();
    void on_pb_supprimer_2_clicked();
    void on_pb_modifier_clicked();
    void on_pb_tri_asc_clicked();
    void on_pb_tri_desc_clicked();
    void on_pb_tri_nom_clicked();
    void on_pb_tri_type_clicked();
    void on_chercher_numero_clicked();
    void on_chercher_nom_clicked();
    void on_chercher_type_clicked();
    void on_pb_PDF_clicked();
    void on_pb_stat_clicked();
    void on_pb_stat_2_clicked();
    void on_pb_stat_3_clicked();
    void on_qrcodegen_clicked();
    QString getMachineInfoFromDatabase(int id);
    void generateMachineQRCode(int id);
    void redirectMachineQRCode(int id);
    void on_qrcode_clicked();
    void on_redirect_clicked();

    void on_pb_menu_clicked();

private:
    Ui::IU *ui;
    class MACHINES M;
    class MACHINES M1;
    QVector<double> qv_x,qv_y;
    Historique historique;
    notification notif;
    QString getMachineInfo();

    QByteArray buffer;
    QSqlDatabase db;

};

#endif // IU_H
