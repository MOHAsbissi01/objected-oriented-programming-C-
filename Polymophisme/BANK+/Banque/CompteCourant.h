#ifndef COMPTECOURANT_H_INCLUDED
#define COMPTECOURANT_H_INCLUDED

#include <iostream>
#include <string>
#include "Compte.h"

using namespace std ;

class CompteCourant : public Compte
{
    private:
    float soldeSeuil ;

    public :
   CompteCourant();
    ~CompteCourant();
    CompteCourant(int , float ,float) ;
    void retirer(double montant)  ;
    void afficher() const ;

};

#endif // COMPTECOURANT_H_INCLUDED
