#include <iostream>
#include <vector>
#include "UtilitairesVecteur.h"
#include "addition.h"
#include "soustraction.h"
#include "multiplication.h"
#include "divisionModulo.h"
#include "exposant.h"
#include "constantes.h"


bool test_egaliser_taille_vecteur_1()
{
    std::vector<int> nbr1 = {1, 2, 3};
    std::vector<int> nbr2 = {3, 2, 1};

    std::vector<int> nbr1Resultat = {1, 2, 3};
    std::vector<int> nbr2Resultat = {3, 2, 1};

    egaliser_taille_vecteur(nbr1, nbr2);

    return nbr1 == nbr1Resultat && nbr2 == nbr2Resultat;
}

bool test_egaliser_taille_vecteur_2()
{
    std::vector<int> nbr1 = {2};
    std::vector<int> nbr2 = {3, 2, 1};

    std::vector<int> nbr1Resultat = {0, 0, 2};
    std::vector<int> nbr2Resultat = {3, 2, 1};

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


//////////////////////////////////////

bool test_vecteur_plus_grand_1()
{
    std::vector<int> nbr1 = {1, 2, 3};
    std::vector<int> nbr2 = {2};

    bool resultat = true;

    bool r = premier_vecteur_plus_grand_que_deuxieme(nbr1, nbr2, false);

    return resultat == r;
}

bool test_vecteur_plus_grand_2()
{
    std::vector<int> nbr1 = {2};
    std::vector<int> nbr2 = {1, 2, 3};

    bool resultat = false;

    bool r = premier_vecteur_plus_grand_que_deuxieme(nbr1, nbr2, false);

    return resultat == r;
}

bool test_vecteur_plus_grand_3()
{
    std::vector<int> nbr1 = {1, 0};
    std::vector<int> nbr2 = {1, 1};

    bool resultat = false;

    bool r = premier_vecteur_plus_grand_que_deuxieme(nbr1, nbr2, false);

    return resultat == r;
}

bool test_vecteur_plus_grand_4()
{
    std::vector<int> nbr1 = {2, 0};
    std::vector<int> nbr2 = {1, 5};

    bool resultat = true;

    bool r = premier_vecteur_plus_grand_que_deuxieme(nbr1, nbr2, false);

    return resultat == r;
}

bool test_vecteur_plus_grand_5()
{
    std::vector<int> nbr1 = {2, 4, 6};
    std::vector<int> nbr2 = {2, 4, 7};

    bool resultat = false;

    bool r = premier_vecteur_plus_grand_que_deuxieme(nbr1, nbr2, false);

    return resultat == r;
}

bool test_vecteur_plus_grand_6()
{
    std::vector<int> nbr1 = {5, 3, 2, 0};
    std::vector<int> nbr2 = {5, 3, 0, 0};

    bool resultat = true;

    bool r = premier_vecteur_plus_grand_que_deuxieme(nbr1, nbr2, false);

    return resultat == r;
}


/////////////////////////////////////////////

bool test_addition_1()
{
    std::vector<int> nbr1 = {1};
    std::vector<int> nbr2 = {2};

    std::vector<int> resultat = {3};

    std::vector<int> r = addition(nbr1, nbr2);

    return r == resultat;
}

bool test_addition_2()
{
    std::vector<int> nbr1 = {1, 0};
    std::vector<int> nbr2 = {0, 2};

    std::vector<int> resultat = {1, 2};

    std::vector<int> r = addition(nbr1, nbr2);

    return r == resultat;
}


bool test_addition_3()
{
    std::vector<int> nbr1 = {0, 0, 6};
    std::vector<int> nbr2 = {1, 0, 0};

    std::vector<int> resultat = {1, 0, 6};

    std::vector<int> r = addition(nbr1, nbr2);

    return r == resultat;
}

bool test_addition_4()
{
    std::vector<int> nbr1 = {9, 9};
    std::vector<int> nbr2 = {0, 5};

    std::vector<int> resultat = {1, 0, 4};

    std::vector<int> r = addition(nbr1, nbr2);

    return r == resultat;
}

///////////////////////////

bool test_soustraction_1()
{
    std::vector<int> nbr1 = {3};
    std::vector<int> nbr2 = {2};

    std::vector<int> resultat = {1};

    std::vector<int> r = soustraction(nbr1, nbr2);

    return r == resultat;
}

bool test_soustraction_2()
{
    std::vector<int> nbr1 = {3, 0};
    std::vector<int> nbr2 = {0, 2};

    std::vector<int> resultat = {2, 8};

    std::vector<int> r = soustraction(nbr1, nbr2);

    return r == resultat;
}

bool test_soustraction_3()
{
    std::vector<int> nbr1 = {0, 2};
    std::vector<int> nbr2 = {3, 0};

    std::vector<int> resultat = {-2, 8};

    std::vector<int> r = soustraction(nbr1, nbr2);

    return r == resultat;
}

bool test_soustraction_4()
{
    std::vector<int> nbr1 = {1, 0};
    std::vector<int> nbr2 = {1, 0};

    std::vector<int> resultat = {0};

    std::vector<int> r = soustraction(nbr1, nbr2);

    return r == resultat;
}

bool test_soustraction_5()
{
    std::vector<int> nbr1 = {3, 5, 6};
    std::vector<int> nbr2 = {0, 1, 6};

    std::vector<int> resultat = {3, 4, 0};

    std::vector<int> r = soustraction(nbr1, nbr2);

    return r == resultat;
}


bool test_soustraction_6()
{
    std::vector<int> nbr1 = {3, 5, 6};
    std::vector<int> nbr2 = {3, 1, 6};

    std::vector<int> resultat = {4, 0};

    std::vector<int> r = soustraction(nbr1, nbr2);

    return r == resultat;
}

bool test_soustraction_7()
{
    std::vector<int> nbr1 = {9, 0, 9};
    std::vector<int> nbr2 = {3, 9, 2};

    std::vector<int> resultat = {5, 1, 7};

    std::vector<int> r = soustraction(nbr1, nbr2);

    return r == resultat;
}

bool test_soustraction_8()
{
    std::vector<int> nbr1 = {3, 9, 2};
    std::vector<int> nbr2 = {9, 0, 9};

    std::vector<int> resultat = {-5, 1, 7};

    std::vector<int> r = soustraction(nbr1, nbr2);

    return r == resultat;
}

bool test_soustraction_9()
{
    std::vector<int> nbr1 = {0, 0, 9};
    std::vector<int> nbr2 = {9, 0, 9};

    std::vector<int> resultat = {-9, 0, 0};

    std::vector<int> r = soustraction(nbr1, nbr2);

    return r == resultat;
}

bool test_soustraction_10()
{
    std::vector<int> nbr1 = {0, 9};
    std::vector<int> nbr2 = {1, 2};

    std::vector<int> resultat = {-3};

    std::vector<int> r = soustraction(nbr1, nbr2);

    return r == resultat;
}

///////////////////////////////

bool test_multiplication_1()
{
    std::vector<int> nbr1 = {2};
    std::vector<int> nbr2 = {5};

    std::vector<int> resultat = {1, 0};

    std::vector<int> r = multiplication(nbr1, nbr2);

    return r == resultat;
}

bool test_multiplication_2()
{
    std::vector<int> nbr1 = {5};
    std::vector<int> nbr2 = {2};

    std::vector<int> resultat = {1, 0};

    std::vector<int> r = multiplication(nbr1, nbr2);

    return r == resultat;
}

bool test_multiplication_3()
{
    std::vector<int> nbr1 = {5, 0};
    std::vector<int> nbr2 = {0, 2};

    std::vector<int> resultat = {1, 0, 0};

    std::vector<int> r = multiplication(nbr1, nbr2);

    return r == resultat;
}

bool test_multiplication_4()
{
    std::vector<int> nbr1 = {0, 2};
    std::vector<int> nbr2 = {5, 0};

    std::vector<int> resultat = {1, 0, 0};

    std::vector<int> r = multiplication(nbr1, nbr2);

    return r == resultat;
}

bool test_multiplication_5()
{
    std::vector<int> nbr1 = {3, 3};
    std::vector<int> nbr2 = {5, 0};

    std::vector<int> resultat = {1, 6, 5, 0};

    std::vector<int> r = multiplication(nbr1, nbr2);

    return r == resultat;
}

bool test_multiplication_6()
{
    std::vector<int> nbr1 = {1, 6, 5, 2, 4, 1};
    std::vector<int> nbr2 = {1, 0, 5, 3, 0, 5};

    std::vector<int> resultat = {1, 7, 4, 0, 0, 7, 0, 3, 5, 0, 5};

    std::vector<int> r = multiplication(nbr1, nbr2);

    return r == resultat;
}

bool test_multiplication_7()
{
    std::vector<int> nbr1 = {0, 0, 0, 0, 0, 0};
    std::vector<int> nbr2 = {1, 0, 5, 3, 0, 5};

    std::vector<int> resultat = {0};

    std::vector<int> r = multiplication(nbr1, nbr2);

    return r == resultat;
}

bool test_multiplication_8()
{
    std::vector<int> nbr1 = {1, 0, 5, 3, 0, 5};
    std::vector<int> nbr2 = {0, 0, 0, 0, 0, 0};

    std::vector<int> resultat = {0};

    std::vector<int> r = multiplication(nbr1, nbr2);

    return r == resultat;
}

////////////////////////

bool test_division_modulo_1()
{
    std::vector<int> nbr1 = {1, 0};
    std::vector<int> nbr2 = {1, 0};

    std::vector<int> resultatDivision = {1};
    std::vector<int> resultatModulo = {0};

    std::vector<int> rDiv = divisionModulo(nbr1, nbr2, true);
    std::vector<int> rMod = divisionModulo(nbr1, nbr2, false);

    return rDiv == resultatDivision && rMod == resultatModulo;
}

bool test_division_modulo_2()
{
    std::vector<int> nbr1 = {1, 0};
    std::vector<int> nbr2 = {0, 0};

    std::vector<int> resultatDivision = CODE_ERREUR_DIV_MOD;
    std::vector<int> resultatModulo = CODE_ERREUR_DIV_MOD;

    std::vector<int> rDiv = divisionModulo(nbr1, nbr2, true);
    std::vector<int> rMod = divisionModulo(nbr1, nbr2, false);

    return rDiv == resultatDivision && rMod == resultatModulo;
}

bool test_division_modulo_3()
{
    std::vector<int> nbr1 = {1, 0, 0};
    std::vector<int> nbr2 = {0, 1, 0};

    std::vector<int> resultatDivision = {1, 0};
    std::vector<int> resultatModulo = {0};

    std::vector<int> rDiv = divisionModulo(nbr1, nbr2, true);
    std::vector<int> rMod = divisionModulo(nbr1, nbr2, false);

    return rDiv == resultatDivision && rMod == resultatModulo;
}

bool test_division_modulo_4()
{
    std::vector<int> nbr1 = {4, 6, 5};
    std::vector<int> nbr2 = {0, 0, 2};

    std::vector<int> resultatDivision = {2, 3, 2};
    std::vector<int> resultatModulo = {1};

    std::vector<int> rDiv = divisionModulo(nbr1, nbr2, true);
    std::vector<int> rMod = divisionModulo(nbr1, nbr2, false);

    return rDiv == resultatDivision && rMod == resultatModulo;
}

bool test_division_modulo_5()
{
    std::vector<int> nbr1 = {8, 7, 6, 5, 3};
    std::vector<int> nbr2 = {0, 9, 2, 8, 3};

    std::vector<int> resultatDivision = {9};
    std::vector<int> resultatModulo = {4, 1, 0, 6};

    std::vector<int> rDiv = divisionModulo(nbr1, nbr2, true);
    std::vector<int> rMod = divisionModulo(nbr1, nbr2, false);

    return rDiv == resultatDivision && rMod == resultatModulo;
}

bool test_division_modulo_6()
{
    std::vector<int> nbr1 = {0};
    std::vector<int> nbr2 = {2, 4};

    std::vector<int> resultatDivision = {0};
    std::vector<int> resultatModulo = {0};

    std::vector<int> rDiv = divisionModulo(nbr1, nbr2, true);
    std::vector<int> rMod = divisionModulo(nbr1, nbr2, false);

    return rDiv == resultatDivision && rMod == resultatModulo;
}

////////////////////////////////

bool test_exposant_1()
{
    std::vector<int> nbr1 = {2};
    std::vector<int> nbr2 = {0};

    std::vector<int> resultat = {1};

    std::vector<int> r = exposant(nbr1, nbr2);

    return r == resultat;
}

bool test_exposant_2()
{
    std::vector<int> nbr1 = {1, 0};
    std::vector<int> nbr2 = {1};

    std::vector<int> resultat = {1, 0};

    std::vector<int> r = exposant(nbr1, nbr2);

    return r == resultat;
}

bool test_exposant_3()
{
    std::vector<int> nbr1 = {2};
    std::vector<int> nbr2 = {4};

    std::vector<int> resultat = {1, 6};

    std::vector<int> r = exposant(nbr1, nbr2);

    return r == resultat;
}

bool test_exposant_4()
{
    std::vector<int> nbr1 = {3, 2};
    std::vector<int> nbr2 = {1, 0};

    std::vector<int> resultat = { 1, 1, 2, 5, 8, 9, 9, 9, 0, 6, 8, 4, 2, 6, 2, 4 };

    std::vector<int> r = exposant(nbr1, nbr2);

    return r == resultat;
}

bool test_exposant_5()
{
    std::vector<int> nbr1 = {1, 0};
    std::vector<int> nbr2 = {0, 2};

    std::vector<int> resultat = { 1, 0, 0 };

    std::vector<int> r = exposant(nbr1, nbr2);

    return r == resultat;
}

////////////////////////

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

////////////////////////////////////

    if (!test_vecteur_plus_grand_1())
    {
        erreurs.push_back("Echec, vecteur plus grand 1");
    }

    if (!test_vecteur_plus_grand_2())
    {
        erreurs.push_back("Echec, vecteur plus grand 2");
    }

    if (!test_vecteur_plus_grand_3())
    {
        erreurs.push_back("Echec, vecteur plus grand 3");
    }

    if (!test_vecteur_plus_grand_4())
    {
        erreurs.push_back("Echec, vecteur plus grand 4");
    }

    if (!test_vecteur_plus_grand_5())
    {
        erreurs.push_back("Echec, vecteur plus grand 5");
    }

    if (!test_vecteur_plus_grand_6())
    {
        erreurs.push_back("Echec, vecteur plus grand 6");
    }

////////////////////////////////////

    if (!test_addition_1())
    {
        erreurs.push_back("Echec, addition 1");
    }

    if (!test_addition_2())
    {
        erreurs.push_back("Echec, addition 2");
    }

    if (!test_addition_3())
    {
        erreurs.push_back("Echec, addition 3");
    }

    if (!test_addition_4())
    {
        erreurs.push_back("Echec, addition 4");
    }

///////////////////////////////////////

    if (!test_soustraction_1())
    {
        erreurs.push_back("Echec, soustraction 1");
    }

    if (!test_soustraction_2())
    {
        erreurs.push_back("Echec, soustraction 2");
    }

    if (!test_soustraction_3())
    {
        erreurs.push_back("Echec, soustraction 3");
    }

    if (!test_soustraction_4())
    {
        erreurs.push_back("Echec, soustraction 4");
    }

    if (!test_soustraction_5())
    {
        erreurs.push_back("Echec, soustraction 5");
    }

    if (!test_soustraction_6())
    {
        erreurs.push_back("Echec, soustraction 6");
    }

    if (!test_soustraction_7())
    {
        erreurs.push_back("Echec, soustraction 7");
    }

    if (!test_soustraction_8())
    {
        erreurs.push_back("Echec, soustraction 8");
    }

    if (!test_soustraction_9())
    {
        erreurs.push_back("Echec, soustraction 9");
    }

    if (!test_soustraction_10())
    {
        erreurs.push_back("Echec, soustraction 10");
    }

/////////////////////////////////////

    if (!test_multiplication_1())
    {
        erreurs.push_back("Echec, multiplication 1");
    }

    if (!test_multiplication_2())
    {
        erreurs.push_back("Echec, multiplication 2");
    }

    if (!test_multiplication_3())
    {
        erreurs.push_back("Echec, multiplication 3");
    }

    if (!test_multiplication_4())
    {
        erreurs.push_back("Echec, multiplication 4");
    }

    if (!test_multiplication_5())
    {
        erreurs.push_back("Echec, multiplication 5");
    }

    if (!test_multiplication_6())
    {
        erreurs.push_back("Echec, multiplication 6");
    }

    if (!test_multiplication_7())
    {
        erreurs.push_back("Echec, multiplication 7");
    }

    if (!test_multiplication_8())
    {
        erreurs.push_back("Echec, multiplication 8");
    }


//////////////////////////////////

    if (!test_division_modulo_1())
    {
        erreurs.push_back("Echec, division modulo 1");
    }

    if (!test_division_modulo_2())
    {
        erreurs.push_back("Echec, division modulo 2");
    }

    if (!test_division_modulo_3())
    {
        erreurs.push_back("Echec, division modulo 3");
    }

    if (!test_division_modulo_4())
    {
        erreurs.push_back("Echec, division modulo 4");
    }

    if (!test_division_modulo_5())
    {
        erreurs.push_back("Echec, division modulo 5");
    }

    if (!test_division_modulo_6())
    {
        erreurs.push_back("Echec, division modulo 6");
    }

//////////////////////////////////

    if (!test_exposant_1())
    {
        erreurs.push_back("Echec, exposant 1");
    }

    if (!test_exposant_2())
    {
        erreurs.push_back("Echec, exposant 2");
    }

    if (!test_exposant_3())
    {
        erreurs.push_back("Echec, exposant 3");
    }

    if (!test_exposant_4())
    {
        erreurs.push_back("Echec, exposant 4");
    }

    if (!test_exposant_5())
    {
        erreurs.push_back("Echec, exposant 5");
    }

///////

    if (erreurs.size() > 0)
    {
        for (int e=0; e<erreurs.size(); e++)
        {
            std::cout << erreurs.at(e) << std::endl;
        }

        return 1;
    }
    
    return 0;
}


int main()
{
    return executer_tous_les_tests();
}
