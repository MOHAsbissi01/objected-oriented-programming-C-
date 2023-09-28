#ifndef BANQUE_H_INCLUDED
#define BANQUE_H_INCLUDED

#include "Compte.h"
using namespace std ;

 class Banque
 {private:
     string monBank ;
     Compte *Tab [58];
     int nbComptes;

  public:
    Banque(string& nom);

     bool  chercherCompte(int RIB, int*n) ;
     void  ajouter(Compte , int *n);
     void  afficherBank();
 };


#endif // BANQUE_H_INCLUDED
