#ifndef ETUDIANT_H_INCLUDED
#define ETUDIANT_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
#include "Etudiant.h"
using namespace std;


class Classe
{
    private:
        string nom;
        vector<Etudiant> etudiants;
    public:
        Classe(string nom);
        void ajouterEtudiant(Etudiant e);
        void afficherEtudiants();
        void rechercherEtudiant(int id);
        void supprimerEtudiant(int id);
        void rechercherEtudiantsClasse(string classe);
};


#endif // ETUDIANT_H_INCLUDED



