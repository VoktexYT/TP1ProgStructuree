#pragma once

#include <vector>


/**
 * Afficher un vecteur entier avec un espacement tous les FREQUENCE_ESPACEMENT chiffres.
 *
 * @param {std::vector<int>} vecteur Le vecteur qui repr�sente un nombre.
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
 * Lire l'entr�e de l'utilisateur et s'arr�ter lorsqu'un op�rateur est d�tect�.
 * 
 * @param {std::vector<int>&} nombre1 La r�f�rence vers un vecteur entier du premier nombre.
 * @param {char&} operateur L'op�rateur du calcul math�matique.
 * @return {bool} Retourne "true" si les donn�es entr�es sont valides, sinon "false".
 * @author Ubert Guertin
*/
bool lire_premier_nombre_et_operateur(std::vector<int> &nombre1, char &operateur);

/**
 * Lire l'entr�e de l'utilisateur et s'arr�ter lorsqu'un �gale est d�tect�.
 *
 * @param {std::vector<int>&} nombre2 La r�f�rence vers un vecteur entier du deuxi�me nombre.
 * @return {bool} Retourne "true" si la donn�e entr�e est valide, sinon "false".
 * @author Ubert Guertin
*/
bool lire_deuxieme_nombre(std::vector<int> &nombre2);
