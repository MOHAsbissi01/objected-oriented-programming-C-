#ifndef ZOO_H_INCLUDED
#define ZOO_H_INCLUDED
#include <string>
#include <iostream>
#include <vector>

using namespace std;
 
class Zoo
{
    private:
        string adresse;
        vector<Medecin> medecins;
        vector<Animal> animaux;
    public:
        Zoo();
        Zoo(string adresse);
        void ajouterAnimal(Animal animal);
        void ajouterLion(Lion lion);
        void ajouterDateVaccination(string matricule, string date);
        void ajouterMedecin(Medecin medecin);
        void affecterAnimal(string matricule, int idMedecin);
        int nombreAnimauxPrisEnCharge();
        void afficherLions(int quantiteViande);
        friend ostream& operator<<(ostream&, const Zoo& );

};









#endif // ZOO_H_INCLUDED










/*


















Gestion de Zoo 
Un Zoo désire réaliser une application afin de mieux s’organiser et gérer l’ensemble des 
animaux et l’ensemble des médecins vétérinaires. 
Un animal est caractérisé par son espèce, sa matricule unique et une collection contenant les 
dates de ses vaccins (string). 
Un lion est un animal caractérisé en plus par la quantité de viande consommée. 
Un médecin vétérinaire est caractérisé par un identifiant unique, un nom, un prénom et une 
collection contenant les matricules des animaux qu’il prend en charge. 
La classe «Zoo» est caractérisé par une adresse, un ensemble de médecins vétérinaires et un 
ensemble d’animaux. Elle répond aux besoins suivants : 
1. Ajouter un animal ou un lion. 
2. Ajouter  une  date  de  vaccination  pour  un  animal  donné  par  sa  matricule  (vérifier 
l’unicité de la date). 
3. Ajouter un médecin vétérinaire. 
4. Affecter la matricule d’un animal à un médecin vétérinaire. Lever une exception si : 
- L’animal n’existe pas. 
- Le médecin n’existe pas. 
- L’animal est déjà affecté à ce médecin vétérinaire.  
5. Afficher  le  nombre  total  des  animaux  pris  en  charge  par  les  médecins  vétérinaires 
(surcharger l’opérateur += dans la classe médecin vétérinaire en retournant un objet 
contenant la concaténation des deux collections des matricules  des animaux). 
6. Enregistrer  dans  un  fichier  texte  la  liste  des  lions  qui  consomment  une  quantité  de 
viande supérieure à un seuil bien déterminé.  
 
On vous demande d'implémenter un programme principal (main) qui permet de : 
 
7. Instancier des objets de toutes les classes implémentées. 
8. Tester l’ensemble des fonctionnalités demandées.*/