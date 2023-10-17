#include "Ouvrage.h"
#include <iostream>

Ouvrage::Ouvrage() : code(0), titre(""), nbExemplaires(0), prixUnitaire(0.0) {}

Ouvrage::Ouvrage(int c, std::string t, int n, double p) : code(c), titre(t), nbExemplaires(n), prixUnitaire(p) {}

Ouvrage::~Ouvrage() {}

int Ouvrage::getCode() const { return code; }

std::string Ouvrage::getTitre() const { return titre; }

int Ouvrage::getNbExemplaires() const { return nbExemplaires; }

double Ouvrage::getPrixUnitaire() const { return prixUnitaire; }

void Ouvrage::setCode(int c) { code = c; }

void Ouvrage::setTitre(std::string t) { titre = t; }

void Ouvrage::setNbExemplaires(int n) { nbExemplaires = n; }

void Ouvrage::setPrixUnitaire(double p) { prixUnitaire = p; }

void Ouvrage::afficher() const {
    std::cout << "Code: " << code << std::endl;
    std::cout << "Titre: " << titre << std::endl;
    std::cout << "Nombre d'exemplaires: " << nbExemplaires << std::endl;
    std::cout << "Prix unitaire: " << prixUnitaire << std::endl;
}

double Ouvrage::totalOuvrage() const {
    return nbExemplaires * prixUnitaire;
}
