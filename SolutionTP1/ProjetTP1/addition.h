#pragma once

#include <vector>


/**
 * Calcule l'addition manuellement entre 2 vecteurs de nombres.
 *
 * @param {std::vector<int>} nombre1 Le premier vecteur qui représente un nombre.
 * @param {std::vector<int>} nombre2 Le deuxième vecteur qui représente un nombre.
 * @return {std::vector<int>} Retourne la somme des deux vecteurs nombres
 * @author Ubert Guertin
 *
 * nombre1 = {1, 2, 3}
 * nombre2 = {3, 2, 1}
 *
 * calcul = nombre1 + nombre2
 *        = {4, 4, 4}
 */
std::vector<int> addition(std::vector<int> nombre1, std::vector<int> nombre2);
