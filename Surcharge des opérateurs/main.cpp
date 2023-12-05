#include "Note.h"
#include "NotesManager.h"
#include "Tag.h"

// this is a main file so call function and handle logic
 int main()
 { 
    
    NotesManager * notesManager = NotesManager::getInstance();
    Note * note = new Note();
    Tag * tag = new Tag();
    notesManager->ajouter(*note);
    notesManager->ajouter(*tag);
    notesManager->afficher();
    notesManager->chercherNote();
    notesManager->enregistrer("test.txt");
    notesManager->load("test.txt");
    notesManager->afficher();
    notesManager->chercherNote();
    return 0;
 
 }
  
     
 