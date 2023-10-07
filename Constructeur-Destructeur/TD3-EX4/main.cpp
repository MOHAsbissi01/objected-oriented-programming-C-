
#include <iostream>
#include <string>
#include "Hebergement.h"
#include "Voyage.h"

using namespace std;

int main() {

    Hebergement hebergement1("Boulevard de la Promenade, 8050 Hammamet, Tunisie", "Yasmine Beach", 5);
    Hebergement hebergement2("BP437 / Hammamet 8050 / Tunisie", "la Badira Hammamet", 2);

    Voyage voyage(1, "Tunis", "Hammamet", "01/01/2024", "05/01/2024", 500.0, "Vacances en Tunisie");

    voyage.setHebergementAssocie(&hebergement1);
    voyage.setHebergementAssocie(&hebergement2);
    hebergement2.setNbEtoiles(1);


    voyage.afficher();

    return 0;
}
