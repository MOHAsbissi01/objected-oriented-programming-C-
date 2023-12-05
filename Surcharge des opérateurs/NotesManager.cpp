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
















/*.
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

*/




void NotesManager::ajouter(const Note & note)
{
    if (nbNotes == nbMaxNotes)
    {
        Note ** newNotes = new Note*[nbMaxNotes + 5];
        for (int i = 0; i < nbNotes; i++)
      










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



void NotesManager::enregistrer(string filename)
{
    ofstream f(filename.c_str());
    if (!f.is_open())
    {
        cout << "Erreur d'ouverture du fichier" << endl;
        return;
    }
    f << nbNotes << endl;
    for (int i = 0; i < nbNotes; i++)
    {
        f << notes[i]->getIdentificateur() << endl;
        f << notes[i]->getDescription() << endl;
        f << notes[i]->getDate() << endl;
        f << notes[i]->getObjet() << endl;
    }
    f << nbTags << endl;
    for (int i = 0; i < nbTags; i++)
    {
        f << tags[i]->getNomPerson() << endl;
    }
    f.close();
}


void NotesManager::load(string filename)
{
    ifstream f(filename.c_str());
    if (!f.is_open())
    {
        cout << "Erreur d'ouverture du fichier" << endl;
        return;
    }
    string identificateur;
    string description;
    string date;
    string objet;
    string nomPerson;
    int nbNotes;
    int nbTags;
    f >> nbNotes;
    for (int i = 0; i < nbNotes; i++)
    {
        f >> identificateur;
        f >> description;
        f >> date;
        f >> objet;
        Note note = Note(identificateur, description, date, objet);
        ajouter(note);
    }
    f >> nbTags;
    for (int i = 0; i < nbTags; i++)
    {
        f >> nomPerson;
        Tag tag = Tag(nomPerson);
        ajouter(tag);
    }
    f.close();
}


void NotesManager::afficher()
{
    for (int i = 0; i < nbNotes; i++)
    {
        notes[i]->affiche();
    }
    for (int i = 0; i < nbTags; i++)
    {
        tags[i]->affiche();
    }
}


 






