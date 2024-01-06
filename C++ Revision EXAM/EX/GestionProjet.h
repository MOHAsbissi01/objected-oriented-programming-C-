
#include <vector>
#include "Developpeur.h"
#include "SousTraitant.h"
#include "Projet.h"

class GestionProjet {
private:
   vector<Developpeur*> listeDeveloppeurs;
   vector<Projet> listeProjets;

public:
    ~GestionProjet();

    Developpeur* ajouterDeveloppeur(conststring& cin, conststring& nomPrenom, conststring& email, double salaire);
    SousTraitant* ajouterSousTraitant(conststring& cin, conststring& nomPrenom, conststring& email,
                                      double salaire, conststring& nomSociete, int heuresTravaillees, double prixHeure);

    void libererDeveloppeurDeProjet(Developpeur* dev, int idProjet);
    double calculerCoutProjet(int idProjet) const;
    void mettreAJourPrixHeureSousTraitants(conststring& nomSociete, double nouveauPrix);
};
