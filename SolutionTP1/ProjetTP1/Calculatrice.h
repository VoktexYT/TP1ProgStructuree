#pragma once

#include <vector>

/**
 * Exécute le calcul du nombre1 avec le nombre2 par rapport à l'opérateur choisi.
 *
 * @param {std::vector<int>} nombre1 Le vecteur qui représente le premier nombre.
 * @param {char} operateur L'opérateur permettant de choisir le type de calcul.
 * @param {std::vector<int>} nombre2 Le vecteur qui représente le deuxième nombre.
 * @return {std::vector<int>} Le résultat du calcul.
 * @author Ubert Guertin
 *
 */
std::vector<int> calculer(std::vector<int> nombre1, char operateur, std::vector<int> nombre2, bool& erreur);
