#include "machines.h"
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QSqlRecord>
#include <QDateTime>
#include <iostream>
#include "connection.h"

MACHINES::MACHINES()
{
nom="" ; id=0; type=" "; date_aj=""; cout=0; status=""; durabilite="";
}
MACHINES::MACHINES(QString nom ,int id,QString type,QString date_aj,int cout, QString status,QString durabilite)
{this->nom=nom; this->id=id; this->type=type; this->date_aj=date_aj;this->cout=cout;this->status=status;this->durabilite=durabilite;}
QString MACHINES:: getnom(){return nom;}
int MACHINES:: getid(){return id;}
QString MACHINES:: gettype(){return type;}
QString MACHINES:: getdate_aj(){return date_aj;}
int MACHINES:: getcout(){return cout;}
QString MACHINES:: getstatus(){return status;}
QString MACHINES:: getdurabilite(){return durabilite;}
void MACHINES:: setnom(QString nom){this->nom=nom;}
void MACHINES:: setid(int id){this->id=id;}
void MACHINES:: settype(QString type){this->type=type;}
void MACHINES:: setdate_aj(QString date_aj){this->date_aj=date_aj;}
void MACHINES:: setcout(int cout){this->cout=cout;}
void MACHINES:: setstatus(QString status){this->status=status;}
void MACHINES:: setdurabilite(QString durabilite){this->durabilite=durabilite;}
bool MACHINES::ajouter()
{
    QSqlQuery query;

    if (nom.isEmpty() || type.isEmpty() || cout == 0 || status.isEmpty() || durabilite.isEmpty()) {
        return false;
    }

    query.prepare("INSERT INTO MACHINES (nom, id, type, date_aj, cout, status, durabilite)"
                  "VALUES (:nom, :id, :type, :date_aj, :cout, :status, :durabilite)");

    query.bindValue(":nom", nom);
    query.bindValue(":id", id);
    query.bindValue(":type", type);
    query.bindValue(":date_aj", QDateTime::currentDateTime());
    query.bindValue(":cout", cout);
    query.bindValue(":status", status);
    query.bindValue(":durabilite", durabilite);


    return query.exec();
}


bool MACHINES::supprimer(int id) {
    QSqlQuery query;
    QString id_string = QString::number(id);

    query.prepare("SELECT COUNT(*) FROM MACHINES WHERE id= :id");
    query.bindValue(":id", id_string);
    if (!query.exec()) {
        return false;
    }
    query.next();
    if (query.value(0).toInt() == 0) {
        return false;
    }

    query.prepare("DELETE FROM MACHINES where id = :id");
    query.bindValue(":id", id_string);
    return query.exec();
}

QSqlQueryModel* MACHINES::afficher()

{

    QSqlQueryModel* model=new QSqlQueryModel();


 model->setQuery("SELECT* FROM MACHINES");

 model->setHeaderData(0, Qt::Horizontal, QObject:: tr("ID"));
 model->setHeaderData(1, Qt::Horizontal, QObject:: tr("Nom"));
 model->setHeaderData(2, Qt::Horizontal, QObject:: tr("Date_AJ"));
 model->setHeaderData(3, Qt::Horizontal, QObject:: tr("status"));
 model->setHeaderData(4, Qt::Horizontal, QObject:: tr("Type"));
 model->setHeaderData(5, Qt::Horizontal, QObject:: tr("Cout"));
 model->setHeaderData(6, Qt::Horizontal, QObject:: tr("Durabilite"));


    return model;
}

bool MACHINES::modifier() {
    QSqlQuery query;

    query.prepare("SELECT COUNT(*) FROM MACHINES WHERE id = :id");
    query.bindValue(":id", id);
    if (!query.exec()) {
        return false;
    }
    query.next();
    if (query.value(0).toInt() == 0) {
        return false;
    }

    query.prepare("SELECT nom, type, date_aj, cout, status, durabilite FROM MACHINES WHERE id = :id");
    query.bindValue(":id", id);
    if (!query.exec() || !query.next()) {
        return false;
    }

    QString ancienNom = query.value("nom").toString();
    QString ancienType = query.value("type").toString();
    QString ancienneDateAj = query.value("date_aj").toString();
    int ancienCout = query.value("cout").toInt();
    QString ancienStatus = query.value("status").toString();
    QString ancienDurabilite = query.value("durabilite").toString();


    query.prepare("UPDATE MACHINES SET nom=:nom, "
                  "cout=:cout, status=:status, durabilite=:durabilite WHERE id=:id");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom.isEmpty() ? ancienNom : nom);
    query.bindValue(":type", type.isEmpty() ? ancienType : type);
    if (date_aj.isNull()) {
        query.bindValue(":date_aj", ancienneDateAj);
    } else {
        query.bindValue(":date_aj", date_aj);
    }

    query.bindValue(":cout", (cout == 0) ? ancienCout : cout);
    query.bindValue(":status", status.isEmpty() ? ancienStatus : status);
    query.bindValue(":durabilite", durabilite.isEmpty() ? ancienDurabilite : durabilite);


    return query.exec();
}


QSqlQueryModel* MACHINES::triasc(){
          QSqlQueryModel* model=new QSqlQueryModel();
          model->setQuery("SELECT * FROM MACHINES ORDER BY id ASC");
          model->setHeaderData(0, Qt::Horizontal, QObject:: tr("ID"));
          model->setHeaderData(1, Qt::Horizontal, QObject:: tr("Nom"));
          model->setHeaderData(2, Qt::Horizontal, QObject:: tr("Date_AJ"));
          model->setHeaderData(3, Qt::Horizontal, QObject:: tr("status"));
          model->setHeaderData(4, Qt::Horizontal, QObject:: tr("Type"));
          model->setHeaderData(5, Qt::Horizontal, QObject:: tr("cout"));
          model->setHeaderData(6, Qt::Horizontal, QObject:: tr("Durabilite"));



         return model;
}

