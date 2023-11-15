#ifndef COMPTECOURANT_H_INCLUDED
#define COMPTECOURANT_H_INCLUDED
#include "compte.h"
class Courant : public Compte
{
private:
    float seuil;
public:
    Courant();
    Courant(int,int,float);
    ~Courant(){}
    void retirer(float);
    void afficher();
};


#endif // COMPTECOURANT_H_INCLUDED
