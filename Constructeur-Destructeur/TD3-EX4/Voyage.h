#ifndef VOYAGE_H_INCLUDED
#define VOYAGE_H_INCLUDED

#include <string>
#include "Hebergement.h"
using namespace std ;


class Voyage {
    private:
        int id;
        string villeOrigine;
        string villeDestination;
        string dateDepart;
        string dateRetour;
        float prix;
        string nomVoyage;
        Hebergement* hebergementAssocie;
    public:
        Voyage(int id, string villeOrigine, string villeDestination, string dateDepart, string dateRetour, float prix, string nomVoyage);
        void afficher();
        void setHebergementAssocie(Hebergement* hebergementAssocie);
};


#endif // VOYAGE_H_INCLUDED
