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


void executer_tous_les_tests()
{
    const bool TEST_EGALISER_TAILLE_VECTEUR = (
        test_egaliser_taille_vecteur_1() &&
        test_egaliser_taille_vecteur_2() &&
        test_egaliser_taille_vecteur_3()
    );

    if (!TEST_EGALISER_TAILLE_VECTEUR)
    {
        std::cout << "Echec Egaliser_taille_vecteur()" << std::endl;
        return;
    }

    std::cout << "TEST = OK" << std::endl;
}
