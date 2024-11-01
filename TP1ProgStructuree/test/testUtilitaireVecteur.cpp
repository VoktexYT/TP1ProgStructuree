#include <iostream>
#include <vector>
#include "UtilitairesVecteur.h"


bool test_egaliser_taille_vecteur_1()
{
    std::vector<int> nbr1 = {1, 2, 3};
    std::vector<int> nbr2 = {3, 2, 1};

    std::vector<int> nbr1Resultat = {1, 2, 3};
    std::vector<int> nbr2Resultat = {1, 2, 3};

    egaliser_taille_vecteur(nbr1, nbr2);

    return nbr1 == nbr1Resultat && nbr2 == nbr2Resultat;
}

bool test_egaliser_taille_vecteur_2()
{
    std::vector<int> nbr1 = {2};
    std::vector<int> nbr2 = {3, 2, 1};

    std::vector<int> nbr1Resultat = {0, 0, 2};
    std::vector<int> nbr2Resultat = {1, 2, 3};

    egaliser_taille_vecteur(nbr1, nbr2);

    return nbr1 == nbr1Resultat && nbr2 == nbr2Resultat;
}

bool test_egaliser_taille_vecteur_3()
{
    std::vector<int> nbr1 = {1, 2, 3};
    std::vector<int> nbr2 = {2};

    std::vector<int> nbr1Resultat = {1, 2, 3};
    std::vector<int> nbr2Resultat = {0, 0, 2};

    egaliser_taille_vecteur(nbr1, nbr2);

    return nbr1 == nbr1Resultat && nbr2 == nbr2Resultat;
}


int executer_tous_les_tests()
{
    std::vector<std::string> erreurs;

    if (!test_egaliser_taille_vecteur_1())
    {
        erreurs.push_back("Echec, egaliser taille vecteur 1");
    }

    if (!test_egaliser_taille_vecteur_2())
    {
        erreurs.push_back("Echec, egaliser taille vecteur 2");
    }

    if (!test_egaliser_taille_vecteur_3())
    {
        erreurs.push_back("Echec, egaliser taille vecteur 3");
    }

    if (erreurs.size() > 0)
    {
        for (int e=0; e<erreurs.size(); e++)
        {
            std::cout << erreurs.at(e) << std::endl;
        }

        return 1;
    }

    std::cout << "TEST = OK" << std::endl;
    
    return 0;
}


int main()
{
    return executer_tous_les_tests();
}
