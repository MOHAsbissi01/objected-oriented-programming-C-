#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Tag
{ 
    private:
    string nomPerson; 

    public:
    Tag();
    Tag(string nomPerson);
    ~Tag();
    string getNomPerson();
    void setNomPerson(string nomPerson);
    void affiche();

};





 