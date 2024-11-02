#include <vector>
#include <iostream>

#include "soustraction.h"
#include "UtilitairesVecteur.h"


std::vector<int> soustraction(std::vector<int> nombre1, std::vector<int> nombre2)
{
    std::vector<int> n1 = nombre1;
    std::vector<int> n2 = nombre2;

    inverser(nombre1);
    inverser(nombre2);

    int retenu = 0;
    std::vector<int> resultat;

    if (premier_vecteur_plus_grand_que_deuxieme(n2, n1, false))
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
                if (difference == 0)
                {
                    resultat.at(i-1) *= -1;
                }

                else
                {
                    difference *= -1;
                }
            }

            resultat.push_back(difference); 
        }

        rogner_zeros_inutiles(resultat);
    }

    else if (premier_vecteur_plus_grand_que_deuxieme(n1, n2, false))
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

        rogner_zeros_inutiles(resultat);
    }

    else
    {
        resultat = {0};
    }

    inverser(resultat);
    
    return resultat;
}
