#ifndef HEBERGEMENT_H_INCLUDED
#define HEBERGEMENT_H_INCLUDED
#include <string>
using namespace std ;

class Hebergement
{
    private:
          string adresse;
          string nom;
        int nbEtoiles;
    public:
        Hebergement(string adresse, string nom, int nbEtoiles);
        void afficher();
        void setNbEtoiles(int nbEtoiles);
};

#endif // HEBERGEMENT_H_INCLUDED
