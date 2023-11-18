#include"banque.h"
Banque::Banque()
{
    nom="";
    lieu="";
}
Banque::Banque(string a,string b)
{
    nom=a;
    lieu=b;
}
vector<Compte*>::iterator Banque::chercher(int a)
{
    vector<Compte*>::iterator it;
    for(it=c.begin();it!=c.end();it++)
    {
        if((**it).getRIB()==a)
            return it;
    }
    return c.end();
}
void Banque::ajouter(const Epargne& e)
{
    vector<Compte*>::iterator it;
    it=chercher(e.getRIB());
    if(it==c.end())
    {
        Compte *p=new Epargne(e);
        c.push_back(p);
    }
}

void Banque::ajouter(const Courant& cou)
{
    vector<Compte*>::iterator it;
    it=chercher(cou.getRIB());
    if(it==c.end())
    {
        Compte *p=new Courant(cou);
        c.push_back(p);
    }
}
void Banque::afficher()
{
    vector<Compte*>::iterator it;
    for(it=c.begin();it!=c.end();it++)
    {
        (*it)->afficher();
    }
}
void Banque::supprmer(int RIB)
{
    vector<Compte*>::iterator it;
    it=chercher(RIB);
    if(it!=c.end())
        c.erase(it);
}
