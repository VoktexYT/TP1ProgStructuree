// Biblioth�que fournissant des fonctions utilitaires pour l'utilisation de vecteurs d'entiers
#include "UtilitairesVecteur.h"
#include <iostream>


// Permutte les valeurs de 2 variables enti�res
// nb1, nb2: R�f�rences sur les variables � permutter
void permutter_entiers(int& nb1, int& nb2)
{
   int tmp = nb1;
   nb1 = nb2;
   nb2 = tmp;
}


//
// Fonctions d�clar�es dans UtilitairesVecteur.h
//

void inverser(std::vector<int>& nombre)
{
   // Pour toutes les positions du d�but jusqu'� la moiti�
   for (int i = 0; i < nombre.size() / 2; ++i)
   {
      // On permutte la valeur avec la position sym�trique � partir de la fin
      permutter_entiers(nombre.at(i), nombre.at(nombre.size() - 1 - i));
   }
}


void rogner_zeros_inutiles(std::vector<int>& nombre)
{
   // Puisque les nombres sont invers�s, il faut enlever les 0 de la fin du vecteur
   // Tant que vecteur contient plus d'un chiffre (n�cessaire pour g�rer le cas o� le nombre est z�ro car on doit laisser un z�ro),
   // et que le dernier chiffre est z�ro
   while (nombre.size() > 1 && nombre.at(nombre.size() - 1) == 0)
   {
      // On enl�ve le z�ro � la fin
      nombre.pop_back();
   }
}


void afficher_vecteur_int(std::vector<int> vec)
{
   for (int i=0; i<vec.size(); i++)
   {
      std::cout << "[" << i << "]: " << vec.at(i) << std::endl;
   }
}


void afficher_entier_vecteur(std::vector<int> vec)
{
   for (int i=0; i<vec.size(); i++)
   {
      std::cout << vec.at(i);
   }

   std::cout << std::endl;
}

int vecteur_a_entier(std::vector<int> vec)
{
   int entier = 0;

   for (int i=0; i<vec.size(); i++)
   {
      entier *= 10 + vec.at(i);
   }
   
   return entier;
}

