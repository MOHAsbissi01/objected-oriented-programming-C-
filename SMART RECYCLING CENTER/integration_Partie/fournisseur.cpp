#include "fournisseur.h"
#include "connection.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QSqlError>
#include <QObject>
#include <QVBoxLayout>
#include <QtMath>
Fournisseur::Fournisseur()
{
  id=0 ;
  nom=" " ;
  prenom=" ";
  type_fournisseur=" ";
  sexe=" ";
  nom_entreprise=" ";
  contrat=" ";
  matiere_recyclee=" ";
  quantite =0;
}

Fournisseur::Fournisseur(int id ,QString nom ,QString prenom, QString type_fournisseur , QString sexe , QString nom_entreprise , QString contrat , QString matiere_recyclee ,int quantite)
{
    this->id=id ;
    this->nom=nom ;
    this->prenom=prenom ;
    this->type_fournisseur=type_fournisseur ;
    this->sexe=sexe ;
    this->nom_entreprise=nom_entreprise ;
    this->contrat=contrat ;
    this->matiere_recyclee=matiere_recyclee ;
    this->quantite = quantite;


}
int Fournisseur::getid(){
    return id ;
}
QString Fournisseur::getnom(){
    return nom ;
}
QString Fournisseur::getprenom(){
    return prenom ;
}
QString Fournisseur::gettype_fournisseur(){
    return type_fournisseur ;
}
QString Fournisseur::getsexe(){
    return sexe ;
}
QString Fournisseur::getnom_entreprise(){
    return nom_entreprise ;
}
QString Fournisseur::getcontrat(){
    return contrat ;
}
int Fournisseur::getquantite()
{
    return quantite;
}

void Fournisseur::setid(int id){
    this->id=id;
}
void Fournisseur::setnom(QString nom){
    this->nom=nom;
}
void Fournisseur::setprenom(QString prenom){
    this->prenom=prenom;
}
void Fournisseur::settype_fournisseur(QString type_fournisseur){
    this->type_fournisseur=type_fournisseur;
}
void Fournisseur::setsexe(QString sexe){
    this->sexe=sexe;
}
void Fournisseur::setnom_entreprise(QString nom_entreprise){
    this->nom_entreprise=nom_entreprise;
}
void Fournisseur::setcontrat(QString contrat){
    this->contrat=contrat;
}
void Fournisseur::setmatiere_recyclee(QString matiere_recyclee){
    this->matiere_recyclee=matiere_recyclee;
}
void Fournisseur::setquantite(int quantite){
    this->quantite=quantite;
}




bool Fournisseur::ajouter()
{

        bool test = false;
        QSqlQuery query;
        QString id_string = QString::number(id);
        QString quantite_string = QString::number(quantite);

        query.prepare("INSERT INTO FOURNISSEUR (id, nom, prenom, sexe, type_fournisseur, nom_entreprise, contrat, matiere_recyclee, quantite, evaluation, discount) "
                      "VALUES (:id, :nom, :prenom, :sexe, :type_fournisseur, :nom_entreprise, :contrat, :matiere_recyclee, :quantite, :evaluation, :discount)");

        // Bind values to the query
        query.bindValue(":id", id_string);
        query.bindValue(":nom", nom);
        query.bindValue(":prenom", prenom);
        query.bindValue(":type_fournisseur", type_fournisseur);
        query.bindValue(":sexe", sexe);
        query.bindValue(":nom_entreprise", nom_entreprise);
        query.bindValue(":contrat", contrat);
        query.bindValue(":matiere_recyclee", matiere_recyclee);
        query.bindValue(":quantite", quantite_string);

        // Execute the query
        if (query.exec()) {
            test = true;

            // Update evaluation and discount in the database after insertion
            query.prepare("UPDATE FOURNISSEUR SET evaluation=:evaluation, discount=:discount WHERE id=:id");
            query.bindValue(":id", id_string);
            query.bindValue(":evaluation", evaluateQuantite(quantite));
            query.bindValue(":discount", calculateDiscount(quantite));
            query.exec();
        }

        return test;

}

QSqlQueryModel* Fournisseur::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel() ;
    model->setQuery("SELECT* FROM FOURNISSEUR ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("identifiant"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("type_fournisseur"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("sexe"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("nom_entreprise"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("contrat"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("matiere_recyclee"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("quantite"));


    return model ;
}

