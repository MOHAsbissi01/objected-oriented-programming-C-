#ifndef NOTESMANGER_H_INCLUDED
#define NOTESMANGER_H_INCLUDED
#include "note.h"
#include "tag.h"
#include <vector>

using namespace std;

class NotesManager
{
private:

    vector<Notes*>v;
public:
    NotesManager();
    bool chercherNote(int);
    void ajouter(const Notes &);
    void ajouter(const Tag &);
    void enregistrer(string);
    void charger(string);


};


#endif // NOTESMANGER_H_INCLUDED
