/*

Le programme dans ce fichier permet de faire une addition entre deux vecteurs entiers.

*/

// Inclusion des librairies
#include <vector>

#include "addition.h"
#include "constantes.h"
#include "netoyage.h"
#include "UtilitairesVecteur.h"


std::vector<int> addition(std::vector<int> nombre1, std::vector<int> nombre2)
{
    // Inverser les deux vecteurs pour que les unités soient à l'index 0.
    inverser(nombre1);
    inverser(nombre2);

    std::vector<int> resultat;
    int retenue = 0;

    for (int i=0; i<nombre1.size(); i++)
    {
        // Récupère chaque chiffre des deux vecteurs (nombre) et fait la somme.
        int chiffreIndexNombre1 = nombre1.at(i);
        int chiffreIndexNombre2 = nombre2.at(i);

        int somme = chiffreIndexNombre1 + chiffreIndexNombre2 + retenue;

        if (somme >= BASE)
        {
            retenue = 1;
            somme -= BASE;
        }

        // Réinialise la retenue à 0 si la somme ne dépasse pas 9.
        else
        {
            retenue = 0;
        }

        resultat.push_back(somme);   
    }

    // Ajoute la retenue à la fin, pour compléter le nombre.
    if (retenue != 0)
    {
        resultat.push_back(retenue);
    }

    // Netoyer et retourner le résultat.
    netoyage_vecteur_nombre(resultat, false);

    return resultat;
}
