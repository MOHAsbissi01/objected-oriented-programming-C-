#include "iu.h"
#include "ui_iu.h"
#include "hub.h"
#include "machines.h"
#include "connection.h"
#include "QrCode.h"
#include "historique.h"
#include "notification.h"
#include "arduino.h"
#include <QUrl>
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
#include <QTemporaryFile>
#include <QMessageBox>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QStatusBar>

#include "dialog.h"
using namespace qrcodegen;


IU::IU(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IU)
{
    ui->setupUi(this);
    ui->le_id->setValidator(new QIntValidator(0, 9999999, this));
    ui->tab_mac->setModel(M.afficher());
    Historique h;
    ui->tableView_historique_f_2->setText(h.load());
    Connection c;
    Arduino arduino;
    QList<QSerialPortInfo> portList = QSerialPortInfo::availablePorts();
       qDebug() << "Available Serial Ports:";
       foreach(const QSerialPortInfo &port, portList)
       {
           qDebug() << "Port: " << port.portName() << "Description: " << port.description();
       }



   }

IU::~IU()
{
    delete ui;
}

void IU::on_pb_ajouter_2_clicked()
{
    QString a = "Ajout";
    QString nom = ui->le_nom->text();
    int id = ui->le_id->text().toInt();
    QString type = ui->le_type->text();
    QString date = ui->le_date->text();
    int cout = ui->le_cout->text().toInt();
    QString status = ui->le_status->text();
    QString durabilite = ui->le_durab->text();


    MACHINES M(nom, id, type, date, cout, status, durabilite);
    bool test = M.ajouter();

    if (test)
    {
        ui->tab_mac->setModel(M.afficher());
        ui->tab_mac->setModel(M.afficher());
        QMessageBox::information(nullptr, QObject::tr("ajout"),
                                 QObject::tr("ajout successful.\n"
                                             "click Cancel to exit."), QMessageBox::Cancel);

        ui->le_nom->clear();
        ui->le_type->clear();
        ui->le_id->clear();
        ui->le_date->clear();
        ui->le_cout->clear();
        ui->le_status->clear();
        ui->le_durab->clear();
        Historique h;
        h.save(id, nom, type, date, cout, status, durabilite, "Ajout");
        ui->tableView_historique_f_2->setText(h.load());
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                              QObject::tr("ajout failed.\n"
                                          "click Cancel to exit."), QMessageBox::Cancel);
    }
}

void IU::on_pb_supprimer_2_clicked()
{
    QString a = "Suppression";
    MACHINES M1;
    M1.setid(ui->le_numero_supp_2->text().toInt());
    bool test = M1.supprimer(M1.getid());
    QMessageBox msgBox;

    if (test)
    {
        msgBox.setText("Suppression effectuée");
        ui->tab_mac->setModel(M1.afficher());
        ui->le_numero_supp_2->clear();
        QSqlQuery query;
        QStringList wordlist;
        query.prepare("SELECT id FROM MACHINES ORDER BY id ASC");
        int i = 0;
        if (query.exec())
        {
            while (query.next())
            {
                wordlist.insert(i, query.value(0).toString());
            }
            QCompleter *completer = new QCompleter(wordlist, this);
            completer->setCaseSensitivity(Qt::CaseInsensitive);
            ui->le_numero_supp_2->setCompleter(completer);
            Historique h;
            h.save(M1.getid(), M1.getnom(), M1.gettype(), QDateTime::currentDateTime().toString(), M1.getcout(), M1.getstatus(),M1.getdurabilite(), "Suppression");
            ui->tableView_historique_f_2->setText(h.load());
        }
    }
    else
    {
        msgBox.setText("Machine n'existe pas");
        msgBox.exec();
    }
}


