  #include "CompteEpargne.h"

    CompteEpargne::~CompteEpargne(){
    }
     CompteEpargne::CompteEpargne(int, float,float,float)
     {
      this->tauxInt=tauxInt ;
      this->soldeMin=soldeMin;
     }

 void CompteEpargne::retirer(double montant) {
    if (solde - montant >= soldeMin) {
        solde -= montant;
    } else {
        std::cout << "Retrait impossible. Solde minimum non respecté." << std::endl;
    }
}

    void CompteEpargne::calculInt()
    {
         solde+=solde*tauxInt ;
    }
    void CompteEpargne::afficher()const
    {
        cout<<"Compte Epargne -" ;
        Compte::afficher();
    }