QSqlQueryModel* MACHINES::tridesc(){
          QSqlQueryModel* model=new QSqlQueryModel();
          model->setQuery("SELECT * FROM MACHINES ORDER BY id DESC");
          model->setHeaderData(0, Qt::Horizontal, QObject:: tr("ID"));
          model->setHeaderData(1, Qt::Horizontal, QObject:: tr("Nom"));
          model->setHeaderData(2, Qt::Horizontal, QObject:: tr("Date_AJ"));
          model->setHeaderData(3, Qt::Horizontal, QObject:: tr("status"));
          model->setHeaderData(4, Qt::Horizontal, QObject:: tr("Type"));
          model->setHeaderData(5, Qt::Horizontal, QObject:: tr("cout"));
          model->setHeaderData(6, Qt::Horizontal, QObject:: tr("Durabilite"));



         return model;
}

QSqlQueryModel * MACHINES::tri_nom()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from MACHINES order by nom");
model->setHeaderData(0, Qt::Horizontal, QObject:: tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject:: tr("Nom"));
model->setHeaderData(2, Qt::Horizontal, QObject:: tr("Date_AJ"));
model->setHeaderData(3, Qt::Horizontal, QObject:: tr("status"));
model->setHeaderData(4, Qt::Horizontal, QObject:: tr("Type"));
model->setHeaderData(5, Qt::Horizontal, QObject:: tr("cout"));
model->setHeaderData(6, Qt::Horizontal, QObject:: tr("Durabilite"));



    return model;
}
QSqlQueryModel * MACHINES::tri_type()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from MACHINES order by type");
model->setHeaderData(0, Qt::Horizontal, QObject:: tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject:: tr("Nom"));
model->setHeaderData(2, Qt::Horizontal, QObject:: tr("Date_AJ"));
model->setHeaderData(3, Qt::Horizontal, QObject:: tr("status"));
model->setHeaderData(4, Qt::Horizontal, QObject:: tr("Type"));
model->setHeaderData(5, Qt::Horizontal, QObject:: tr("cout"));
model->setHeaderData(6, Qt::Horizontal, QObject:: tr("Durabilite"));


    return model;
}


bool MACHINES::rechercher(int id)
 {


       QSqlQuery query("SELECT * FROM MACHINES");
       QSqlQuery recherche("select * from MACHINES where  id = "+QString::number(id) );
         QSqlRecord rec = recherche.record();

         qDebug() << "Number of columns: " << rec.count();

         int nameCol = rec.indexOf("id");
         while (recherche.next()){
             qDebug() << recherche.value(nameCol).toString();
             QString test= recherche.value(nameCol).toString();
         if (test!=""){query.exec("select from MACHINES where id="+QString::number(id));

                 return true;
             }
             return false;


 }
     return query.exec();
}

bool MACHINES::rechercher2(QString nom)
{
    QSqlQuery query("SELECT * FROM MACHINES");
    query.prepare("select * from MACHINES where nom = :nom");
    query.bindValue(":nom", nom);

    if (query.exec()) {
        QSqlRecord rec = query.record();
        qDebug() << "Number of columns: " << rec.count();

        int nameCol = rec.indexOf("nom");

        while (query.next()) {
            qDebug() << query.value(nameCol).toString();
            QString test = query.value(nameCol).toString();

            if (test != "") {
                return true;
            }
            return false;
        }
    }

    return false;
}


bool MACHINES::rechercher3(QString type)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM MACHINES WHERE type = :type");
    query.bindValue(":type", type);

    if (query.exec()) {
        QSqlRecord rec = query.record();
        qDebug() << "Number of columns: " << rec.count();

        int nameCol = rec.indexOf("type");

        while (query.next()) {
            qDebug() << query.value(nameCol).toString();
            QString test = query.value(nameCol).toString();

            if (test != "") {
                return true;
            }
            return false;
        }

    return false;
    }
}

QSqlQueryModel* MACHINES::afficher2()
{
    QSqlQueryModel* model=new QSqlQueryModel();



          model->setQuery("SELECT* FROM MACHINES where id="+QString::number(id));

          model->setHeaderData(0, Qt::Horizontal, QObject:: tr("ID"));
          model->setHeaderData(1, Qt::Horizontal, QObject:: tr("Nom"));
          model->setHeaderData(2, Qt::Horizontal, QObject:: tr("Date_AJ"));
          model->setHeaderData(3, Qt::Horizontal, QObject:: tr("status"));
          model->setHeaderData(4, Qt::Horizontal, QObject:: tr("Type"));
          model->setHeaderData(5, Qt::Horizontal, QObject:: tr("cout"));
          model->setHeaderData(6, Qt::Horizontal, QObject:: tr("Durabilite"));




             return model;
}

QSqlQueryModel* MACHINES::afficher3()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery query;
    query.prepare("SELECT * FROM MACHINES WHERE nom = :nom");
    query.bindValue(":nom", nom);

    if (query.exec()) {
        model->setQuery(query);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date_AJ"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("Status"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("Type"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("Cout"));
        model->setHeaderData(6, Qt::Horizontal, QObject:: tr("Durabilite"));

    }

    return model;
}

QSqlQueryModel* MACHINES::afficher4()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery query;
    query.prepare("SELECT * FROM MACHINES WHERE type = :type");
    query.bindValue(":type", type);

    if (query.exec()) {
        model->setQuery(query);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date_AJ"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("Status"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("Type"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("Cout"));
        model->setHeaderData(6, Qt::Horizontal, QObject:: tr("Durabilite"));
    }

    return model;
}
