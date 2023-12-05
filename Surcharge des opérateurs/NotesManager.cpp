#include "NotesManager.h"

 
NotesManager::NotesManager()
{
    notes = new Note*[nbMaxNotes];
    tags = new Tag*[nbMaxTags];
    nbNotes = 0;
    nbTags = 0;
    nbMaxNotes = 5;
    nbMaxTags = 5;
}

NotesManager::~NotesManager()
{
    delete[] notes;
    delete[] tags;
}

NotesManager::NotesManager(const NotesManager&)
{
}

NotesManager& NotesManager::operator=(const NotesManager&)
{
}

void NotesManager::chercherNote()
{
    string identificateur;
    cout << "Entrer l'identificateur de la note que vous voulez chercher : ";
    cin >> identificateur;
    for (int i = 0; i < nbNotes; i++)
    {
        if (notes[i]->getIdentificateur() == identificateur)
        {
            notes[i]->affiche();
            return;
        }
    }
    cout << "La note n'existe pas" << endl;
}



void NotesManager::ajouter(const Note & note)
{
    if (nbNotes == nbMaxNotes)
    {
        Note ** newNotes = new Note*[nbMaxNotes + 5];
        for (int i = 0; i < nbNotes; i++)
        {
            newNotes[i] = notes[i];
        }
        delete[] notes;
        notes = newNotes;
        nbMaxNotes += 5;
    }
    notes[nbNotes] = new Note(note);
    nbNotes++;
}

 
void NotesManager::ajouter(const Tag & tag)
{
    if (nbTags == nbMaxTags)
    {
        Tag ** newTags = new Tag*[nbMaxTags + 5];
        for (int i = 0; i < nbTags; i++)
        {
            newTags[i] = tags[i];
        }
        delete[] tags;
        tags = newTags;
        nbMaxTags += 5;
    }
    tags[nbTags] = new Tag(tag);
    nbTags++;
}

void NotesManager::enregistrer(string a) {
    ofstream f(a + "FILE.txt", ios::app);  // Open the file in append mode
    if (f) {
        vector<Note*>::reverse_iterator rit;  // Use reverse iterator to iterate from the last point
        for (rit = Vnote.rbegin(); rit != Vnote.rend(); ++rit) {
            if (a == (*rit)->getobj()) {
                f << "description" << (*rit)->getdesc() << endl;
                f << "date" << (*rit)->getdate() << endl;
            }
        }
        f.close();
    } else {
        cout << "File not open" << endl;
    }
}

 




 