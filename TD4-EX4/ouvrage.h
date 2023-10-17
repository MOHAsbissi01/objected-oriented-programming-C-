#ifndef OUVRAGE_H
#define OUVRAGE_H

#include <string>

class Ouvrage {
    private:
        int code;
        std::string titre;
        int nbExemplaires;
        double prixUnitaire;
    public:
        Ouvrage();
        Ouvrage(int c, std::string t, int n, double p);
        ~Ouvrage();
        int getCode()  ;
        std::string getTitre() const;
        int getNbExemplaires() const;
        double getPrixUnitaire() const;
        void setCode(int c);
        void setTitre(std::string t);
        void setNbExemplaires(int n);
        void setPrixUnitaire(double p);
        void afficher()  ;
        double totalOuvrage()  ;
};

#endif
