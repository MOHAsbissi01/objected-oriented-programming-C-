#ifndef  Dialog_H
#define  Dialog_H

#include <QDialog>

#include "hub.h"
#include "iu.h"
#include "fournisseur.h"

#include "mainwindow.h"




namespace Ui
{
class  Dialog;
}

class  Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit  Dialog(QWidget *parent = nullptr);

    ~ Dialog();
private slots:

    void on_pb_GestionFournisseur_clicked();

    void on_pb_GestionMachine_clicked();

private:
    Ui:: Dialog *ui;

};

#endif //  Dialog_H










