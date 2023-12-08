#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "arduino.h"
#include <QRegularExpression>
#include "dialog.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ui->le_id->setValidator(new QIntValidator(0, 99999999, this));
    ui->tab_fournisseur->setModel(F.afficher());

    ui->le_type_fournisseur->addItem("simple Fournisseur");
    ui->le_type_fournisseur->addItem("societe de Fournisseur");
    ui->le_type_fournisseur->addItem("Autre...");

    ui->le_sexe->addItem("MALE");
    ui->le_sexe->addItem("FEMALE");

    ui->le_contrat->addItem("Semaine");
    ui->le_contrat->addItem("Mois");
    ui->le_contrat->addItem("Quantite");

    ui->le_matiere_recyclee->addItem("Plastique");
    ui->le_matiere_recyclee->addItem("Papiers");
    ui->le_matiere_recyclee->addItem("Verre");
    ui->le_matiere_recyclee->addItem("Bois");
    ui->le_matiere_recyclee->addItem("Metal");

    //-----------------------------------//

    ui->le_id_2->setValidator(new QIntValidator(0, 99999999, this));
    ui->tab_fournisseur_2->setModel(F.afficher());

    ui->le_type_fournisseur_2->addItem("simple Fournisseur");
    ui->le_type_fournisseur_2->addItem("societe de Fournisseur");
    ui->le_type_fournisseur_2->addItem("Autre...");

    ui->le_sexe_2->addItem("MALE");
    ui->le_sexe_2->addItem("FEMALE");

    ui->le_contrat_2->addItem("Semaine");
    ui->le_contrat_2->addItem("Mois");
    ui->le_contrat_2->addItem("Quantite");

    ui->le_matiere_recyclee_2->addItem("Plastique");
    ui->le_matiere_recyclee_2->addItem("Papiers");
    ui->le_matiere_recyclee_2->addItem("Verre");
    ui->le_matiere_recyclee_2->addItem("Bois");
    ui->le_matiere_recyclee_2->addItem("Metal");
    //------------------------------------------------------//
    ui->le_matiere_recyclee_3->addItem("Plastique");
    ui->le_matiere_recyclee_3->addItem("Papiers");
    ui->le_matiere_recyclee_3->addItem("Verre");
    ui->le_matiere_recyclee_3->addItem("Bois");
    ui->le_matiere_recyclee_3->addItem("Metal");

    ui->le_quantite_3->addItem("0");
    ui->le_quantite_3->addItem("10");
    ui->le_quantite_3->addItem("20");
    ui->le_quantite_3->addItem("50");
    ui->le_quantite_3->addItem("100");
    //-----------------------------------------------------//  
   initializeComboBox();
   //-------------------------------------------------------//
   QList<QSerialPortInfo> portList = QSerialPortInfo::availablePorts();
   qDebug() << "Available Serial Ports:";
   foreach(const QSerialPortInfo &port, portList)
   {
       qDebug() << "Port: " << port.portName() << "Description: " << port.description();
   }

   //----------//
   int ret = arduino.connect_arduino();
   switch (ret)
   {
   case 0:
       qDebug() << "Arduino is available and connected to: " << arduino.getarduino_port_name();
       break;
   case 1:
       qDebug() << "Arduino is available and  connected to: " << arduino.getarduino_port_name();
       break;
   case -1:
       qDebug() << "Arduino is not available";
       break;
   }

    //---------------------//
       if (arduino.connect_arduino() == 0) {
              ui->statusBar->showMessage("Arduino Connected");
          } else {
              ui->statusBar->showMessage("Failed to connect to Arduino");
          }
       //----------------------------//
         connect(&arduino, &Arduino::arduinoDataReceived, this, &MainWindow::processRFIDData);
         QObject::connect(arduino.getserial(), &QSerialPort::readyRead, this, [&]() {
             arduino.processRFIDData();
         });


       QObject::connect(&arduino, &Arduino::arduinoDataReceived, this, &MainWindow::update_label);

          // connect(&arduino, &Arduino::arduinoDataReceived, this, &MainWindow::read_from_arduino);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
{
    int id = ui->le_id->text().toInt();
    QString nom = ui->le_nom->text();
    QString prenom = ui->le_prenom->text();
    QString sexe = ui->le_sexe->currentText();
    QString type_fournisseur = ui->le_type_fournisseur->currentText();
    QString nom_entreprise = ui->le_nom_entreprise->text();
    QString contrat = ui->le_contrat->currentText();
    QString matiere_recyclee = ui->le_matiere_recyclee->currentText();
    int quantite = ui->le_quantite->text().toInt();

    Fournisseur F(id, nom, prenom, type_fournisseur, sexe, nom_entreprise, contrat, matiere_recyclee, quantite);
    bool test = F.ajouter();

    QMessageBox messageBox;
    messageBox.setWindowTitle(test ? "Success" : "Error");

    // Set the icon based on the result
    messageBox.setWindowIcon(QIcon(test ? "C:/Users/sbiss/OneDrive/Bureau/Atelier_Connexion/green_checkmark_icon.png" :
                                           "C:/Users/sbiss/OneDrive/Bureau/Atelier_Connexion/red_x_icon.png"));

    messageBox.setText(test ? "Fournisseur added successfully!" : "Failed to add fournisseur.");
    messageBox.setIcon(test ? QMessageBox::Information : QMessageBox::Critical);
    messageBox.setStyleSheet(test ? "background-color: #4CAF50; color: #ffffff;" : "background-color: #FF5252; color: #ffffff;");

    messageBox.exec();

    // Update table views if successful
    if (test) {
        ui->tab_fournisseur->setModel(F.afficher());
        ui->tab_fournisseur_2->setModel(F.afficher());
        ui->tab_fournisseur_3->setModel(F.afficher());
    }
}



