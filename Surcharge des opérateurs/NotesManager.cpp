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

void NotesManager::enregistrer(string a){
    ofstream f(a+"FILE.txt");
    if(f){
        vector<Note*>::iterator it;
        for(it = Vnote.begin();it !=Vnote.end();it++){
            if(a == (*it)->getobj()){
                f<<"description"<<(*it)->getdesc();
                f<<"date"<<(*it)->getdate();
            }
        }
        f.close();
    }else{
        cout<<"file not open"<<endl;
    }
 }




void NotesManager::load(string filename) // 
{  
     ifstream f(filename.c_str());
    if (!f.is_open()) {
        cout << "Failed to open the file." << endl;
        return;
    }
    ifstream f(filename.c_str());
    if(f){
        string line;
        while(getline(f,line)){
            if(line=="description"){
                getline(f,line);
                string description = line;
                getline(f,line);
                string date = line;
                getline(f,line);
                string objet = line;
                Note *n = new Note();
                n->setdesc(description);
                n->setdate(date);
                n->setobj(objet);
                Vnote.push_back(n);
            }
        }
        f.close();
    }else{
        cout<<"file not open"<<endl;
    }
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


 






/*On application destine de
( mue est un i.knti fiant, ohjet, une description et la dale de prise
note.
U tag une note cpi en plus contieat k' nom de la personne taguée (cooceroée piu
cete note) _
La classe NotesMauager •en*tuble des 'Kites et des tags,
aux besoins :
ajouter (
Aioulcr un tag. Unc scru si I
enisle déJå Véntieat.on d•un.cilö.
4. fxhicr
donné ea parametre, Le comme I 'objet la note.
S. Affichet lcs descriptions caregis.trécs lots d'urx teuniån
préeédenre donnée 'Oet.*/

