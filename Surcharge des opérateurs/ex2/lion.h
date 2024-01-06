#ifndef LION_H_INCLUDED
#define LION_H_INCLUDED

#include <string>
#include <iostream>
 
using namespace std;
 
class Lion 
{
 
    private:
        string matricule;
        string espece;
        string dateVaccin;
        int idMedecin;
        int quantiteViande;
     public:
        Lion();
        Lion(string,string,float ,string);
       
        string getEspece();
        string getDateNaissance();
        string ge dateVaccin();
        int getIdMedecin();
        int getQuantiteViande();
        void setdateVaccin(string dateVaccin);
        void setIdMedecin(int idMedecin);
        void setQuantiteViande(int quantiteViande);

        friend ostream& operator<<(ostream&, const Lion& );
        Lion operator+=(const Lion& );
         

#endif 