void MainWindow::on_pb_supprimer_clicked() {
    QString idString = ui->le_id_supp->currentText() ;
    bool idExists = false;
    QSqlQuery query;
    query.prepare("SELECT id FROM FOURNISSEUR WHERE id = :id");
    query.bindValue(":id", idString);

    if (query.exec() && query.next()) {
        idExists = true;
    } else {

        QMessageBox::critical(this, "Erreur", "Erreur lors de la vérification de l'identifiant dans la base de données.");
        return;
    }

    if (idExists) {
        int id = idString.toInt();
        Fournisseur F1;
        F1.setid(id);
        bool test = F1.supprimer(F1.getid());

        if (test) {
            QMessageBox::information(this, "Suppression réussie", "Fournisseur supprimé avec succès !");
            ui->tab_fournisseur->setModel(F1.afficher());
            ui->tab_fournisseur_2->setModel(F1.afficher());
            ui->tab_fournisseur_3->setModel(F1.afficher());
        } else {
            QMessageBox::critical(this, "Erreur", "Échec de la suppression du fournisseur.");
        }
    } else {

        QMessageBox::critical(this, "Erreur", "L'identifiant n'existe pas dans la base de données.");
    }
}

void MainWindow::on_pb_modifier_clicked()
{
    QString idString = ui->le_id_2->text();
    bool idExists = false;
    QSqlQuery query;
    query.prepare("SELECT id FROM FOURNISSEUR WHERE id = :id");
    query.bindValue(":id", idString);

    if (query.exec() && query.next()) {
        idExists = true;
    } else {
        QMessageBox::critical(this, "Error", "Error occurred while checking the ID in the database.");
        return;
    }

    if (idExists) {
        int id = idString.toInt();
        QString nom = ui->le_nom_2->text();
        QString prenom = ui->le_prenom_2->text();
        QString type_fournisseur = ui->le_type_fournisseur_2->currentText();
        QString sexe = ui->le_sexe_2->currentText();
        QString nom_entreprise = ui->le_nom_entreprise_2->text();
        QString contrat = ui->le_contrat_2->currentText();
        QString matiere_recyclee = ui->le_matiere_recyclee_2->currentText();
        int quantite = ui->le_quantite_2->text().toInt();  // Assuming you have a QLineEdit named le_quantite_2

         Fournisseur F(id, nom, prenom, type_fournisseur, sexe, nom_entreprise, contrat, matiere_recyclee, quantite);
        bool test = F.update();

        if (test) {
            QMessageBox::information(this, "Successful Update", "Fournisseur updated successfully!");
            ui->tab_fournisseur_2->setModel(F.afficher());
        } else {
            QMessageBox::critical(this, "Error", "Failed to update the fournisseur.");
        }
    } else {
        QMessageBox::critical(this, "Error", "ID does not exist in the database.");
    }
}

