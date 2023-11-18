#include "banque.h"

banque::banque()
{
   nom = "" ;
   lieu="" ;

}
banque::banque(string nom,string lieu){
 this->nom=nom ;
 this->lieu=lieu;
}

void banque:: afficher() {
    vector<Compte*>::iterator it ;
    for (it = c.begin(); it != c.end(); it++){
        (*it)->afficher();
    }
}

void banque:: ajouter(const CompteEpargne& e ){
  vector<Compte*>::iterator it ;
   it=chercher(e.getRIB());
   if(c.end()==it){
   Compte*p=new CompteEpargne(e);
   c.push_back(p);
   }

}

void banque::ajouter(const CompteCourant& cou ){
     vector<Compte*>::iterator it ;
   it= chercher(cou.getRIB());
   if(c.end()==it){
   Compte*p=new CompteCourant(cou);
   c.push_back(p);
   }

}

vector<Compte *> :: iterator chercher(int RIB){
      vector<Compte*>::iterator it ;
        vector <Compte*> c ;
    for(it=c.begin();it!=c.end();it++){
        if ((*it)->getRIB()==RIB)
        return it ;
    }
return c.end();
}
void banque::supprimer(int RIB){
    vector<Compte*>::iterator it ;
     it=chercher(RIB) ;
    if (c.end()!=it)
        c.erase(it) ;
}
