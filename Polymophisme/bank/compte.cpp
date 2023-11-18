#include "compte.h"
void Compte::deposer(float a)
{
    solde=a;
}
void Compte::retirer(float a)
{
    solde-=a;
}
void Compte::afficher()
{
    cout<<"RIB : "<<RIB<<"\t"<<"solde : "<<solde << endl;
}
