#include "livre.h"

Livre::Livre() {
    auteur = "";
}

Livre::Livre(string titre, string date, string auteur) {
    this->titre = titre;
    this->date = date;
    this->auteur = auteur;
}

Livre::~Livre() {
}

void Livre::afficher() const {
    cout << "Titre : " << titre << endl;
    cout << "Date : " << date << endl;
    cout << "Auteur : " << auteur << endl;
}