void IU::on_pb_modifier_clicked()
{
    MACHINES M;
    M.setid(ui->le_id->text().toInt());
    QString ancienType = M.gettype();
    QString ancienneDateAj = M.getdate_aj();
    M.setnom(ui->le_nom->text());
    M.settype(ui->le_type->text().isEmpty() ? ancienType : ui->le_type->text());
    M.setdate_aj(ui->le_date->text().isEmpty() ? ancienneDateAj : ui->le_date->text());
    M.setcout(ui->le_cout->text().toUInt());
    M.setstatus(ui->le_status->text());
    M.setdurabilite(ui->le_durab->text());

    bool test = M.modifier();

    QMessageBox msgBox;

    if (test)
    {
        msgBox.setText("Modification effectuée");
        ui->tab_mac->setModel(M.afficher());
        ui->le_id->clear();
        ui->le_nom->clear();
        ui->le_type->clear();
        ui->le_date->clear();
        ui->le_cout->clear();
        ui->le_status->clear();
        ui->le_durab->clear();
        Historique h;
        h.save(M.getid(), M.getnom(), M.gettype(), QDateTime::currentDateTime().toString(), M.getcout(), M.getstatus(),M.getdurabilite(), "Modification");
        ui->tableView_historique_f_2->setText(h.load());

    }
    else
    {
        msgBox.setText("Machine n'existe pas");
        msgBox.exec();
    }
}

void IU::on_pb_tri_asc_clicked()
{   MACHINES M;
    ui->tab_mac->setModel(M.triasc());
}

void IU::on_pb_tri_desc_clicked()
{
    MACHINES M;
     ui->tab_mac->setModel(M.tridesc());
}

void IU::on_pb_tri_nom_clicked()
{
    MACHINES M;
     ui->tab_mac->setModel(M.tri_nom());
}

void IU::on_pb_tri_type_clicked()
{
    MACHINES M;
     ui->tab_mac->setModel(M.tri_type());
}

void IU::on_chercher_numero_clicked()
{

        M1.setid(ui->pbrecherche->text().toInt());
        bool test=M1.rechercher(M1.getid());
        ui->tab_mac->setModel(M1.afficher2());
        if(test)
            QMessageBox::information(nullptr,QObject::tr("recherche"),
                                    QObject::tr("recherche successful.\n"
                                                "click Cancel to exit."),QMessageBox::Cancel );
        else
            QMessageBox::critical(nullptr,QObject::tr("database is not open"),
                                    QObject::tr("recherche failed.\n"
                                                "click Cancel to exit."),QMessageBox::Cancel );

    }
void IU::on_chercher_nom_clicked()
{

        M1.setnom(ui->pbrecherche->text());
        bool test=M1.rechercher2(M1.getnom());
        ui->tab_mac->setModel(M1.afficher3());
        if(test)
            QMessageBox::information(nullptr,QObject::tr("recherche"),
                                    QObject::tr("recherche successful.\n"
                                                "click Cancel to exit."),QMessageBox::Cancel );
        else
            QMessageBox::critical(nullptr,QObject::tr("database is not open"),
                                    QObject::tr("recherche failed.\n"
                                                "click Cancel to exit."),QMessageBox::Cancel );

    }

void IU::on_chercher_type_clicked()
{

        M1.settype(ui->pbrecherche->text());
        bool test=M1.rechercher3(M1.gettype());
        ui->tab_mac->setModel(M1.afficher4());
        if(test)
            QMessageBox::information(nullptr,QObject::tr("recherche"),
                                    QObject::tr("recherche successful.\n"
                                                "click Cancel to exit."),QMessageBox::Cancel );
        else
            QMessageBox::critical(nullptr,QObject::tr("database is not open"),
                                    QObject::tr("recherche failed.\n"
                                                "click Cancel to exit."),QMessageBox::Cancel );

    }

