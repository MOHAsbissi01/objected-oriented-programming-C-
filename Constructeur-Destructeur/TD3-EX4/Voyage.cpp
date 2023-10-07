#include <iostream>
#include "Hebergement.h"
using namespace std ;

Hebergement::Hebergement(string adresse, string nom, int nbEtoiles) {
    this->adresse = adresse;
    this->nom = nom;
    this->nbEtoiles = nbEtoiles;
}

void Hebergement::afficher() {
    cout << "Adresse : " << adresse << endl;
    cout << "Nom : " << nom << endl;
    cout << "Nombre d'étoiles : " << nbEtoiles << endl;
}

void Hebergement::setNbEtoiles(int nbEtoiles) {
    this->nbEtoiles = nbEtoiles;
}
