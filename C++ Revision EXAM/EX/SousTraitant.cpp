 #include "SousTraitant.h"

SousTraitant::SousTraitant(const string& cin, const string& nomPrenom, const string& email,
                           double salaire, const string& nomSociete, int heuresTravaillees, double prixHeure)
    : Developpeur(cin, nomPrenom, email, salaire), nomSociete(nomSociete), heuresTravaillees(heuresTravaillees), prixHeure(prixHeure) {}


double SousTraitant::calculerSalaire() const {
    return prixHeure * heuresTravaillees;
}

void SousTraitant::mettreAJourPrixHeure(double nouveauPrix) {
    prixHeure = nouveauPrix;
}

void SousTraitant::afficherInformations() const {
    Developpeur::afficherInformations();
    cout << "Nom de la societe: " << nomSociete << endl;
    cout << "Heures travaillees: " << heuresTravaillees << endl;
    cout << "Prix heure: " << prixHeure << endl;
}


