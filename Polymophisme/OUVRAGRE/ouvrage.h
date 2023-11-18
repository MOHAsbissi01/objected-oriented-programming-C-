#ifndef OUVRAGE_H_INCLUDED
#define OUVRAGE_H_INCLUDED

#inlcude <iostream>
#include <string>
#include <vector>

using namespace std ;


class Ouvrage {

     protected :
     string titre ;  
     string date ;
     bool  indc_existance ;
    
     public :

     Ouvrage(){titre="";date="";indc_existance=false;}
     Ouvrage() ;
    ~Ouvrage() ;
     string getTitre() const  ;
     string getDate() const ;
     bool getIndc_existance() const ;
     void setIndc_existance(bool) ;  
}


#endif // OUVRAGE_H_INCLUDED