#include <iostream>
#include "banque.h"
#include "Compte.h"
using namespace std;

int main()

{   Banque bank ;
    Compte A;
    Compte B;
    //saisie
    cout << "=============COMPTE A============ " << endl;
    A.saisir();
    cout << "=============COMPTE B============" << endl;
    B.saisir();

    // Transfer argent from account A to account B
    A.transfererArgent(B, 500);

    // Add Compte A and Compte B to the bank
    bank.ajouter(&A);
    bank.ajouter(&B);

    //affichr les comptes du BANK ;
    bank.afficherBank();

    // Prompt the user to press 'A' to see the FINAL REPORT
    char choice;
    cout << "Press A to see FINAL REPORT , or any other key to quit: ";
    cin >> choice;

    //space Block
     cout <<  endl;
     cout <<  endl;
     cout <<  endl;
     cout <<  endl;

    if (choice == 'A' || choice == 'a') {
        // FINAL REPORT section
        cout << "============================== " << endl;
        cout << " AFFICHAGE DES DONNES COMPTE" << endl;
        cout << "============================== " << endl;
        cout << " COMPTE A : " << endl;
        A.consulterSolde();
        cout << "============================== " << endl;
        cout << " COMPTE B :" << endl;
        B.consulterSolde();
        cout << "============================== " << endl;
    } else {
        cout << "Exiting the program. No FINAL REPORT displayed." << endl;
    }

    return 0;
}
