// Calculatrice permettant de faire des op�rations arithm�tiques de base sur 
// des nombres entiers positifs de taille illimit�e

#include "LectureEtAffichage.h"   // Pour lire_premier_nombre_et_operateur, lire_deuxieme_nombre, afficher
#include "UtilitairesVecteur.h"
#include "Calculatrice.h"         // Pour calculer
#include <iostream>
#include <vector>

using namespace std;


void pause()
{
   cout << "Clicker sur entrez pour continuer..." << endl;
   system("read -p '' var");
   system("clear");
}


// Calcule le r�sultat de l'op�ration compos�e des 2 nombres et de l'op�rateur donn�
// et l'affiche
void calculer_et_afficher_resultat(vector<int> nombre1, char operateur, vector<int> nombre2)
{
   bool erreur;

   vector<int> resultat = calculer(nombre1, operateur, nombre2, erreur);

   cout << endl;

   // On affiche le r�sultat s'il n'y a pas eu d'erreur de calcul
   if (!erreur)
   {
      afficher(resultat);
   }
   else
   {
      // La seule erreur possible est une tentative de division par 0
      cout << "Impossible de diviser par zéro!\n";
   }
   cout << endl;   
}


int main()
{
   setlocale(LC_ALL, "");

   vector<int> nombre1;
   char operateur;
   vector<int> nombre2;

   cout << "Entrez une opération arithmétique: ";
   bool estValide = lire_premier_nombre_et_operateur(nombre1, operateur);

   // Le programme continue tant que des op�rations valides sont donn�es
   while (estValide)
   {
      estValide = lire_deuxieme_nombre(nombre2);

      // On fait le calcul que si les donn�es sont valides
      if (estValide)
      {
         calculer_et_afficher_resultat(nombre1, operateur, nombre2);

         // Demande la prochaine op�ration
         pause();

         cout << "Entrez une opération arithmétique: ";
         estValide = lire_premier_nombre_et_operateur(nombre1, operateur);
      }
   }

   // Une syntaxe invalide dans l'op�ration termine le programme
   cout << "\nOpération invalide - Fin du programme\n";
   pause();
}
