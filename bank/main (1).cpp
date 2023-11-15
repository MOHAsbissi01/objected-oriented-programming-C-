#include "CompteCourant.h"
#include "CompteEpargne.h"
#include "banque.h"
int main()
{
    Compte c;
    Epargne e(1,100,55.6);
    Courant cou(2,200,-200);
    c.deposer(15);
    c.retirer(30);
    c.afficher();
    cout<< "l’interet annuel : "<<e.calculer()<<endl;
    e.retirer(33);
    e.afficher();
    cou.retirer(222);
    cou.afficher();
    cout <<"AFTERRRRRRRR" << endl;
    Banque B("amen","nkhilet");
    Epargne e1(3,100,55.6);
    Courant cou1(4,200,-200);
    B.ajouter(e1);
    B.ajouter(cou1);
    B.afficher();
    B.supprmer(3);
    return 0;
}
