#ifndef ECOLE_H_INCLUDED
#define ECOLE_H_INCLUDED
#include <iostream>
#include <string>
#include"etudiant.h"
using namespace std ;

class Ecole
{
    private:
        vector<Etudiant> etudiants;
    public:
        Ecole(){};
        ~Ecole(){} ;
        void ajouterEtudiant(Etudiant e);
        void afficher();
        void rechercherEtudiant(int id);
        void supprimer(int id);
        void rechercherAfficherClasse(string classe);
};

#endif // ECOLE_H_INCLUDED

