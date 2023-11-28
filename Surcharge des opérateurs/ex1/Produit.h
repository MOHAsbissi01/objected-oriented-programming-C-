#ifndef PRODUIT_H_INCLUDED
#define PRODUIT_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;

class Produit {
    private :

    int Ref ;
    string Libelle ;
    float PrixUnit ;

    public :
    Produit();
    ~Produit();
    Produit(int,string,float);	
    changeQuantity(int);
    changePrice(float) const ;

    int getRef() const;
    string getLibelle() const;
    float getPrixUnit() const;

    void setRef(int);
    void setLibelle(string);
    void setPrixUnit(float);

    void afficher() const;

    Produit operator=(const Produit&);

    friend Produit operator+(const Produit&,const Produit&);

    friend ostream& operator<<(ostream&,const Produit&);

    friend istream& operator>>(istream&,Produit&);


};



#endif // PRODUIT_H_INCLUDED