void IU::on_pb_PDF_clicked()
{
    QFile file("mypdf.pdf");
    if (!file.open(QIODevice::WriteOnly))
    {
        QMessageBox::warning(this, "Error", "Could not create file!");
        return;
    }

    QPdfWriter pdfWriter(&file);
    pdfWriter.setPageSize(QPagedPaintDevice::A3);
    pdfWriter.setPageMargins(QMarginsF(50, 50, 50, 50));

    QPainter painter(&pdfWriter);
    int i = 200;
    int lineHeight = 300;
    int tableHeight = 15000;
    int columnWidth = 1700;

    painter.setPen(Qt::red);
    painter.setFont(QFont("Arial", 25));
    painter.drawText(1500, i, "Liste Des Machines Disponibles");

    i += 3 * lineHeight;

    painter.setPen(Qt::black);
    painter.setFont(QFont("Arial", 10));

    QRect tableRect(100, i, 7 * columnWidth, tableHeight);
    painter.drawRect(tableRect);

    for (int j = 1; j <= 6; ++j) {
        painter.drawLine(100 + j * columnWidth, i, 100 + j * columnWidth, i + tableHeight);
    }

    painter.drawLine(100, i + lineHeight, 100 + 7 * columnWidth, i + lineHeight);

    painter.drawText(100 + 0 * columnWidth, i + lineHeight, "ID");
    painter.drawText(100 + 1 * columnWidth, i + lineHeight, "NOM");
    painter.drawText(100 + 2 * columnWidth, i + lineHeight, "DATE");
    painter.drawText(100 + 3 * columnWidth, i + lineHeight, "STATUS");
    painter.drawText(100 + 4 * columnWidth, i + lineHeight, "TYPE");
    painter.drawText(100 + 5 * columnWidth, i + lineHeight, "COUT");
    painter.drawText(100 + 6 * columnWidth, i + lineHeight, "DURABILITE");

    i += 2 * lineHeight;

    QSqlQuery query;
    query.prepare("select * from MACHINES");
    if (!query.exec()) {
        return;
    }

    while (query.next())
    {
        painter.drawText(100 + 0 * columnWidth, i, query.value(0).toString());
        painter.drawText(100 + 1 * columnWidth, i, query.value(1).toString());
        painter.drawText(100 + 2 * columnWidth, i, query.value(2).toString());
        painter.drawText(100 + 3 * columnWidth, i, query.value(3).toString());
        painter.drawText(100 + 4 * columnWidth, i, query.value(4).toString());
        painter.drawText(100 + 5 * columnWidth, i, query.value(5).toString());
        painter.drawText(100 + 6 * columnWidth, i, query.value(6).toString());

        i += 2 * lineHeight;
    }

    QMessageBox::information(this, QObject::tr("PDF Enregistré!"),
                             QObject::tr("PDF Enregistré!.\n"), QMessageBox::Ok);
}



void IU::on_pb_stat_clicked() {
    QSqlQueryModel model;
    model.setQuery("SELECT type, COUNT(*) as count FROM MACHINES GROUP BY type");

    if (model.lastError().isValid()) {
        qDebug() << model.lastError();
        return;
    }

    QPieSeries *series = new QPieSeries();

    int rowCount = model.rowCount();

    int totalCount = 0;
    for (int i = 0; i < rowCount; i++) {
        totalCount += model.data(model.index(i, 1)).toInt();
    }

    for (int i = 0; i < rowCount; i++) {
        QString type = model.data(model.index(i, 0)).toString();
        int count = model.data(model.index(i, 1)).toInt();

        qreal percentage = (static_cast<qreal>(count) / totalCount) * 100.0;

        QPieSlice *slice = series->append(type + " (" + QString::number(count) + ", " + QString::number(percentage, 'f', 2) + "%)", count);

        slice->setLabel(type + " (" + QString::number(percentage, 'f', 2) + "%)");
    }

    QChart *chart = new QChart;
    chart->addSeries(series);
    chart->setTitle("Statistiques");

    QChartView *chartView = new QChartView(chart);
    chartView->resize(640, 480);
    chartView->show();
}

