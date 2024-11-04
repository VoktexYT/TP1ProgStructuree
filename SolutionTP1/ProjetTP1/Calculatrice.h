#pragma once

#include <vector>

/**
 * Ex�cute le calcul du nombre1 avec le nombre2 par rapport � l'op�rateur choisi.
 *
 * @param {std::vector<int>} nombre1 Le vecteur qui repr�sente le premier nombre.
 * @param {char} operateur L'op�rateur permettant de choisir le type de calcul.
 * @param {std::vector<int>} nombre2 Le vecteur qui repr�sente le deuxi�me nombre.
 * @return {std::vector<int>} Le r�sultat du calcul.
 * @author Ubert Guertin
 *
 */
std::vector<int> calculer(std::vector<int> nombre1, char operateur, std::vector<int> nombre2, bool& erreur);
