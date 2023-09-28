#include <iostream>
#include "banque.h"
#include "Compte.h"
using namespace std;

int main()
{
   Compte A ;
   A.saisir();
   A.setSolde(1000.0);

   Compte B ;
   B.saisir();
   B.setSolde(1000.0);
   // Transfer argent from Compte A to Compte B


}
