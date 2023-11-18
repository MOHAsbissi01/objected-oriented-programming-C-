#include <iostream>

using namespace std;
#include "Banque.h"
#include "CompteEpargne.h"
#include "CompteCourant.h"

int main() {
   banque maBanque("MaBanque", "MaVille");

    CompteEpargne ce1(1,123, 1000.0);
    CompteCourant cc1(2,456, 200.0);


    maBanque.ajouter(ce1);
    maBanque.ajouter(cc1);

    maBanque.afficher();


    ce1.retirer(200.0);
    cc1.retirer(300.0);


    maBanque.afficher();

    return 0;
}
