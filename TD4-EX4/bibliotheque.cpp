#include "Bibliotheque.h"
#include <iostream>
#include <stdexcept>

void Bibliotheque::afficher() const {
    for (const auto& ouvrage : ouvrages) {
        ouvrage->afficher();
        cout << "Prix total du stock: " << ouvrage->totalOuvrage() << std::endl;
    }
}


double Bibliotheque::prixTotal() const {
    float total = 0.0;
    for (const auto& ouvrage : ouvrages) {
        total += ouvrage->totalOuvrage();
    }
    return total;
}

Ouvrage* Bibliotheque::rechercher(int code) const {
    for (const auto& ouvrage : ouvrages) {
        if (ouvrage->getCode() == code) {
            return ouvrage.get();
        }
    }
    throw std::invalid_argument("Code invalide");
}

void Bibliotheque::ajouter(Ouvrage* o) {
    for (const auto& ouvrage : ouvrages) {
        if (ouvrage->getCode() == o->getCode()) {
            throw std::invalid_argument("Code déjà existant");
        }
    }
    ouvrages.push_back(std::unique_ptr<Ouvrage>(o));
}

void
