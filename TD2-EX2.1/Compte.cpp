#include <iostream>
#include "Compte.h"
using namespace std;

    void Compte:: saisir(){
        cout << "Enter your account number: " << endl;
        cin >> numCompte ;
        cout << "Enter your account name :"<< endl ;
        cin >> nomProp ;
        cout << "Enter your account Solde : " << endl;
        cin >> solde ;

    }
    bool Compte:: retirerArgent(float montant ){
        if (montant <= solde)
        {
            solde-=montant ;
            return true ;
        }
        else
            return false ;
    }
    void Compte:: deposerArgent(float montant){
        solde += montant ;
    }
    void Compte:: consulterSolde(){
        cout << "Account number " << numCompte << endl ;
        cout << "Account name "  << nomProp << endl ;
        cout << "Account Solde " << solde << endl ;
    }
    bool Compte:: transfererArgent(Compte&c, float montant){
        if (retirerArgent(montant)){
        c.solde+=montant ;
        return true ;
        }else
        return false ;

    }
