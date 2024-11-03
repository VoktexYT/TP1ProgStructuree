// Bibliothèque fournissant des fonctions utilitaires pour l'utilisation de vecteurs d'entiers.
#include <iostream>

#include "constantes.h"
#include "netoyage.h"
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
 * Agrandi un vecteur en ajoutant des zéros.
 * 
 * @param {std::vector<int>&} nombre Le vecteur qui représente un nombre.
 * @param {int} tailleDePlus Le nombre de fois que le vecteur sera agrandi.
 * @return {void}
 * @author Ubert Guertin
 * 
 * nombre = {1, 2}
 * tailleDePlus = 3
 * 
 * = {1, 2, 0, 0, 0}
 */
void agrandir_vecteur_entier(std::vector<int>& nombre, int tailleDePlus)
{
   inverser(nombre);

   for (int i=0; i<tailleDePlus; i++)
   {
      nombre.push_back(0);
   }

   inverser(nombre);
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

   // Agrandir vecteur 1 si vecteur2 est plus grand.
   if (grandeur_vecteur_nombre2 > grandeur_vecteur_nombre1)
   {
      difference *= -1;
      agrandir_vecteur_entier(n1, difference);
      return;
   }

   // Agrandir vecteur 2, car le vecteur1 est plus grand.
   agrandir_vecteur_entier(n2, difference);
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
      entier *= 10;
      entier += vec.at(i);
   }

   return entier;
}


/**
 * Vérifie si le nombre premier vecteur entier est plus grand que le deuxième.
 * 
 * @param {std::vector<int>} nbr1 Le premier vecteur qui représente un nombre.
 * @param {std::vector<int>} nbr2 Le deuxième vecteur qui représente un nombre.
 * @return {bool} Retourne true si le premier vecteur nombre est plus grand que le deuxième.
 * @author Ubert Guertin
 * 
 * nbr1 = {1, 2, 3, 0}
 * nbr2 = {1, 3, 2}
 * 
 * = true
 */
bool premier_vecteur_plus_grand_que_deuxieme(std::vector<int> nbr1, std::vector<int> nbr2, bool plusGrandEgale)
{
   // Enlève les zéros inutile dans le vecteur.
   netoyage_vecteur_nombre(nbr1, true);
   netoyage_vecteur_nombre(nbr2, true);

   if (nbr1.size() == nbr2.size())
   {
      // Essayer de trouver le un chiffre different dans le nombre
      for (int i=0; i<nbr1.size(); i++)
      {
         int chiffreNombre1 = nbr1.at(i);
         int chiffreNombre2 = nbr2.at(i);

         if (chiffreNombre1 != chiffreNombre2)
         {
            return chiffreNombre1 > chiffreNombre2;
         }
      }

      // Les deux nombres ont les mêmes chiffres, donc égale.
      return plusGrandEgale;
   }

   // Retourne si la taille des unités est supérieur. (Centaine > dizaine) {2, 3, 4} > {3, 2}
   return nbr1.size() > nbr2.size();
}


/**
 * IMPORTANT : Fonction utilisée dans les tests unitaires.
 *             Donc inutile au fonctionnement du programme principale.
 * Fonction qui converti une chaine de caractère en vecteur entier.
 * C'est beaucoup plus rapide écrire "123 456 789" que {1, 2, 3, 4, 5, 6, 7, 8, 9}
 * 
 * @param {std::string} nombre
 * @return {std::vector<int>} Retourne la convertion entre le string nombre et un vecteur entier
 * @author Ubert Guertin
 * 
 * nombre = "1 234"
 * 
 * = {1, 2, 3, 4}
 */
std::vector<int> convertire_nombre_string_en_vecteur(std::string nombre)
{
   std::vector<int> resultat = {};

   for (int i=0; i<nombre.size(); i++)
   {
      char caractere = nombre.at(i);

      // Le chiffre récupérer est l'index trouver en cherchant dans CHIFFRES
      if (isdigit(caractere))
      {
         int chiffre = CHIFFRES.find(caractere);
         resultat.push_back(chiffre);
      }
   }

   return resultat;
}

