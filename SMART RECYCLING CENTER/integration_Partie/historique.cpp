// historique.cpp
#include "machines.h"
#include "historique.h"
#include <QDateTime>
#include "connection.h"

Historique::Historique()
{
}

void Historique::save(int id, const QString& nom, const QString& type, const QString& date, int cout, const QString& status, const QString& durabilite, const QString& action)
{
    QDateTime dateTime = QDateTime::currentDateTime();
    QString formattedDate = dateTime.toString();
    QFile file("C:/Users/sbiss/OneDrive/Bureau/integration_Partie/Historique.txt");


    if (!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
    {
        qDebug() << "erreur";
    }

    QTextStream out(&file);
    out << "ID: " << id << " Nom: " << nom << " Type: " << type << " Date: " << formattedDate << " Action: " << action
        << " Cout: " << cout << " Status: " << status << " Durabilite: " << durabilite <<"\n";
}

QString Historique::load()
{
    tmp = "";
    QFile file("C:/Users/sbiss/OneDrive/Bureau/integration_Partie/Historique.txt");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        tmp = "";

    QTextStream in(&file);
    int i = 0;

    while (!in.atEnd())
    {
        QString myString = in.readLine();

        // Changer la couleur en fonction de la valeur de i
        QString color;
        switch (i)
        {
        case 0:
            color = "#3498db"; // Bleu
            break;
        case 1:
            color = "#2ecc71"; // Vert
            break;
        case 2:
            color = "#f39c12"; // Orange
            break;
        case 3:
            color = "#e74c3c"; // Rouge
            break;
        }

        // Ajouter le texte de la ligne avec une séparation
        tmp += "<div style=\"color:" + color + ";\">";
        tmp += myString;
        tmp += "</div>";
        tmp += "<hr>";  // Ligne de séparation

        i++;
        if (i == 4)
            i = 0;
    }

    return tmp;
}

void Historique::save2(int id, const QString& nom, const QString& type, const QString& date, int cout, const QString& status, const QString& durabilite, const QString& action)
{
    QDateTime dateTime = QDateTime::currentDateTime();
    QString formattedDate = dateTime.toString();
    QFile file("C:/Users/sbiss/OneDrive/Bureau/integration_Partie/Historique2.txt");

    if (!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
    {
        qDebug() << "erreur";
    }

    QTextStream out(&file);
    out << "ID: " << id << " Nom: " << nom << " Type: " << type << " Date: " << formattedDate << " Action: " << action
        << " Cout: " << cout << " Status: " << status << " Durabilite: " << durabilite << "\n";
}

QString Historique::load2()
{
    tmp = "";
    QFile file("C:/Users/sbiss/OneDrive/Bureau/integration_Partie/Historique2.txt");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        tmp = "";

    QTextStream in(&file);
    int i = 0;

    while (!in.atEnd())
    {
        QString myString = in.readLine();

        // Changer la couleur en fonction de la valeur de i
        QString color;
        switch (i)
        {
        case 0:
            color = "#3498db"; // Bleu
            break;
        case 1:
            color = "#2ecc71"; // Vert
            break;
        case 2:
            color = "#f39c12"; // Orange
            break;
        case 3:
            color = "#e74c3c"; // Rouge
            break;
        }

        // Ajouter le texte de la ligne avec une séparation
        tmp += "<div style=\"color:" + color + ";\">";
        tmp += myString;
        tmp += "</div>";
        tmp += "<hr>";  // Ligne de séparation

        i++;
        if (i == 4)
            i = 0;
    }

    return tmp;
}
