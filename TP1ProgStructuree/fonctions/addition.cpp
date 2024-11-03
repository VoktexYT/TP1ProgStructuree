/*

Ce fichier permet de faire une addition entre deux vecteurs.

*/

// Inclusion des librairies
#include <vector>

#include "addition.h"
#include "netoyage.h"
#include "UtilitairesVecteur.h"


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
std::vector<int> addition(std::vector<int> nombre1, std::vector<int> nombre2)
{
    // Inverser les deux vecteurs pour que les unités soient à l'index 0.
    inverser(nombre1);
    inverser(nombre2);

    std::vector<int> resultat;
    int retenu = 0;

    for (int i=0; i<nombre1.size(); i++)
    {
        // Récupère chaque chiffre des deux vecteurs (nombre) et fait la somme.
        int chiffreIndexNombre1 = nombre1.at(i);
        int chiffreIndexNombre2 = nombre2.at(i);

        int somme = chiffreIndexNombre1 + chiffreIndexNombre2 + retenu;

        if (somme >= 10)
        {
            retenu = 1;
            somme -= 10;
        }

        // Réinialise la retenu à 0 si la somme ne dépasse pas 9.
        else
        {
            retenu = 0;
        }

        resultat.push_back(somme);   
    }

    // Ajoute la retenu à la fin, pour compléter le nombre.
    if (retenu != 0)
    {
        resultat.push_back(retenu);
    }

    // Netoyer et retourner le resultat.
    netoyage_vecteur_nombre(resultat, false);
    
    return resultat;
}