void IU::on_pb_stat_3_clicked() {
    QSqlQueryModel model;
    model.setQuery("SELECT status, COUNT(*) as count FROM MACHINES GROUP BY status");

    if (model.lastError().isValid()) {
        qDebug() << model.lastError();
        return;
    }

    QPieSeries *series = new QPieSeries();

    int rowCount = model.rowCount();

    int totalCount = 0;
    for (int i = 0; i < rowCount; i++) {
        totalCount += model.data(model.index(i, 1)).toInt();
    }

    for (int i = 0; i < rowCount; i++) {
        QString status = model.data(model.index(i, 0)).toString();
        int count = model.data(model.index(i, 1)).toInt();

        qreal percentage = (static_cast<qreal>(count) / totalCount) * 100.0;

        QPieSlice *slice = series->append(status + " (" + QString::number(count) + ", " + QString::number(percentage, 'f', 2) + "%)", count);

        slice->setLabel(status + " (" + QString::number(percentage, 'f', 2) + "%)");
    }

    QChart *chart = new QChart;
    chart->addSeries(series);
    chart->setTitle("Statistiques");

    QChartView *chartView = new QChartView(chart);
    chartView->resize(640, 480);
    chartView->show();
}

void IU::on_pb_stat_2_clicked() {
        QSqlQueryModel model;
        model.setQuery("SELECT cout, COUNT(*) as count FROM MACHINES GROUP BY cout");

        if (model.lastError().isValid()) {
            qDebug() << model.lastError();
            return;
        }

        QPieSeries *series = new QPieSeries();

        int rowCount = model.rowCount();

        int totalCount = 0;
        for (int i = 0; i < rowCount; i++) {
            totalCount += model.data(model.index(i, 1)).toInt();
        }

        for (int i = 0; i < rowCount; i++) {
            QString cout = model.data(model.index(i, 0)).toString();
            int count = model.data(model.index(i, 1)).toInt();

            qreal percentage = (static_cast<qreal>(count) / totalCount) * 100.0;

            QPieSlice *slice = series->append(cout + " (" + QString::number(count) + ", " + QString::number(percentage, 'f', 2) + "%)", count);

            slice->setLabel(cout + " (" + QString::number(percentage, 'f', 2) + "%)");
        }

        QChart *chart = new QChart;
        chart->addSeries(series);
        chart->setTitle("Statistiques");

        QChartView *chartView = new QChartView(chart);
        chartView->resize(640, 480);
        chartView->show();
    }


void IU::on_qrcodegen_clicked()
{
    Hub *hubWindow = new Hub(this);
    hubWindow->show();
}


/*void IU::on_qrcodegen_clicked()
{
        QString filename = QFileDialog::getSaveFileName(this,tr("choose"),"",tr("Image(*.png )"));
        if (QString::compare(filename,QString()) !=0)
        {
            QImage image;
            bool valid = image.load(filename);
            if(valid)
            {
                image=image.scaledToWidth(ui->qrcodecommande->width(), Qt::SmoothTransformation);
                        ui->qrcodecommande->setPixmap(QPixmap::fromImage(image));
            }
            else
            {
                //ERROR HANDLING
            }
        }
}*/

QString IU::getMachineInfoFromDatabase(int id) {
    QSqlQuery query;
    query.prepare("SELECT id, nom, type, date_aj, cout, status, durabilite FROM MACHINES WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec() && query.next()) {
        int id = query.value("id").toInt();
        QString nom = query.value("nom").toString();
        QString type = query.value("type").toString();
        QString date_aj = query.value("date_aj").toString();
        int cout = query.value("cout").toInt();
        QString status = query.value("status").toString();
        QString durabilite = query.value("durabilite").toString();

        QString machineInfo = QString("ID: %1\nNom: %2\nType: %3\nDate Ajout: %4\nCout: %5\nStatus: %6\nDurabilité: %7")
                .arg(id)
                .arg(nom)
                .arg(type)
                .arg(date_aj)
                .arg(cout)
                .arg(status)
                .arg(durabilite);

        qDebug() << "ID:" << id;
        qDebug() << "Nom:" << nom;
        qDebug() << "Type:" << type;
        qDebug() << "Date Ajout:" << date_aj;
        qDebug() << "Cout:" << cout;
        qDebug() << "Status:" << status;
        qDebug() << "Durabilité:" << durabilite;

        return machineInfo;
    } else {
        qDebug() << "Erreur lors de la récupération des informations de la machine:" << query.lastError().text();
        return QString();
    }
}

