#ifndef COMPTE_H_INCLUDED
#define COMPTE_H_INCLUDED
#include <iostream>

using namespace std;
class Compte
{
protected:
    int RIB;
    int solde;
public:
    Compte(){RIB=0;solde=0;}
    Compte(int a,int b){RIB=a;solde=b;}
    ~Compte(){}
    void deposer(float);
    void retirer(float);
    virtual void afficher();
    int getRIB()const{return RIB;}
};


#endif // COMPTE_H_INCLUDED
