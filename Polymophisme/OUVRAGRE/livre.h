#ifndef LIVRE_H_INCLUDED
#define LIVRE_H_INCLUDED

#inlcude <iostream>
#include <string>
#include <vector>

using namespace std ;

class Livre : public Ouvrage {

      private :
        string auteur ;

      public :
       
       Livre() ;
       Livre(string,string,string) ;
       ~Livre() ;
      
       void afficher() const ;
      
       




   
};


#endif // LIVRE_H_INCLUDED