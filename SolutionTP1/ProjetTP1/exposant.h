#pragma once

#include <vector>


/**
 * Calcule l'exposant manuellement entre 2 vecteurs de nombres.
 *
 * @param {std::vector<int>} nombre1 Le premier vecteur qui représente un nombre.
 * @param {std::vector<int>} nombre2 Le deuxième vecteur qui représente un nombre.
 * @return {std::vector<int>} Retourne l'exponentiation des deux vecteurs nombres
 * @author Ubert Guertin
 *
 * nombre1 = {2}
 * nombre2 = {3}
 *
 * calcul = nombre1 ^ nombre2
 *        = {8}
 */
std::vector<int> exposant(std::vector<int> nombre1, std::vector<int> nombre2);
