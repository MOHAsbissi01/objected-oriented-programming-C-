 
#include <string>

class Projet {
private:
    int identifiant;
    string titre;
    int dureeMois;

public:
    Projet(int id, const string& titre, int duree);
    int getIdentifiant() const;
    int getDureeMois() const;
};
