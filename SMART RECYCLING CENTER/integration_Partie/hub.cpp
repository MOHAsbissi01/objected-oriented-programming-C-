#include "hub.h"
#include "ui_hub.h"
#include "ui_iu.h"
#include "iu.h"
#include "machines.h"
#include "notification.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QPieSlice>
#include <QPieSeries>
#include <QtCharts/QChartView>
#include <QApplication>
#include <QPdfWriter>
#include <QPrinter>
#include <QPrintDialog>
#include <QImage>
#include <QLabel>


Hub::Hub(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Hub)
{
    ui->setupUi(this);
    QIntValidator validator(1, 9999, this);
    Historique h;
    ui->tab_histp->setText(h.load2());
}

Hub::~Hub()
{
    delete ui;
}

void Hub::on_pb_notif_clicked()
{
        MACHINES M;
            M.setid(ui->le_idp->text().toInt());
            QString ancienType = M.gettype();

            M.setstatus(ui->le_statusp->text());

        bool test = M.modifier();

        QMessageBox msgBox;

        if (test)
        {
            msgBox.setText("Modification effectuée");
            ui->tab_panne->setModel(M.afficher());
            ui->le_idp->clear();
            ui->le_statusp->clear();
            historique.save2(M.getid(), "", "", QDateTime::currentDateTime().toString(), 0, M.getstatus(),M.getdurabilite(), "Modification de status");
            notification notif;
            notif.notification_ajout("Modification de status");
        }
        else
        {
            QMessageBox::critical(this, "Erreur", "ID non trouvé. Impossible de modifier le status.");
        }
}
