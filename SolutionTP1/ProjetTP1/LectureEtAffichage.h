#pragma once

#include <vector>


/**
 * Afficher un vecteur entier avec un espacement tous les FREQUENCE_ESPACEMENT chiffres.
 *
 * @param {std::vector<int>} vecteur Le vecteur qui représente un nombre.
 * @return {void}
 * @author Ubert Guertin
 *
 * vec = {1, 2, 3, 4, 5, 6, 7, 8, 9}
 * FREQUENCE_ESPACEMENT = 3
 *
 * = 123 456 789
 */
void afficher(std::vector<int> resultat);

/**
 * Lire l'entrée de l'utilisateur et s'arrêter lorsqu'un opérateur est détecté.
 * 
 * @param {std::vector<int>&} nombre1 La référence vers un vecteur entier du premier nombre.
 * @param {char&} operateur L'opérateur du calcul mathématique.
 * @return {bool} Retourne "true" si les données entrées sont valides, sinon "false".
 * @author Ubert Guertin
*/
bool lire_premier_nombre_et_operateur(std::vector<int> &nombre1, char &operateur);

/**
 * Lire l'entrée de l'utilisateur et s'arrêter lorsqu'un égale est détecté.
 *
 * @param {std::vector<int>&} nombre2 La référence vers un vecteur entier du deuxième nombre.
 * @return {bool} Retourne "true" si la donnée entrée est valide, sinon "false".
 * @author Ubert Guertin
*/
bool lire_deuxieme_nombre(std::vector<int> &nombre2);
