#ifndef BIBLIO_H_INCLUDED
#define BIBLIO_H_INCLUDED
#include "ouvrage.h"
#include <vector>
#include <string>

// Ouvrae are inlcude biblio and video and livre are include ouvrage
//  plymorphisme 
// vector for save data
// operator overloading


class Biblio 
{
        private :
            vector<Ouvrage*> ouvrages ;
            int nb_ouvrages ;
            
        public :
            Biblio() ;
            ~Biblio() ;
            void ajouterOuvrage(Ouvrage*) ;
            void afficher() const ;
            void supprimerOuvrage(string) ;
            void supprimerOuvrage(int) ;
              rechercherOuvrage(string) const ;
             



};


#endif // BIBLIO_H_INCLUDED