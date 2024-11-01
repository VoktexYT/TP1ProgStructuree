#include <vector>
#include <iostream>
#include "multiplication.h"
#include "addition.h"
#include "UtilitairesVecteur.h"

std::vector<int> multiplication(std::vector<int> nombre1, std::vector<int> nombre2)
{
    std::vector<int> n1 = nombre1;
    std::vector<int> n2 = nombre2;

    afficher_entier_vecteur(n1); // 50 = n1
    afficher_entier_vecteur(n2); // 03 = n2

    inverser(n1); // 05 = n2
    inverser(n2); // 30 = n1


    /*
        POUR CHAQUE chiffre2 du nombre2
            Ajouter des zéros selon la puissance de 10 du chiffre2 à un vecteur contenant le résultat intermédiaire
            
            POUR CHAQUE chiffre1 du nombre1
                Multiplier les 2 chiffres, et additionner la retenue
                Ajouter les unités de la multiplication au résultat intermédiaire
                Conserver les dizaines de la multiplication comme retenue

            SI il y a une retenue
                L’ajouter au résultat intermédiaire
            Additionner le résultat intermédiaire au résultat
    */

    int nombre_zero = 0;
    int retenue = 0;

    for (int idx_n2=0; idx_n2<nombre2.size(); idx_n2++)
    {
        int chiffre_2 = nombre2.at(idx_n2);
        std::vector<int> intermediaire;

        for (int z=0; z<nombre_zero; z++)
        {
            nombre2.push_back(0);
        }

        for (int idx_n1=0; idx_n1<nombre1.size(); idx_n1++)
        {
            int chiffre_1 = nombre1.at(idx_n1);

            int produit = chiffre_1 * chiffre_2 + retenue;

            int unite = produit % 10;

            intermediaire.push_back(unite);
            retenue = (produit - unite) / 10;
        }

        if (retenue > 0)
        {
            intermediaire.push_back(retenue);
        }

        // reajuster_taille_vecteur(intermediaire, resultat);
        std::vector<int> resultat(intermediaire.size(), 0);

        // addition(intermediaire, resultat);

        nombre_zero++;
    }

    

    return {};
}
