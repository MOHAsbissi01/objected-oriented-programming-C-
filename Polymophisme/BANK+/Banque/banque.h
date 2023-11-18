#ifndef BANQUE_H_INCLUDED
#define BANQUE_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include "Compte.h"
#include "CompteEpargne.h"
#include "CompteCourant.h"
using namespace std ;

class banque {
 private :
     string nom ;
     string lieu ;
     vector <Compte*> c ;
 public :
     banque();
     ~banque(){};
     banque(string,string);

     void afficher()   ;
     void ajouter(const CompteEpargne&);
     void ajouter(const CompteCourant&);
     vector <Compte*>:: iterator chercher(int RIB) ;
     void supprimer(int RIB);


};

#endif // BANQUE_H_INCLUDED
