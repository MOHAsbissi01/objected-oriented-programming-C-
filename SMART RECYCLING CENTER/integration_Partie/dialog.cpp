#include "dialog.h"
#include "ui_dialog.h"

#include <QMessageBox>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pb_GestionFournisseur_clicked()
{
    MainWindow *w =new MainWindow ;
        w->show();
       this->hide();
}

void Dialog::on_pb_GestionMachine_clicked()
{

    IU*w =new IU;
        w->show();
       this->hide();
}
