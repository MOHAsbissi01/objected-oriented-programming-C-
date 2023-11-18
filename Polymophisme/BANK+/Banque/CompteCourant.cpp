#include "CompteCourant.h"

CompteCourant:: CompteCourant()
{ soldeSeuil=-500.0 ;
}
CompteCourant::~CompteCourant()
{
}

CompteCourant::CompteCourant(int RIB, float solde,float c): Compte(RIB,solde)
{
    soldeSeuil=c ;
}

void CompteCourant::afficher() const {
     cout << "Compte Courant - ";
    Compte::afficher();
}

void CompteCourant::retirer(double montant) {
 Compte::afficher();
}
