#include "Compte.h"

Compte::Compte(){
RIB=0 ;
solde = 0.0;
}

Compte::Compte(int RIB , float solde){
  this->RIB =RIB ;
  this->solde = solde ;

}

  Compte::~Compte(){
}

 void Compte::deposer(float montant) {

  solde+= montant ;
}

void Compte::retirer (float montant){
    solde-=montant ;
}

void Compte::afficher() const {
    cout<<"RIB:"<<RIB<<"solde:"<<solde<<"DT"<<endl;
}
