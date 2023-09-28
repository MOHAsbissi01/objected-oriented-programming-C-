#ifndef COMPTE_H_INCLUDED
#define COMPTE_H_INCLUDED

using namespace std ;

class Compte {
private :
    int numCompte ;
    string nomProp ;
    float solde ;

public :
    void saisir();
    bool retirerArgent(float montant );
    void deposerArgent(float montant);
    void consulterSolde();
    bool transfererArgent(Compte&c, float montant);

    float getSolde(){return numCompte;} ;
    void setSolde(double s){solde=s;};
};

#endif // COMPTE_H_INCLUDED
