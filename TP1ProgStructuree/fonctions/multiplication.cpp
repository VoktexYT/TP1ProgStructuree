#include <vector>
#include <iostream>
#include "multiplication.h"
#include "addition.h"
#include "UtilitairesVecteur.h"


std::vector<int> multiplication(std::vector<int> nombre1, std::vector<int> nombre2)
{
    bool estUnNombreNegatif = false;

    std::vector<int> n1 = nombre1;
    std::vector<int> n2 = nombre2;

    if ((nombre1.size() < 2 && vecteur_a_entier(nombre1) == 0) || (nombre2.size() < 2 && vecteur_a_entier(nombre2) == 0))
    {
        return {0};
    }

    inverser(n1);
    inverser(n2);

    int nombre_zero = 0;
    int retenue = 0;

    std::vector<int> resultat;

    for (int idx_n2=0; idx_n2<n2.size(); idx_n2++)
    {
        int chiffre_2 = n2.at(idx_n2);

        std::vector<int> intermediaire;

        for (int z=0; z<nombre_zero; z++)
        {
            intermediaire.push_back(0);
        }

        for (int idx_n1=0; idx_n1<n1.size(); idx_n1++)
        {
            int chiffre_1 = n1.at(idx_n1);

            int produit = chiffre_1 * chiffre_2 + retenue;

            if (produit >= 10)
            {
                int unite = produit % 10;
                retenue = (produit - unite) / 10;

                intermediaire.push_back(unite);
            }

            else
            {
                retenue = 0;
                intermediaire.push_back(produit);
            }
        }

        if (retenue > 0)
        {
            intermediaire.push_back(retenue);
            retenue = 0;
        }

        inverser(intermediaire);

        egaliser_taille_vecteur(intermediaire, resultat);

        resultat = addition(intermediaire, resultat);

        nombre_zero++;
    }

    inverser(resultat);
    rogner_zeros_inutiles(resultat);
    inverser(resultat);
    
    return resultat;
}
