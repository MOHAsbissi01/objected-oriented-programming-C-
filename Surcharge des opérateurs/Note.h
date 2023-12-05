#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Note
{ 
    private:
    string identificateur;
    string description;
    string date;
    string objet;

    public:
    Note();
    Note(string identificateur, string description, string date, string objet);
    ~Note();
    string getIdentificateur();
    string getDescription();
    string getDate();
    string getObjet();
    void setIdentificateur(string identificateur);
    void setDescription(string description);
    void setDate(string date);
    void setObjet(string objet);
    void afficher();

    


};


 