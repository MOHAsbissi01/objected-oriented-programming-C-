#ifndef VIDEO_H_INCLUDED
#define VIDEO_H_INCLUDED

#include <iostream>
#include <string>
#include "ouvrage.h"

using namespace std ;

class Video : public Ouvrage {

      private :
        string editeur ;
        float duree ;

      public :
       
         Video() ;
         Video(string,string,string,string,float) ;
         ~Video() ;
        
        
         void afficher() const ;
       
};

#endif // VIDEO_H_INCLUDED