void MainWindow::on_pb_sort_clicked()
{
        QSqlQueryModel* model = new QSqlQueryModel();
        model->setQuery("SELECT * FROM FOURNISSEUR ORDER BY id ASC");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("identifiant"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("type_fournisseur"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("sexe"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("nom_entreprise"));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("contrat"));
        model->setHeaderData(7, Qt::Horizontal, QObject::tr("matiere_recyclee"));
        model->setHeaderData(8, Qt::Horizontal, QObject::tr("quantite"));
        ui->tab_fournisseur->setModel(model);
        ui->tab_fournisseur_2->setModel(model);
        ui->tab_fournisseur_3->setModel(model);

}
void MainWindow::on_generate_pdf_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Export PDF", "", "*.pdf");
    if (!fileName.isEmpty())
    {
        QPrinter printer(QPrinter::HighResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setPaperSize(QPrinter::A4);
        printer.setOutputFileName(fileName);
        QTextDocument doc;

        QString html = "<html>"
                       "<head>"
                       "<style>"
                       "body { font-family: 'Arial', sans-serif; background-color: #ffffff; color: #000000; margin: 0; }"
                       "#template { position: absolute; top: 0; left: 0; z-index: -1; }"
                       "#content { position: relative; z-index: 1; margin-top: 100px; }"
                       "#header { background-color: #4CAF50; padding: 20px; color: #ffffff; text-align: center; }"
                       "table { width: 100%; border-collapse: collapse; margin-top: 20px; }"
                       "th, td { border: 1px solid #dddddd; text-align: left; padding: 12px; }"
                       "th { background-color: #4CAF50; color: #ffffff; }"
                       "h2 { color: #4CAF50; }"
                       ".creative { background-color: #f0f0f0; padding: 20px; margin-top: 20px; }"
                       "</style>"
                       "</head>"
                       "<body>"
                       "<div id='template'>"
                       "<div id='header'>"
                       "<img src='C:/Users/sbiss/OneDrive/Bureau/Atelier_Connexion/logo.png' alt='Logo' width='250' height='180' />"
                       "<h1>Your Company Name</h1>"
                       "<p>Other Details</p>"
                       "</div>"
                       "</div>"
                       "<div id='content'>";

        html += "<h2>Fournisseur Table</h2>";
        QSqlQueryModel *model = F.afficher();
        html += "<table>";
        html += "<tr>";

        for (int col = 0; col < model->columnCount(); ++col)
        {
            html += "<th>" + model->headerData(col, Qt::Horizontal).toString() + "</th>";
        }

         html += "<th>Evaluation</th>";
        html += "<th>Discount</th>";

        html += "</tr>";

        for (int row = 0; row < model->rowCount(); ++row)
        {
            html += "<tr>";

            for (int col = 0; col < model->columnCount(); ++col)
            {
                html += "<td>" + model->data(model->index(row, col)).toString() + "</td>";
            }

            if (row == 0)
            {
                html += "<td>" "Evaluation" "</td>";
                html += "<td>" "Discount" "</td>";
            }
            else
            {
                html += "<td></td>";  // Empty cell as placeholders for Evaluation and Discount
                html += "<td></td>";
            }

            html += "</tr>";
        }

        html += "</table>";

        // Additional creative section
        html += "<div class='creative'>";
        html += "<h2>Creative Section</h2>";
        html += "<p>This is a creative section to showcase additional information or highlights about your suppliers.</p>";
        html += "<p>Feel free to add images, graphs, or any other creative elements here.</p>";
        html += "</div>";

        html += "</div></body></html>";

         doc.setHtml(html);

         doc.print(&printer);
    }
}


void MainWindow::displayCharts() {
    QMap<QString, int> sexeCount;
    QSqlQuery query("SELECT sexe, COUNT(*) FROM FOURNISSEUR GROUP BY sexe");
    while (query.next()) {
        QString sexe = query.value(0).toString();
        int count = query.value(1).toInt();
        sexeCount[sexe] = count;
    }
    int total = sexeCount["MALE"] + sexeCount["FEMALE"];

    QGraphicsScene* scene = new QGraphicsScene(this);
    QGraphicsView* view = new QGraphicsView(scene);
    view->setRenderHint(QPainter::Antialiasing);

    qreal startAngle = 0;
    for (const QString& sexe : sexeCount.keys()) {
        qreal angle = 360.0 * sexeCount[sexe] / total;
        QGraphicsEllipseItem* slice = scene->addEllipse(-50, -50, 100, 100, QPen(Qt::black), QBrush(QColor(sexe == "MALE" ? Qt::blue : Qt::magenta)));
        slice->setStartAngle(startAngle * 16);
        slice->setSpanAngle(angle * 16);

        qreal percentage = 100.0 * sexeCount[sexe] / total;
        QString percentageText = QString::number(percentage, 'f', 1) + "%";
        QGraphicsTextItem* label = scene->addText(percentageText, QFont("Arial", 8));
        label->setPos(70 * qCos(qDegreesToRadians(startAngle + angle / 2)),
                      70 * qSin(qDegreesToRadians(startAngle + angle / 2)));

        startAngle += angle;
    }

    scene->addRect(180, 20, 20, 20, QPen(Qt::black), QBrush(Qt::blue));
    scene->addText("MALE", QFont("Arial", 10))->setPos(210, 25);

    scene->addRect(180, 50, 20, 20, QPen(Qt::black), QBrush(Qt::magenta));
    scene->addText("FEMALE", QFont("Arial", 10))->setPos(210, 55);

    view->setRenderHint(QPainter::Antialiasing);
    view->setRenderHint(QPainter::TextAntialiasing);
    view->show();
}

void MainWindow::on_display_Charts_clicked()
{
     displayCharts() ;
}

void MainWindow::on_bp_search_clicked()
{

      QString searchText = ui->le_search->text();

        if (searchText.isEmpty()) {
            QMessageBox::critical(this, "Error", "Please enter an ID, nom, or prenom.");
            return;
        }
        QSqlQueryModel *searchModel = new QSqlQueryModel();
        QSqlQuery query;

        if (searchText.toInt() != 0) {
            int id = searchText.toInt();
            query.prepare("SELECT * FROM FOURNISSEUR WHERE id = :id");
            query.bindValue(":id", id);
           } else {
            query.prepare("SELECT * FROM FOURNISSEUR WHERE nom = :nom OR prenom = :prenom");
            query.bindValue(":nom", searchText);
            query.bindValue(":prenom", searchText);
        }

        if (query.exec()) {
            searchModel->setQuery(query);
            ui->search_table_view->setModel(searchModel);
            if (searchModel->rowCount() == 0) {
                QMessageBox::information(this, "No Results", "No results found for the provided search.");
            }
        } else {
            qDebug() << "Query Error: " << query.lastError().text();
            QMessageBox::critical(this, "Error", "Failed to execute the search query.");
        }
}

void MainWindow::searchAndSelectId()
{
    QString searchId = ui->le_id_3->currentText();
    QSqlQuery query;
    query.prepare("SELECT id FROM FOURNISSEUR WHERE id = :id");
    query.bindValue(":id", searchId);
    if (query.exec() && query.next()) {
         ui->le_id_3->setCurrentText(searchId);

        QMessageBox::information(this, "Success", "ID found!");
    } else {
         QMessageBox::critical(this, "Error", "ID not found in the database.");
    }
}

void MainWindow::initializeComboBox() {
    QSqlQueryModel *idModel = new QSqlQueryModel();
    idModel->setQuery("SELECT id FROM FOURNISSEUR");
    QStringList idList;
    for (int row = 0; row < idModel->rowCount(); ++row) {
        idList << idModel->data(idModel->index(row, 0)).toString();
    }
    qDebug() << "Existing IDs: " << idList;

    ui->le_id_3->addItems(idList);
    ui->le_id_4->addItems(idList);
    ui->le_id_supp->addItems(idList);

    connect(ui->le_id_3, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::searchAndSelectId);
    connect(ui->le_id_4, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::searchAndSelectId);
    connect(ui->le_id_supp, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::searchAndSelectId);


}

void MainWindow::on_addAchatButton_clicked()
{
    int selectedId = ui->le_id_3->currentText().toInt();
    QString selectedMatiereRecyclee = ui->le_matiere_recyclee_3->currentText();
    int selectedQuantiteAchat = ui->le_quantite_3->currentText().toInt();
    Fournisseur F;
    bool ajoutAchatSuccess = F.ajouterAchat(selectedId, selectedMatiereRecyclee, selectedQuantiteAchat);

    if (ajoutAchatSuccess) {
        F.getEvaluation(selectedId);
        F.getDiscount(selectedId);
        QMessageBox::information(this, "Success", "Achat added successfully!");
    } else {
        QMessageBox::critical(this, "Error", "Failed to add achat.");
    }
}


void MainWindow::on_bp_evaluation_clicked()
{
    QString selectedId = ui->le_id_4->currentText();
    QString evaluation = F.getEvaluation(selectedId.toInt());
    QMessageBox msgBox;
    msgBox.setIconPixmap(QPixmap("C:/Users/sbiss/OneDrive/Bureau/Atelier_Connexion/evaluation-icon.png"));
    msgBox.setWindowTitle("Evaluation");
    msgBox.setText("Evaluation: " + evaluation);
    msgBox.exec();
}

void MainWindow::on_bp_discount_clicked()
{
    QString selectedId = ui->le_id_4->currentText();
    QString discount = F.getDiscount(selectedId.toInt());
    QMessageBox msgBox;
    msgBox.setIconPixmap(QPixmap("C:/Users/sbiss/OneDrive/Bureau/Atelier_Connexion/discount-icon.png"));
    msgBox.setWindowTitle("Discount");
    msgBox.setText("Discount: " + discount);
    msgBox.exec();
}
void MainWindow::on_pb_SortSexe_clicked()
{
    QSqlQueryModel* model = new QSqlQueryModel();
       model->setQuery("SELECT * FROM FOURNISSEUR ORDER BY sexe ASC");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("identifiant"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("sexe"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("type_fournisseur"));
       model->setHeaderData(5, Qt::Horizontal, QObject::tr("nom_entreprise"));
       model->setHeaderData(6, Qt::Horizontal, QObject::tr("contrat"));
       model->setHeaderData(7, Qt::Horizontal, QObject::tr("matiere_recyclee"));
       model->setHeaderData(8, Qt::Horizontal, QObject::tr("quantite"));
       ui->tab_fournisseur->setModel(model);
       ui->tab_fournisseur_2->setModel(model);
       ui->tab_fournisseur_3->setModel(model);

}

void MainWindow::on_pb_SortDiscount_clicked()
{
    QSqlQueryModel* model = new QSqlQueryModel();
       model->setQuery("SELECT * FROM FOURNISSEUR ORDER BY discount  ASC");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("identifiant"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("type_fournisseur"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("sexe"));
       model->setHeaderData(5, Qt::Horizontal, QObject::tr("nom_entreprise"));
       model->setHeaderData(6, Qt::Horizontal, QObject::tr("contrat"));
       model->setHeaderData(7, Qt::Horizontal, QObject::tr("matiere_recyclee"));
       model->setHeaderData(8, Qt::Horizontal, QObject::tr("quantite"));
       ui->tab_fournisseur->setModel(model);
       ui->tab_fournisseur_2->setModel(model);
       ui->tab_fournisseur_3->setModel(model);
}

void MainWindow::on_display_Charts_Evaluation_clicked()
{
    QMap<QString, int> evaluationCount;
    QSqlQuery query("SELECT evaluation, COUNT(*) FROM FOURNISSEUR WHERE evaluation IS NOT NULL GROUP BY evaluation");
    while (query.next()) {
        QString evaluation = query.value(0).toString();
        int count = query.value(1).toInt();
        evaluationCount[evaluation] = count;
    }
    int total = 0;
    for (const QString& eval : evaluationCount.keys()) {
        total += evaluationCount[eval];
    }
    QGraphicsScene* scene = new QGraphicsScene(this);
    QGraphicsView* view = new QGraphicsView(scene);
    view->setRenderHint(QPainter::Antialiasing);

    qreal startAngle = 0;
    for (const QString& evaluation : evaluationCount.keys()) {
        qreal angle = 360.0 * evaluationCount[evaluation] / total;
        QGraphicsEllipseItem* slice = scene->addEllipse(-50, -50, 100, 100, QPen(Qt::black), QBrush(QColor(evaluation == "Low" ? Qt::red : (evaluation == "Medium" ? Qt::yellow : Qt::green))));
        slice->setStartAngle(startAngle * 16);
        slice->setSpanAngle(angle * 16);

        qreal percentage = 100.0 * evaluationCount[evaluation] / total;
        QString percentageText = QString::number(percentage, 'f', 1) + "%";
        QGraphicsTextItem* label = scene->addText(percentageText, QFont("Arial", 8));
        label->setPos(70 * qCos(qDegreesToRadians(startAngle + angle / 2)),
                      70 * qSin(qDegreesToRadians(startAngle + angle / 2)));

        startAngle += angle;
    }
    scene->addRect(180, 20, 20, 20, QPen(Qt::black), QBrush(Qt::red));
    scene->addText("Low", QFont("Arial", 10))->setPos(210, 25);

    scene->addRect(180, 50, 20, 20, QPen(Qt::black), QBrush(Qt::yellow));
    scene->addText("Medium", QFont("Arial", 10))->setPos(210, 55);

    scene->addRect(180, 80, 20, 20, QPen(Qt::black), QBrush(Qt::green));
    scene->addText("High", QFont("Arial", 10))->setPos(210, 85);

    view->setRenderHint(QPainter::Antialiasing);
    view->setRenderHint(QPainter::TextAntialiasing);
    view->show();
}

void MainWindow::on_display_Charts_matiere_recyclee_clicked()
{
    QMap<QString, int> matiereCount;
    QSqlQuery query("SELECT matiere_recyclee, COUNT(*) FROM FOURNISSEUR WHERE matiere_recyclee IS NOT NULL GROUP BY matiere_recyclee");
    while (query.next()) {
        QString matiere = query.value(0).toString();
        int count = query.value(1).toInt();
        matiereCount[matiere] = count;
    }

    int total = 0;
    for (const QString& matiere : matiereCount.keys()) {
        total += matiereCount[matiere];
    }
    QGraphicsScene* scene = new QGraphicsScene(this);
    QGraphicsView* view = new QGraphicsView(scene);
    view->setRenderHint(QPainter::Antialiasing);

    qreal startAngle = 0;
    for (const QString& matiere : matiereCount.keys()) {
        qreal angle = 360.0 * matiereCount[matiere] / total;
        QGraphicsEllipseItem* slice = scene->addEllipse(-50, -50, 100, 100, QPen(Qt::black), QBrush(QColor(getColorForMatiere(matiere))));
        slice->setStartAngle(startAngle * 16);
        slice->setSpanAngle(angle * 16);

        qreal percentage = 100.0 * matiereCount[matiere] / total;
        QString percentageText = QString::number(percentage, 'f', 1) + "%";
        QGraphicsTextItem* label = scene->addText(percentageText, QFont("Arial", 8));
        label->setPos(70 * qCos(qDegreesToRadians(startAngle + angle / 2)),
                      70 * qSin(qDegreesToRadians(startAngle + angle / 2)));

        startAngle += angle;
    }
    int legendX = 180;
    int legendY = 20;

    for (const QString& matiere : matiereCount.keys()) {
        scene->addRect(legendX, legendY, 20, 20, QPen(Qt::black), QBrush(QColor(getColorForMatiere(matiere))));
        scene->addText(matiere, QFont("Arial", 10))->setPos(legendX + 30, legendY + 5);
        legendY += 30;
    }
    view->setRenderHint(QPainter::Antialiasing);
    view->setRenderHint(QPainter::TextAntialiasing);
    view->show();
}

 Qt::GlobalColor MainWindow::getColorForMatiere(const QString & matiere_recyclee)
{
    if (matiere_recyclee == "Plastique") {
        return Qt::blue;
    } else if (matiere_recyclee == "Papiers") {
        return Qt::red;
    } else if (matiere_recyclee == "Verre") {
        return Qt::green;
    } else if (matiere_recyclee == "Bois") {
        return Qt::yellow;
    } else if (matiere_recyclee == "Metal") {
        return Qt::cyan;
    } else {
        return Qt::black;
    }
}


void MainWindow::on_pb_SortQuantite_clicked()
{
    QSqlQueryModel* model = new QSqlQueryModel();
       model->setQuery("SELECT * FROM FOURNISSEUR ORDER BY CAST(quantite AS DECIMAL) ASC");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("identifiant"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("type_fournisseur"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("sexe"));
       model->setHeaderData(5, Qt::Horizontal, QObject::tr("nom_entreprise"));
       model->setHeaderData(6, Qt::Horizontal, QObject::tr("contrat"));
       model->setHeaderData(7, Qt::Horizontal, QObject::tr("matiere_recyclee"));
       model->setHeaderData(8, Qt::Horizontal, QObject::tr("quantite"));

       ui->tab_fournisseur->setModel(model);
       ui->tab_fournisseur_2->setModel(model);
       ui->tab_fournisseur_3->setModel(model);

}
void MainWindow::setStyles()
{
    // Set the overall background color
    QString backgroundColor = "#ffffff";  // White
    setStyleSheet("background-color: " + backgroundColor + ";");

    // Set specific styles for your elements
    QString buttonStyle = "background-color: #4CAF50; color: #ffffff;";  // Green background, white text
    ui->pb_ajouter->setStyleSheet(buttonStyle);

    // Add more styles for other elements as needed
}

bool MainWindow::isRFIDCardAuthorized(const QString &rfidData) {
    QSqlQuery query;


    query.prepare("SELECT * FROM FOURNISSEUR WHERE RFID = :rfidData");
    query.bindValue(":rfidData", rfidData);

    return query.exec() && query.next();
}

bool MainWindow::isRFIDRegistered(QString RFID) {
    QSqlQuery query;
    query.prepare("SELECT * FROM FOURNISSEUR WHERE RFID = :rfid");
    query.bindValue(":rfid", RFID);

    if (!(query.exec() && query.next())) {
        qDebug() << "RFID non enregistrée :" << query.lastError().text();
    }

    return query.isValid();
}

void MainWindow::update_label() {
    static QString buffer;

    QByteArray rawData = arduino.read_from_arduino2();
   // qDebug() << "Card detected!sucessfully :" << rawData;
    qDebug() << "Card detected!sucessfully" << endl ;
    buffer += rawData;

    int cardDetectedIndex = buffer.indexOf("Card detected!");

    while (cardDetectedIndex != -1) {
        QString data = buffer.mid(cardDetectedIndex);

        int uidStart = data.indexOf("UID tag :") + 9;
        int uidEnd = data.indexOf("\r\n", uidStart);

        if (uidStart != -1 && uidEnd != -1) {
            QString uid = data.mid(uidStart, uidEnd - uidStart).trimmed();
            qDebug() << "Extracted UID:" << uid;
            ui->lineEdit_rfid->setText(uid);
        } else {
            qDebug() << "Error: Invalid UID format";
        }

        buffer.remove(0, cardDetectedIndex + data.size());
        cardDetectedIndex = buffer.indexOf("Card detected!");
    }
}



void MainWindow::displayMessageLCD(const QString &message)
{
    // Conditionally display the message on the LCD screen only if it is "WELCOME"
    if (message == "WELCOME") {
        // Add the code to display the message on the LCD screen
        // For example, if you have an LCD object named lcdDisplay, you can use:
        // lcdDisplay->setText(message);
        qDebug() << "Message affiché sur l'écran LCD :" << message;
    }
}
/*

void MainWindow::processRFIDData(const QByteArray &data)
{
    qDebug() << "Received RFID data from Arduino:" ;
    // Remove spaces from the received data and convert to a single string
    QString rfidString = QString(data).trimmed().remove(" ");
     // Check if the RFID card is authorized
    if (isRFIDCardAuthorized(rfidString)) {
        // The RFID card is authorized
        QString messageToSend = "  \t WELCOME \t BACK     FOURISSEUR ";
        arduino.write_to_arduino(messageToSend);
        displayMessageLCD(messageToSend);
    } else {
        // The RFID card is not authorized
        QString messageToSend = "ACCESS DENIED";

       // arduino.write_to_arduino(messageToSend);
      //  displayMessageLCD(messageToSend);
    }
}

*/

#include <QMessageBox>

void MainWindow::processRFIDData(const QByteArray &data)
{
    //qDebug() << "Received RFID data from Arduino:" << data.trimmed();

    // Remove spaces from the received data and convert to a single string
    QString rfidString = QString(data).trimmed().remove(" ");

    // Check if the RFID card is authorized
    if (isRFIDCardAuthorized(rfidString)) {
        // The RFID card is authorized
        QSqlQuery query;
        query.prepare("SELECT nom, prenom FROM FOURNISSEUR WHERE RFID = :rfid");
        query.bindValue(":rfid", rfidString);

        // Execute the query
        if (query.exec() && query.next()) {
            // Retrieve nom and prenom from the query result
            QString nom = query.value("nom").toString();
            QString prenom = query.value("prenom").toString();

            QString message = "Welcome back, " + nom + " " + prenom;
            arduino.write_to_arduino(message);
            displayMessageLCD(message);
            QMessageBox::information(this, "Access Granted", "Welcome back, " + nom + " " + prenom);
        } else {
            // RFID not found in the database or database error
            qDebug() << "Database error or RFID not found: " << query.lastError().text();
            QString messageToSend = "ACCESS DENIED";
            arduino.write_to_arduino(messageToSend);
            displayMessageLCD(messageToSend);
            QMessageBox::critical(this, "Access Denied", "Access Denied");
        }
    } else {
        // The RFID card is not authorized
        QString messageToSend = "ACCESS DENIED";
        arduino.write_to_arduino(messageToSend);
        displayMessageLCD(messageToSend);
        QMessageBox::critical(this, "Access Denied", "Access Denied");
    }
}


bool MainWindow::getNomPrenomFromDatabase(const QString &rfidData, QString &nom, QString &prenom)
{
    if (db.isOpen()) {
         QSqlQuery query;
        query.prepare("SELECT nom, prenom FROM FOURNISSEUR WHERE RFID = :rfid");
        query.bindValue(":rfid", rfidData);

        // Execute the query
        if (query.exec() && query.next()) {
            // Retrieve nom and prenom from the query result
            nom = query.value("nom").toString();
            prenom = query.value("prenom").toString();
            return true;
        } else {
            // RFID not found in the database or database error
            qDebug() << "Database error or RFID not found: " << query.lastError().text();
            return false;
        }
    } else {
        // Database is not open
        qDebug() << "Database is not open";
        return false;
    }
}

void MainWindow::on_pb_BackM_clicked()
{
    Dialog *w =new Dialog ;
        w->show();
       this->hide();
}
