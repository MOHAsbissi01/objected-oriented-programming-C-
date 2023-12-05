#include "Note.h"

Note::Note()
{
    identificateur = "";
    description = "";
    date = "";
    objet = "";
}

Note::Note(string identificateur, string description, string date, string objet)
{
    this->identificateur = identificateur;
    this->description = description;
    this->date = date;
    this->objet = objet;
}

Note::~Note()
{
}

string Note::getIdentificateur()
{
    return identificateur;
}

string Note::getDescription()
{
    return description;
}

string Note::getDate()
{
    return date;
}

string Note::getObjet()
{
    return objet;
}

void Note::setIdentificateur(string identificateur)
{
    this->identificateur = identificateur;
}

void Note::setDescription(string description)
{
    this->description = description;
}

void Note::setDate(string date)
{
    this->date = date;
}

void Note::setObjet(string objet)
{
    this->objet = objet;
}

void Note::affiche()
{
    cout << "Identificateur : " << identificateur << endl;
    cout << "Description : " << description << endl;
    cout << "Date : " << date << endl;
    cout << "Objet : " << objet << endl;
}
 
