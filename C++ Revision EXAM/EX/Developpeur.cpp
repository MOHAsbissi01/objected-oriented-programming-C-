#include " Developpeur.h"

Developpeur::Developpeur(const string& cin, const string& nomPrenom, const string& email, double salaire)
    : CIN(cin), nomPrenom(nomPrenom), email(email), salaireMensuel(salaire) {}

Developpeur::~Developpeur() {}


void Developpeur::afficherInformations() const {
    cout << "CIN: " << CIN << endl;
    cout << "Nom et prenom: " << nomPrenom << endl;
    cout << "Email: " << email << endl;
    cout << "Salaire mensuel: " << salaireMensuel << endl;
    cout << "Projets en cours: ";
    for (int i = 0; i < projetsEnCours.size(); i++) {
        cout << projetsEnCours[i] << " ";
    }
    cout << endl;
}


void Developpeur::ajouterProjetEnCours(int idProjet) {
    projetsEnCours.push_back(idProjet);
}


void Developpeur::libererProjet(int idProjet) {
    for (int i = 0; i < projetsEnCours.size(); i++) {
        if (projetsEnCours[i] == idProjet) {
            projetsEnCours.erase(projetsEnCours.begin() + i);
            return;
        }
    }
}
















































