#include <vector>
#include <iostream>

#include "soustraction.h"
#include "UtilitairesVecteur.h"

//   12
//   05

//  -12
std::vector<int> soustraction(std::vector<int> nombre1, std::vector<int> nombre2)
{
    rogner_zeros_inutiles(nombre1);
    rogner_zeros_inutiles(nombre2);
    inverser(nombre1);
    inverser(nombre2);

    int entier_vec_nombre1 = vecteur_a_entier(nombre1);
    int entier_vec_nombre2 = vecteur_a_entier(nombre2);

    inverser(nombre1);
    inverser(nombre2);

    int retenu = 0;
    std::vector<int> resultat;

    if (entier_vec_nombre2 > entier_vec_nombre1)
    {
        for (int i=0; i<nombre1.size(); i++)
        {
            int chiffre_index_n1 = nombre1.at(i);
            int chiffre_index_n2 = nombre2.at(i);

            int difference = chiffre_index_n2 - chiffre_index_n1 - retenu;

            if (difference < 0)
            {
                retenu = 1;
                difference += 10;
            }

            else
            {
                retenu = 0;
            }

            if (i == nombre1.size()-1)
            {
                difference *= -1;
            }

            resultat.push_back(difference); 
        }
    }

    else
    {
        
        for (int i=0; i<nombre1.size(); i++)
        {
            int chiffre_index_n1 = nombre1.at(i);
            int chiffre_index_n2 = nombre2.at(i);

            int difference = chiffre_index_n1 - chiffre_index_n2 - retenu;

            if (difference < 0)
            {
                retenu = 1;
                difference += 10;
            }

            else
            {
                retenu = 0;
            }

            resultat.push_back(difference); 
        }
    }
    
    return resultat;
}
