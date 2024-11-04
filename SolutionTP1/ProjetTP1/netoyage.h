#pragma once

#include <vector>


/**
 * Fait un nettoyage dans un vecteur nombre.
 *
 * @param {std::vector<int>&} vecteur La réference du vecteur nombre.
 * @param {bool} inverserDébut Cet argument permet de d'inverser le vecteur si true.
 * @return {void}
 * @author Ubert Guertin
 *
 * vecteur = {0, 0, 3, 0, 3}
 *         = {3, 0, 3, 0, 0}
 *         = {3, 0, 3}
 */
void netoyage_vecteur_nombre(std::vector<int>& vecteur, bool inverserDebut);

