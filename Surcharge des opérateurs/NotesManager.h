

#include <iostream>
#include <string>
#include <fstream>
#include "Note.h"
#include "Tag.h"

using namespace std;
 
 //heritage

class NotesManager : public Note, public Tag
{ 
 private : 
    Note ** notes;
    Tag ** tags;
    int nbNotes;
    int nbTags;
    int nbMaxNotes;
    int nbMaxTags;
    static NotesManager * instance;
    NotesManager();
    ~NotesManager();
    NotesManager(const NotesManager&);
    NotesManager& operator=(const NotesManager&);

 public :
    void chercherNote(int);
    void ajouter(const Note &);
    void ajouter(const Tag &);
    void enregistrer(string);
    void load(string);
    void afficher();
};



 