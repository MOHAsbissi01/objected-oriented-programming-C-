#include <iostream>
#include <string>
#include <vector>
#include "ecole.h"
using namespace std;

void Ecole::ajouterEtudiant(Etudiant e)
{
    etudiants.push_back(e);
}

void Ecole::afficher()
{
    for(int i=0; i<etudiants.size(); i++)
    {
        etudiants[i].afficherEtudiant();
    }
}

bool Ecole::rechercherEtudiant(int id)
{
    for (int i=0 ; i<etudiant.size():i++)
    {
        if(etudiant[i].getId()==id)
            return true ;
    }
    else
        return false ;
}

void Ecole::supprimerEtudiant(int id)
{
  for(int i=0 ; i<etuddiant.size();i++)
  {
      if(etudiant[i].getId()==id)
        etudiant.erase(etudiant.begin+i)
  }
}


void Ecole::rechercherAfficherClasse(string classe)
{




}
