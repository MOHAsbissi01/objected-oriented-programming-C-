#include <iostream>
#include <vector>
#include <string>
#include "etudiant.h"
#include "ecole.h"
using namespace std;

vectorEcole :: chercherEtudiant(int id)
{
    vector<Etudiant> :: iterator it;
    for(it=v.begin(); it != v.end(); it++)
        if((*it).getcin()==id)
            return true;
    return false;
}

void Ecole :: ajouter (Etudiant e)
{
    if (!chercherEtudiant(E.getcin()))
        v.push_back(e);
}

void Ecole :: afficher()
{
    vector <Etudiant> :: iterator it;
    for(it=v.begin(); it !=v.end(); i++)
        (*it).afficher();
}

void Ecole :: supprimer(int id)
{
    if(chercherEtudiant(id))
        vector<Etudiant> :: iterator
        Ecole :: chercherEtudiant(int id)
        vector<Etudiant> :: iterative it;
    for(it=v.begin(); it != v.end(); it++)
        if((*it).getcin()==id)
        return it;
    return v.end();
}

void Ecole :: supprimer(int id)
{
    if(chercherEtudiant(id) != cin)
        v.erase(chercherEtudiant(it));
}
void Ecole :: chercherAfficherClasse(string c)
{
    vector<Etudiant> :: iterator it;
    for(it=v.begin(); it !=v.end())
        if (it->getclasse()==e)
        it->afficher()   ;
}

