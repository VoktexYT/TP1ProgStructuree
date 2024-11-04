#pragma once


/**
 * Calcule la soustraction manuellement entre 2 vecteurs de nombres.
 *
 * @param {std::vector<int>} nombre1 Le premier vecteur qui représente un nombre.
 * @param {std::vector<int>} nombre2 Le deuxième vecteur qui représente un nombre.
 * @return {std::vector<int>} Retourne la somme des deux vecteurs nombres
 * @author Ubert Guertin
 *
 * nombre1 = {1, 4, 0}
 * nombre2 = {0, 2, 0}
 *
 * calcul = nombre1 - nombre2
 *        = {1, 2, 0}
 */
std::vector<int> soustraction(std::vector<int> nombre1, std::vector<int> nombre2);
