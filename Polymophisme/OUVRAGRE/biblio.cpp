#include "biblio.h"

 
Biblio::Biblio() {
    nb_ouvrages = 0;
}

Biblio::~Biblio() {
}

void Biblio::ajouterOuvrage(Ouvrage* ouvrage) {
    
    ouvrages.push_back(ouvrage);
    nb_ouvrages++;
}

void Biblio::afficher() const {
    for (int i = 0; i < nb_ouvrages; i++) {
        ouvrages[i]->afficher();
        cout << endl;
    }
}