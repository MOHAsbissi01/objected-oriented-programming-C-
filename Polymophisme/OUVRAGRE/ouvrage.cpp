#include "ouvrage.h"

Ouvrage::Ouvrage() {
    titre = "";
    date = "";
    indc_existance = false;
}

Ouvrage::~Ouvrage() {
}

string Ouvrage::getTitre() const {
    return titre;
}

string Ouvrage::getDate() const {
    return date;
}

bool Ouvrage::getIndc_existance() const {
    return indc_existance;
}

void Ouvrage::setIndc_existance(bool indc_existance) {
    this->indc_existance = indc_existance;
}


















