#pragma once

/**
 * Fais la division et le modulo manuellement entre 2 vecteurs de nombre.
 *
 * @param {std::vector<int>} nombre1 Le premier vecteur représente le premier nombre.
 * @param {std::vector<int>} nombre2 Le deuxième vecteur représente le deuxième nombre.
 * @param {bool} estUneDivision Cet argument permet de d'effectuer une division si "true"
 *                              ou un modulo si "false".
 * @return {std::vector<int>} Retourne le quotient de la division ou du modulo.
 * @author Ubert Guertin
 *
 * nombre1 = {1, 5}
 * nombre2 = {0, 3}
 *
 * estUneDivision = true
 * calcule = nombre1 / nombre2
 *         = {5}
 *
 * estUneDivision = false
 * calcule = nombre1 % nombre2
 *         = {0}
 */
std::vector<int> division_modulo(std::vector<int> nombre1, std::vector<int> nombre2, bool estUneDivision);
