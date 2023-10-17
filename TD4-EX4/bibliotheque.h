#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#include <list>
#include <memory>
#include "Ouvrage.h"

class Bibliotheque {
    private:
         list<Ouvrage> ouvrages;
    public:
        void afficher()  ;
       float prixTotal()  ;
        Ouvrage* rechercher(int code)  ;
        void ajouter(Ouvrage* o);
        void diminuerNbExp(int code, int n);
        void augmenterNbExp(int code, int n);
};

#endif
