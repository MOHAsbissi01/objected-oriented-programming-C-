#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H
#include<QString>
#include<QSqlQueryModel>
#include <QString>
#include <QSqlQueryModel>
#include <QStandardItemModel>
#include "connection.h"
using namespace std ;

class Fournisseur
{
 private:
    int id ;
    int quantite;
    QString nom ;
    QString prenom ;
    QString type_fournisseur ;
    QString sexe ;
    QString nom_entreprise ;
    QString contrat ;
    QString matiere_recyclee ;
    QString evaluation;
    QString discount;

public:
    Fournisseur();
    Fournisseur(int, QString, QString, QString, QString, QString, QString, QString,int);
    int getid();
    QString getnom();
    QString getprenom();
    QString gettype_fournisseur();
    QString getsexe();
    QString getnom_entreprise();
    QString getcontrat();
    QString getmatiere_recyclee();
    int getquantite();
    QString getEvaluation() const;
    QString getDiscount() const;


    void setid(int);
    void setnom(QString);
    void setprenom(QString);
    void settype_fournisseur(QString);
    void setsexe(QString);
    void setnom_entreprise(QString);
    void setcontrat(QString);
    void setmatiere_recyclee(QString);
    void setquantite(int);



    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int) ;
    bool update() ;

    bool ajouterAchat(int id, QString matiereRecyclee, int quantiteAchat);

    QString evaluateQuantite(int quantite) ;
    QString calculateDiscount (int quantite ) ;

    QString  getDiscount(int id) ;
    QString  getEvaluation(int id);

 } ;

#endif // FOURNISSEUR_H
