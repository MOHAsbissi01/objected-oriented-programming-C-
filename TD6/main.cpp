#include <iostream>
#include "compte.h"
#include "cmpepargne.h"
#include "courant.h"
#include <string>

using namespace std;

int main()
{

    Compte C;
    Epargne e(123,1000,20);
    Courant o(145,2000,-500);
    e.calculer();
    e.afficher();
    o.afficher();
    e.deposer(500);
    o.deposer(100);
    e.afficher();
    o.afficher();
    e.retirer(20);
    o.retirer(20);
    e.afficher();
    o.afficher();

    return 0;
}
