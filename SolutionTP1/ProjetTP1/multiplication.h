#pragma once


/**
 * Fait la multiplication manuellement entre 2 vecteurs de nombres.
 *
 * @param {std::vector<int>} nombre1 Le premier vecteur représente le premier nombre.
 * @param {std::vector<int>} nombre2 Le deuxième vecteur représente le deuxième nombre.
 * @return {std::vector<int>} Retourne le produit de la multiplication.
 * @author Ubert Guertin
 *
 * nombre1 = {2, 5, 4}
 * nombre2 = {3, 0, 1}
 *
 * calcule = nombre1 * nombre2
 *         = {7, 6, 4, 5, 4}
 */
std::vector<int> multiplication(std::vector<int> nombre1, std::vector<int> nombre2);
