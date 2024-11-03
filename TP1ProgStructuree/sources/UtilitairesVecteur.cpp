// Bibliothèque fournissant des fonctions utilitaires pour l'utilisation de vecteurs d'entiers.
#include <iostream>

#include "constantes.h"
#include "UtilitairesVecteur.h"


/**
 * Permutte les valeurs de 2 variables entières.
 * 
 * @param {int&} nb1 Le premier vecteur qui représente un nombre.
 * @param {int&} nb2 Le deuxième vecteur qui représente un nombre.
 * @return {void}
 * @author Joël Beaudet
 */
void permutter_entiers(int& nb1, int& nb2)
{
   int tmp = nb1;
   nb1 = nb2;
   nb2 = tmp;
}


/**
 * Permutte les valeurs de 2 variables entières.
 * 
 * @param {std::vector<int>&} nombre Le vecteur qui représente un nombre.
 * @return {void}
 * @author Joël Beaudet
 */
void inverser(std::vector<int>& nombre)
{
   // Pour toutes les positions du début jusqu'à la moitié.
   for (int i = 0; i < nombre.size() / 2; ++i)
   {
      // On permutte la valeur avec la position symétrique à partir de la fin.
      permutter_entiers(nombre.at(i), nombre.at(nombre.size() - 1 - i));
   }
}

/**
 * Rogner les zéros inutiles dans un vecteur entier.
 * 
 * @param {std::vector<int>&} nombre Le vecteur qui représente un nombre.
 * @return {void}
 * @author Joël Beaudet
 */
void rogner_zeros_inutiles(std::vector<int>& nombre)
{
   // Puisque les nombres sont inversés, il faut enlever les 0 de la fin du vecteur
   // Tant que vecteur contient plus d'un chiffre (nécessaire pour gérer le cas où le nombre est zéro car on doit laisser un zéro),
   // et que le dernier chiffre est zéro
   while (nombre.size() > 1 && nombre.at(nombre.size() - 1) == 0)
   {
      // On enlève le zéro à la fin
      nombre.pop_back();
   }
}

/**
 * Égalise la taille des vecteurs en ajoutant des zéros.
 * 
 * @param {std::vector<int>&} n1 Le premier vecteur qui représente un nombre.
 * @param {std::vector<int>&} n2 Le deuxième vecteur qui représente un nombre.
 * @return {void}
 * @author Ubert Guertin
 */
void egaliser_taille_vecteur(std::vector<int>& n1, std::vector<int>& n2)
{
   int grandeur_vecteur_nombre1 = n1.size();
   int grandeur_vecteur_nombre2 = n2.size();

   // Pas besoin d'égaliser si les vecteurs ont la même taille.
   if (grandeur_vecteur_nombre1 == grandeur_vecteur_nombre2)
   {
      return;
   }


   int difference = grandeur_vecteur_nombre1 - grandeur_vecteur_nombre2;

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

/**
 * Converti un vecteur entier en nombre entier.
 * 
 * @param {std::vector<int>} vec Le vecteur qui représente un nombre.
 * @return {int} Retourne l'entier que représente le vecteur
 * @author Ubert Guertin
 * 
 * vec = {1, 2, 3, 0}
 * 
 * = 1230
 */
int vecteur_a_entier(std::vector<int> vec)
{
   int entier = 0;

   for (int i=0; i<vec.size(); i++)
   {
      entier = entier * 10 + vec.at(i);
   }

   return entier;
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

      if (plusGrandEgale)
      {
         return true;
      }
   }

   return false;
}


std::vector<int> convertire_nombre_string_en_vecteur(std::string nombre)
{
   std::vector<int> resultat = {};

   for (int i=0; i<nombre.size(); i++)
   {
      char caractere = nombre.at(i);

      if (isdigit(caractere))
      {
         int chiffre = CHIFFRES.find(caractere);
         resultat.push_back(chiffre);
      }
   }

   return resultat;
}

