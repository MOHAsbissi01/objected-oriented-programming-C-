#ifndef COMPTE_H_INCLUDED
#define COMPTE_H_INCLUDED



using namespace std;


class Compte
{
protected:
    float rib;
    float solde;
public:
    Compte();
    Compte(float,float);
    ~Compte(){;}
    void deposer(float);
    void retirer(float);
    void afficher();


};






#endif // COMPTE_H_INCLUDED
