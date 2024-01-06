 
#include "Developpeur.h"

class SousTraitant : public Developpeur {
private:
    string nomSociete;
    int heuresTravaillees;
    double prixHeure;

public:
    SousTraitant(const string& cin, const string& nomPrenom, const string& email,
                 double salaire, const string& nomSociete, int heuresTravaillees, double prixHeure);

    double calculerSalaire() const override;

    void mettreAJourPrixHeure(double nouveauPrix);
    void afficherInformations() const;
};
