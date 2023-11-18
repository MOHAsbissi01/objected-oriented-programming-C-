#ifndef COMPTE_H_INCLUDED
#define COMPTE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std ;

class Compte {

  protected:
      int RIB ;
      float solde ;

  public:
      Compte();
      Compte(int RIB , float solde);
      virtual ~Compte();

      virtual void deposer(float montant) ;
      virtual void retirer (float montant);
      virtual void afficher() const ;


      int getRIB()const{return RIB;}

};


#endif // COMPTE_H_INCLUDED
