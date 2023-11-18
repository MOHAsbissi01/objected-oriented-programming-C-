#include"CompteCourant.h"
Courant::Courant()
{
    seuil=-500;
}
Courant::Courant(int a,int b,float c):Compte(a,b)
{
    seuil=c;
}
void Courant::retirer(float a)
{
    if(solde-a<seuil)
        Compte::retirer(a);
}
void Courant::afficher()
{
    Compte::afficher();
    cout<<"seuil :"<<seuil <<endl;
}
