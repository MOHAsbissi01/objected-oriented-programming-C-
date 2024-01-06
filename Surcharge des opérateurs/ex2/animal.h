#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#include <string>
#include <iostream>
 
using namespace std;
 
class Animal
{   
    private:
        string matricule;
        string espece;
        string dateNaissance;
        double poids;
        string nom;
        string sexe;
        string dateVaccination;
        int idMedecin;
    public:
        Animal();
        Animal(string matricule, string espece, string dateNaissance, double poids, string nom, string sexe);
        string getMatricule();
        string getEspece();
        string getDateNaissance();
        double getPoids();
        string getNom();
        string getSexe();
        string getDateVaccination();
        int getIdMedecin();
        void setDateVaccination(string dateVaccination);
        void setIdMedecin(int idMedecin);
        friend ostream& operator<<(ostream&, const Animal& );
        Animal operator+=(const Animal& );
        bool operator==(const Animal& );



 };

#endif /