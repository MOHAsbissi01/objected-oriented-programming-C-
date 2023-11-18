#include "CompteEpargne.h"
Epargne::Epargne()
{
    solde=5;
    taux=0;
}
Epargne::Epargne(int a,int b,float c): Compte(a,b)
{
    taux=c;
}
float Epargne::calculer()
{
    return solde+=100;
}
void Epargne::retirer(float a)
{
    if(solde>5)
        Compte::retirer(a);
}
void Epargne::afficher()
{
    Compte::afficher();
    cout<<"taux :"<<taux <<endl;
}
