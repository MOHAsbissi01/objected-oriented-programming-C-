#include <iostream>
#include <string>
#include <vector>
#include "etudiant.h"
using namespace std;

Etudiant::Etudiant()
{
    this->id=0;
    this->nom="";
    this->adresse="";
    this->classe="";
    this->dateNaissance"";

}
etudiant::Etudiant(int CIN,string classe, string dateN , string nom, string adresse)
    {
        this->CIN=CIN;
        this->classe=classe;
        this->dateN=dateN;
        this->nom=nom;
        this->adresse=adresse;
    }


    void Etudiant::afficher()
    {
        cout<<"CIN : "<<CIN<<endl;
        cout<<"classe : "<<classe<<endl;
        cout<<"date de naissance : "<<dateN<<endl;
        cout<<"nom : "<<nom<<endl;
        cout<<"adresse : "<<adresse<<endl;
    }
int getId()
{
    return  ;
}
string getClasse()
{

    return  ;
}

