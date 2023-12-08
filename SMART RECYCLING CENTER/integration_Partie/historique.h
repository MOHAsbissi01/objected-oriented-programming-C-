// historique.h
#ifndef HISTORIQUE_H
#define HISTORIQUE_H

#include <QFile>
#include <QTextStream>
#include <QString>
#include <QDebug>
#include "machines.h"
#include "connection.h"

class Historique
{
    QString tmp;

public slots:
    Historique();
    void save(int id, const QString& nom, const QString& type, const QString& date, int cout, const QString& status,const QString& durabilite, const QString& action);
    QString load();
    void save2(int id, const QString& nom, const QString& type, const QString& date, int cout, const QString& status,const QString& durabilite, const QString& action);
    QString load2();

};

#endif // HISTORIQUE_H
