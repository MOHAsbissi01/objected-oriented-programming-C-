#include <iostream>
#include "Voyage.h"
#include "Hebergement.h"
using namespace std;

Voyage::Voyage(int id, string villeOrigine, string villeDestination, string dateDepart, string dateRetour, float prix, string nomVoyage) {
    this->id = id;
    this->villeOrigine = villeOrigine;
    this->villeDestination = villeDestination;
    this->dateDepart = dateDepart;
    this->dateRetour = dateRetour;
    this->prix = prix;
    this->nomVoyage = nomVoyage;
}

void Voyage::afficher() {
    cout << "ID : " << id << endl;
    cout << "Ville d'origine : " << villeOrigine << endl;
    cout << "Ville de destination : " << villeDestination << endl;
    cout << "Date de départ : " << dateDepart << endl;
    cout << "Date de retour : " << dateRetour << endl;
    cout << "Prix : " << prix << endl;
    cout << "Nom du voyage : " << nomVoyage << endl;

    if (hebergementAssocie != NULL) {
        cout<<endl;
        hebergementAssocie->afficher();
        cout<<endl;
    }
}

void Voyage::setHebergementAssocie(Hebergement* hebergementAssocie) {
    this->hebergementAssocie = hebergementAssocie;
}