void IU::redirectMachineQRCode(int id) {
    QString machineInfo = getMachineInfoFromDatabase(id);
    if (!machineInfo.isEmpty()) {
        machineInfo.replace("\n", "<br>");
        QString htmlContent = QString(
            "<html>"
            "<head><title>Machine Info</title></head>"
            "<body>"
            "<h1>Informations de la machine</h1>"
            "<p>%1</p>"
            "</body>"
            "</html>"
        ).arg(machineInfo);
        QString fileName = QString("machine_info_%1.html").arg(id);
        QFile file(fileName);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream stream(&file);
            stream << htmlContent;
            file.close();
            QDesktopServices::openUrl(QUrl::fromLocalFile(fileName));
        } else {
            qDebug() << "Erreur lors de la création du fichier HTML temporaire.";
        }
    }
}

void IU::generateMachineQRCode(int id) {
    QSqlQuery query;
    query.prepare("SELECT id, nom, type, date_aj, cout, status, durabilite FROM MACHINES WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec() && query.next()) {
        QString id = query.value("id").toString();
        QString nom = query.value("nom").toString();
        QString type = query.value("type").toString();
        QString date_aj = query.value("date_aj").toString();
        QString cout = query.value("cout").toString();
        QString status = query.value("status").toString();
        QString durabilite = query.value("durabilite").toString();

        QString machineInfo = QString("ID: %1\nNom: %2\nType: %3\nDate Ajout: %4\nCout: %5\nStatus: %6\nDurabilité: %7")
                .arg(id).arg(nom).arg(type).arg(date_aj).arg(cout).arg(status).arg(durabilite);
        QByteArray byteArray = machineInfo.toUtf8();
        const std::vector<std::uint8_t> data(byteArray.begin(), byteArray.end());
        qrcodegen::QrSegment qrSegment = qrcodegen::QrSegment::makeBytes(data);
        qrcodegen::QrCode qrCode = qrcodegen::QrCode::encodeSegments({qrSegment}, qrcodegen::QrCode::Ecc::MEDIUM);
        std::string svgString = qrCode.toSvgString(4);
        QImage image;
        if (!image.loadFromData(QByteArray(svgString.c_str()))) {
            qDebug() << "Erreur lors de la création de l'image :" << image.isNull();
        } else {
            image = image.scaledToWidth(ui->qrcodecommande->width(), Qt::SmoothTransformation);
            ui->qrcodecommande->setPixmap(QPixmap::fromImage(image));
            qDebug() << "Image chargée avec succès.";
        }
    } else {
        qDebug() << "Erreur lors de la récupération des informations de la machine:" << query.lastError().text();
    }
}

void IU::on_qrcode_clicked() {
    QString userInput = ui->le_qr->text();
    bool ok;
    int machineId = userInput.toInt(&ok);
    if (ok) {
        generateMachineQRCode(machineId);
    } else {
        qDebug() << "Saisie utilisateur non valide. Assurez-vous que vous avez entré un nombre entier.";
    }
}

void IU::on_redirect_clicked() {
    QString userInput = ui->le_qr->text();
    bool ok;
    int machineId = userInput.toInt(&ok);
    if (ok) {
        redirectMachineQRCode(machineId);
    } else {
        qDebug() << "Saisie utilisateur non valide. Assurez-vous que vous avez entré un nombre entier.";
    }
}


void IU::on_pb_menu_clicked()
{
    Dialog *w =new Dialog ;
        w->show();
       this->hide();
}
