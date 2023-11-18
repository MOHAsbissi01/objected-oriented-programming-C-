#ifndef COMPTEEPARGNE_H_INCLUDED
#define COMPTEEPARGNE_H_INCLUDED

#include <iostream>
#include <string>
#include "Compte.h"

using namespace std ;

class CompteEpargne : public Compte {

 private :
     float tauxInt ;
     float soldeMin ;

 public :

    CompteEpargne(int RIB , float solde ,float tauxInt=0.05, float soldeMin=5.0);
    ~CompteEpargne();
    void calculInt();
    void retirer(double montant) ;
    void afficher()const ;

};

#endif // COMPTEEPARGNE_H_INCLUDED
