#inlcude" video.h"

Video::Video() {
    editeur = "";
    duree = 0;
}

Video::Video(string titre, string date, string editeur, string duree) {
    this->titre = titre;
    this->date = date;
    this->editeur = editeur;
    this->duree = duree;
}

Video::~Video() {
}

void Video::afficher() const {
    cout << "Titre : " << titre << endl;
    cout << "Date : " << date << endl;
    cout << "Editeur : " << editeur << endl;
    cout << "Duree : " << duree << endl;
}

