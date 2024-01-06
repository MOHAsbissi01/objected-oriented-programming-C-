
#include <vector>
#include "Developpeur.h"
#include "SousTraitant.h"
#include "Projet.h"
#include "GestionProjet.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    GestionProjet gestionProjet;
    Developpeur* dev1 = gestionProjet.ajouterDeveloppeur("EE111111", "Ahmed", " ", " ", 1000);
    Developpeur* dev2 = gestionProjet.ajouterDeveloppeur("EE222222", "Ali", " ", " ", 2000);

    SousTraitant* sousTraitant1 = gestionProjet.ajouterSousTraitant("EE333333", "Societe1", " ", " ", 1000, "Societe1", 10, 100);
    SousTraitant* sousTraitant2 = gestionProjet.ajouterSousTraitant("EE444444", "Societe2", " ", " ", 2000, "Societe2", 20, 200);

    Projet projet1(1, "Projet1", 1);
    Projet projet2(2, "Projet2", 2);

    projet1.ajouterDeveloppeur(dev1);
    projet1.ajouterDeveloppeur(sousTraitant1);

    projet2.ajouterDeveloppeur(dev2);
    projet2.ajouterDeveloppeur(sousTraitant2);


    cout << "Cout projet 1: " << gestionProjet.calculerCoutProjet(1) << endl;
    cout << "Cout projet 2: " << gestionProjet.calculerCoutProjet(2) << endl;

    gestionProjet.libererDeveloppeurDeProjet(dev1, 1);
    gestionProjet.libererDeveloppeurDeProjet(sousTraitant1, 1);

    cout << "Cout projet 1: " << gestionProjet.calculerCoutProjet(1) << endl;
    cout << "Cout projet 2: " << gestionProjet.calculerCoutProjet(2) << endl;
    
    gestionProjet.mettreAJourPrixHeureSousTraitants("Societe1", 200);
    cout << "Cout projet 1: " << gestionProjet.calculerCoutProjet(1) << endl;
    cout << "Cout projet 2: " << gestionProjet.calculerCoutProjet(2) << endl;

    return 0;
}
   
















































 
     