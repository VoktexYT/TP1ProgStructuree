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
   std::cout << "{ ";

   for (int i=0; i<vec.size(); i++)
   {
      if (i+1 < vec.size())
      {
         std::cout << vec.at(i) << ", ";
      }
      else
      {
         std::cout << vec.at(i);
      }
   }

   std::cout << " }" << std::endl;
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
      entier = entier * 10 + vec.at(i);
   }

   return entier;
}


void egaliser_taille_vecteur(std::vector<int>& n1, std::vector<int>& n2)
{
   int grandeur_vecteur_nombre1 = n1.size();
   int grandeur_vecteur_nombre2 = n2.size();
   int difference = grandeur_vecteur_nombre1 - grandeur_vecteur_nombre2;

   if (grandeur_vecteur_nombre1 == grandeur_vecteur_nombre2)
   {
      return;
   }

   inverser(n1);
   inverser(n2);

   if (grandeur_vecteur_nombre1 > grandeur_vecteur_nombre2)
   {
      for (int i=0; i<difference; i++)
      {
         n2.push_back(0);
      }
   }

   else
   {
      difference *= -1;

      for (int i=0; i<difference; i++)
      {
         n1.push_back(0);
      }
   }

   inverser(n1);
   inverser(n2);
}


bool premier_vecteur_plus_grand_que_deuxieme(std::vector<int> nbr1, std::vector<int> nbr2, bool plusGrandEgale)
{
   inverser(nbr1);
   rogner_zeros_inutiles(nbr1);
   inverser(nbr1);

   inverser(nbr2);
   rogner_zeros_inutiles(nbr2);
   inverser(nbr2);

   if (nbr1.size() > nbr2.size())
   {
      return true;
   }

   else if (nbr1.size() < nbr2.size())
   {
      return false;
   }

   else
   {
      for (int i=0; i<nbr1.size(); i++)
      {
         int chiffreNombre1 = nbr1.at(i);
         int chiffreNombre2 = nbr2.at(i);

         if (chiffreNombre1 > chiffreNombre2)
         {
            return true;
         }

         else if (chiffreNombre1 < chiffreNombre2)
         {
            return false;
         }
      }
   }

   return false;
}

