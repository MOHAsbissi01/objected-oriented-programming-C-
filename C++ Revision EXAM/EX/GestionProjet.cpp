#include " GestionProjet.h"

GestionProjet::~GestionProjet() {
    for (Developpeur* dev : listeDeveloppeurs) {
        delete dev;
    }
} 

Developpeur* GestionProjet::ajouterDeveloppeur(const string& cin, const string& nomPrenom, const string& email, double salaire) {
    Developpeur* dev = new Developpeur(cin, nomPrenom, email, salaire);
    listeDeveloppeurs.push_back(dev);
    return dev;
}

SousTraitant* GestionProjet::ajouterSousTraitant(const string& cin, const string& nomPrenom, const string& email,
 double salaire, const string& nomSociete, int heuresTravaillees, double prixHeure) {
    SousTraitant* st = new SousTraitant(cin, nomPrenom, email, salaire, nomSociete, heuresTravaillees, prixHeure);
    listeDeveloppeurs.push_back(st);
    return st;
}

void GestionProjet::libererDeveloppeurDeProjet(Developpeur* dev, int idProjet) {
    for (int i = 0; i < listeProjets.size(); i++) {
        if (listeProjets[i].getId() == idProjet) {
            listeProjets[i].libererDeveloppeur(dev);
            return;
        }
    }
}


double GestionProjet::calculerCoutProjet(int idProjet) const {
    for (int i = 0; i < listeProjets.size(); i++) {
        if (listeProjets[i].getId() == idProjet) {
            return listeProjets[i].calculerCout();
        }
    }
    return -1;
}

void GestionProjet::mettreAJourPrixHeureSousTraitants(const string& nomSociete, double nouveauPrix) {
    for (Developpeur* dev : listeDeveloppeurs) {
        SousTraitant* st = dynamic_cast<SousTraitant*>(dev);
        if (st != nullptr && st->getNomSociete() == nomSociete) {
            st->mettreAJourPrixHeure(nouveauPrix);
        }
    }
}


