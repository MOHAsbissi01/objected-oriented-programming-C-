#include <iostream>
#include <string>
#include"etudiant.h"
#include "ecole.h"
using namespace std ;
int main()
{
   Ecole e ;
   Etudiant e1(1,"MED","","","") ;
   Etudiant e2 (1,"SB","","","") ;;

   e.ajouter(e1);
   e.ajouter(e2);
   e.afficher();
   e.supprimer(2);
   e.rechercherAfficherClasse("2A23");

}

