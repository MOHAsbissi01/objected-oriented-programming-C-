#include "  Projet.h"

Projet::Projet(int id, const string& titre, int duree) {
    identifiant = id;
    this->titre = titre;
    dureeMois = duree;
}

int Projet::getIdentifiant() const {
    return identifiant;
}

int Projet::getDureeMois() const {
    return dureeMois;
}

