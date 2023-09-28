#include <iostream>
#include "Compte.h"
using namespace std;

    void saisir(){
        cout << "Enter your account number" ;
        cin >> numCompte ;
        cout << "Enter your account name" ;
        cin >> nomProp ;
        cout << "Enter your account Solde" ;
        cin >> solde ;

    }
    bool retirerArgent(float montant ){
        if (montant <= solde)
        {
            solde-=montant ;
            return true ;
        }
        else
            return false ;
    }
    void deposerArgent(float montant){
        solde += montant ;
    }
    void consulterSolde(){
        cout << "Account number " << numCompte << endl ;
        cout << "Account name " << nomProp << endl ;
        cout << "Account Solde " << solde << endl ;
    }
    bool transfererArgent(Compte&c, float montant){
        if (retirerArgent(montant)){
        c.solde+=montant ;
        return true ;
        }else
        return false ;

    }
