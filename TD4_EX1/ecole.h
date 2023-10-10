#ifndef ECOLE_H_INCLUDED
#define ECOLE_H_INCLUDED
#include <iostream>
#include <string>
using namespace std ;

class Classe
{
    private:
        string nom;
        vector<Etudiant> etudiants;
    public:
        Classe(string nom);
        void ajouterEtudiant(Etudiant e);
        void afficherEtudiants();
        bool rechercherEtudiant(int id);
        void supprimerEtudiant(int id);
        void rechercherEtudiantsClasse(string classe);
};

#endif // ECOLE_H_INCLUDED