bool Fournisseur::supprimer(int id)
{
    QSqlQuery query;
      query.prepare("delete from Fournisseur where id=:id");
      query.bindValue(0,id);
      return query.exec();
}

bool Fournisseur::update() {
    QSqlQuery query;
    QString id_string = QString::number(id);
    QString quantite_string = QString::number(quantite);
    query.prepare("UPDATE FOURNISSEUR SET nom=:nom, prenom=:prenom, type_fournisseur=:type_fournisseur, sexe=:sexe, nom_entreprise=:nom_entreprise, contrat=:contrat, matiere_recyclee=:matiere_recyclee, quantite=:quantite WHERE id=:id");
    query.bindValue(":id", id_string);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":type_fournisseur", type_fournisseur);
    query.bindValue(":sexe", sexe);
    query.bindValue(":nom_entreprise", nom_entreprise);
    query.bindValue(":contrat", contrat);
    query.bindValue(":matiere_recyclee", matiere_recyclee);
    query.bindValue(":quantite", quantite_string); // Bind quantite as a string

    bool test = false;
    if (query.exec())
        test = true;

    return test;
}

bool Fournisseur::ajouterAchat(int id, QString matiereRecyclee, int quantiteAchat)
{
    if (!Connection::createconnect()) {
        qDebug() << "Database connection failed.";
        return false;
    }

    bool test = false;
    QSqlQuery query;

     query.prepare("SELECT id, quantite FROM FOURNISSEUR WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec() && query.next()) {
        // Record with the same ID exists, update the existing record
        int existingQuantite = query.value("quantite").toInt();
        int newQuantite = existingQuantite + quantiteAchat;

         query.prepare("UPDATE FOURNISSEUR SET matiere_recyclee = :matiere_recyclee, quantite = :quantite, evaluation = :evaluation, discount = :discount WHERE id = :id");
        query.bindValue(":id", id);
        query.bindValue(":matiere_recyclee", matiereRecyclee);
        query.bindValue(":quantite", newQuantite);

         QString evaluation = evaluateQuantite(newQuantite);
        QString discount = calculateDiscount(newQuantite);

        query.bindValue(":evaluation", evaluation);
        query.bindValue(":discount", discount);

        if (query.exec()) {
            qDebug() << "Achat added successfully!";
            test = true;
        } else {
            qDebug() << "Failed to update achat. Error: " << query.lastError().text();
        }
    } else {
         query.prepare("INSERT INTO FOURNISSEUR (id, matiere_recyclee, quantite, evaluation, discount) VALUES (:id, :matiere_recyclee, :quantite, :evaluation, :discount)");
        query.bindValue(":id", id);
        query.bindValue(":matiere_recyclee", matiereRecyclee);
        query.bindValue(":quantite", quantiteAchat);

         QString evaluation = evaluateQuantite(quantiteAchat);
        QString discount = calculateDiscount(quantiteAchat);

        query.bindValue(":evaluation", evaluation);
        query.bindValue(":discount", discount);

        if (query.exec()) {
            qDebug() << "Achat added successfully!";
            test = true;
        } else {
            qDebug() << "Failed to add achat. Error: " << query.lastError().text();
        }
    }

    return test;
}


QString Fournisseur::evaluateQuantite(int quantite)
{
    QString evaluation;

    if (quantite < 100)
        evaluation = "Low";
    else if (quantite >= 100 && quantite < 200)
        evaluation = "Medium";
    else
        evaluation = "High";

    return evaluation;
}

QString Fournisseur::calculateDiscount(int quantite)
{
    QString discount;

    if (quantite >= 100)
    {
        double discountValue = 0.001 * (quantite - 100);
        discountValue = qMin(discountValue, 0.20);

        int discountPercentage = static_cast<int>(discountValue * 100);
        discount = QString::number(discountPercentage) + "%";
    }
    else
    {

        discount = "0%";
    }

    return discount;
}


QString Fournisseur::getEvaluation(int id)
{
    QSqlQuery query;
    query.prepare("SELECT evaluation FROM FOURNISSEUR WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec() && query.next()) {
        return query.value(0).toString();
    }

    return "Not Available";
}

QString Fournisseur::getDiscount(int id)
{
    QSqlQuery query;
    query.prepare("SELECT discount FROM FOURNISSEUR WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec() && query.next()) {
        return query.value(0).toString();
    }

    return "Not Available";
}
