#ifndef ETUDIANT_H_INCLUDED
#define ETUDIANT_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Etudiant
{
    private:
        string nom;
        string adresse;
        string classe;
        string dateNaissance;
        int id;
    public:
        Etudiant();
        Etudiant(string nom, string adresse, string classe, string dateNaissance, int id);
        ~Etudiant();
        void afficherEtudiant();
        int getId();
        string getClasse();
};

#endif // ETUDIANT_H_INCLUDED



