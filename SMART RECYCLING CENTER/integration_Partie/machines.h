#ifndef MACHINES_H
#define MACHINES_H
#include <QString>
#include <QSqlQueryModel>
#include <iostream>
#include "notification.h"
#include "connection.h"
class MACHINES
{
public:
   MACHINES();
   MACHINES(QString,int, QString, QString, int, QString,QString);
    QString getnom();
    int getid();
    QString gettype();
    QString getdate_aj();
    int getcout();
    QString getstatus();
    QString getdurabilite();
    void setnom(QString);
    void setid(int);
    void settype(QString);
    void setdate_aj(QString);
    void setcout(int);
    void setstatus(QString);
    void setdurabilite(QString);
    bool ajouter();
    QSqlQueryModel*  afficher();
    bool supprimer(int);
    bool modifier();
    bool rechercher(int);
    bool rechercher2(QString);
    bool rechercher3(QString);
    QSqlQueryModel*  afficher2();
    QSqlQueryModel*  afficher3();
    QSqlQueryModel*  afficher4();
    QSqlQueryModel*  triasc();
    QSqlQueryModel*  tridesc();
    QSqlQueryModel* tri_nom();
    QSqlQueryModel* tri_type();
    static QHash<QString, int> getEnsemble();

  private:
    int id, cout;
    QString nom,type,date_aj,status,durabilite;
    notification notif;
};

#endif // MACHINES_H
