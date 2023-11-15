#ifndef BANQUE_H_INCLUDED
#define BANQUE_H_INCLUDED
#include <iostream>
#include"CompteCourant.h"
#include"CompteEpargne.h"
#include<vector>

using namespace std;
class Banque
{
private:
    string nom,lieu;
    vector<Compte*> c;
public:
    Banque();
    Banque(string,string);
    ~Banque(){}
    void ajouter(const Epargne&);
    void ajouter(const Courant&);
    vector<Compte*>::iterator chercher(int);
    void afficher();
    void supprmer(int);


};





#endif // BANQUE_H_INCLUDED
