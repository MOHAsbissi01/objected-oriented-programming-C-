#ifndef COMPTEEPARGNE_H_INCLUDED
#define COMPTEEPARGNE_H_INCLUDED
#include "compte.h"
class Epargne : public Compte
{
private:
    float taux;
public:
    Epargne();
    Epargne(int,int,float);
    ~Epargne(){}
    float calculer();
    void retirer(float);
    void afficher();
};


#endif // COMPTEEPARGNE_H_INCLUDED
