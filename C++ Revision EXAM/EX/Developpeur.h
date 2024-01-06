#include <iostream>
#include <string>
#include <vector>  

using namespace std; 
 
class Developpeur {
protected:
   string CIN;
   string nomPrenom;
   string email;
   vector <int> projetsEnCours;
    double salaireMensuel;

public:
    Developpeur(conststring& cin, conststring& nomPrenom, conststring& email, double salaire);
    virtual ~Developpeur();

    virtual double calculerSalaire() const = 0;

    void afficherInformations() const;
    void ajouterProjetEnCours(int idProjet);
    void libererProjet(int idProjet);
};
