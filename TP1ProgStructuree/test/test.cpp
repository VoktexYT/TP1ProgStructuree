#include <iostream>
#include <vector>

#include "UtilitairesVecteur.h"
#include "addition.h"
#include "soustraction.h"
#include "multiplication.h"
#include "divisionModulo.h"
#include "exposant.h"
#include "constantes.h"

// Structure pour stocker les données de chaque test
struct TestCase {
    std::string nom;
    bool (*fonctionTest)();
};

// Déclaration de toutes les fonctions de test
bool test_egaliser_taille_vecteur_1();
bool test_egaliser_taille_vecteur_2();
bool test_egaliser_taille_vecteur_3();

bool test_vecteur_plus_grand_1();
bool test_vecteur_plus_grand_2();
bool test_vecteur_plus_grand_3();
bool test_vecteur_plus_grand_4();
bool test_vecteur_plus_grand_5();
bool test_vecteur_plus_grand_6();
bool test_vecteur_plus_grand_7();
bool test_vecteur_plus_grand_8();

bool test_addition_1();
bool test_addition_2();
bool test_addition_3();
bool test_addition_4();

bool test_soustraction_1();
bool test_soustraction_2();
bool test_soustraction_3();
bool test_soustraction_4();
bool test_soustraction_5();
bool test_soustraction_6();
bool test_soustraction_7();
bool test_soustraction_8();
bool test_soustraction_9();
bool test_soustraction_10();

bool test_multiplication_1();
bool test_multiplication_2();
bool test_multiplication_3();
bool test_multiplication_4();
bool test_multiplication_5();
bool test_multiplication_6();
bool test_multiplication_7();
bool test_multiplication_8();

bool test_division_modulo_1();
bool test_division_modulo_2();
bool test_division_modulo_3();
bool test_division_modulo_4();
bool test_division_modulo_5();
bool test_division_modulo_6();

bool test_exposant_1();
bool test_exposant_2();
bool test_exposant_3();
bool test_exposant_4();
bool test_exposant_5();

bool test_plan_de_test_1();
bool test_plan_de_test_2();
bool test_plan_de_test_3();
bool test_plan_de_test_4();
bool test_plan_de_test_5();
bool test_plan_de_test_6();
bool test_plan_de_test_7();
bool test_plan_de_test_8();
bool test_plan_de_test_9();
bool test_plan_de_test_10();
bool test_plan_de_test_11();
bool test_plan_de_test_12();
bool test_plan_de_test_13();
bool test_plan_de_test_14();
bool test_plan_de_test_15();
bool test_plan_de_test_16();
bool test_plan_de_test_17();
bool test_plan_de_test_18();
bool test_plan_de_test_19();
bool test_plan_de_test_20();
bool test_plan_de_test_21();
bool test_plan_de_test_22();
bool test_plan_de_test_23();
bool test_plan_de_test_24();


// Fonction pour exécuter un test générique
bool execute_test(const TestCase& testCase) {
    std::string couleurNormal = "\033[0m";
    std::string couleurGris = "\033[90m";
    std::string couleurRouge = "\033[91m";
    std::string couleurVert = "\033[92m";
    std::string couleurJaune = "\033[93m";

    std::cout << couleurGris << "Exécution: " << testCase.nom << couleurNormal << std::endl;
    bool resultat = testCase.fonctionTest();

    if (resultat) {
        std::cout << couleurVert << "[OK]" << couleurNormal << " Test " << testCase.nom << std::endl;
    } else {
        std::cout << couleurRouge << "[ERR] " << couleurNormal << testCase.nom << std::endl;
    }

    std::cout << std::endl;
    return resultat;
}

// Liste de tests avec les fonctions associées
std::vector<TestCase> tests = {
    {"Egaliser Taille 1", test_egaliser_taille_vecteur_1},
    {"Egaliser Taille 2", test_egaliser_taille_vecteur_2},
    {"Egaliser Taille 3", test_egaliser_taille_vecteur_3},

    {"Vecteur Plus Grand 1", test_vecteur_plus_grand_1},
    {"Vecteur Plus Grand 2", test_vecteur_plus_grand_2},
    {"Vecteur Plus Grand 3", test_vecteur_plus_grand_3},
    {"Vecteur Plus Grand 4", test_vecteur_plus_grand_4},
    {"Vecteur Plus Grand 5", test_vecteur_plus_grand_5},
    {"Vecteur Plus Grand 6", test_vecteur_plus_grand_6},
    {"Vecteur Plus Grand 7", test_vecteur_plus_grand_7},
    {"Vecteur Plus Grand 8", test_vecteur_plus_grand_8},

    {"Addition 1", test_addition_1},
    {"Addition 2", test_addition_2},
    {"Addition 3", test_addition_3},
    {"Addition 4", test_addition_4},

    {"Soustraction 1", test_soustraction_1},
    {"Soustraction 2", test_soustraction_2},
    {"Soustraction 3", test_soustraction_3},
    {"Soustraction 4", test_soustraction_4},
    {"Soustraction 5", test_soustraction_5},
    {"Soustraction 6", test_soustraction_6},
    {"Soustraction 7", test_soustraction_7},
    {"Soustraction 8", test_soustraction_8},
    {"Soustraction 9", test_soustraction_9},
    {"Soustraction 10", test_soustraction_10},    
    
    {"Multipication 1", test_multiplication_1},
    {"Multipication 2", test_multiplication_2},
    {"Multipication 3", test_multiplication_3},
    {"Multipication 4", test_multiplication_4},
    {"Multipication 5", test_multiplication_5},
    {"Multipication 6", test_multiplication_6},
    {"Multipication 7", test_multiplication_7},
    {"Multipication 8", test_multiplication_8},

    {"Division Modulo 1", test_division_modulo_1},
    {"Division Modulo 2", test_division_modulo_2},
    {"Division Modulo 3", test_division_modulo_3},
    {"Division Modulo 4", test_division_modulo_4},
    {"Division Modulo 5", test_division_modulo_5},
    {"Division Modulo 6", test_division_modulo_6},

    {"Exposant 1", test_exposant_1},
    {"Exposant 2", test_exposant_2},
    {"Exposant 3", test_exposant_3},
    {"Exposant 4", test_exposant_4},
    {"Exposant 5", test_exposant_5},

    {"PLAN TEST #1", test_plan_de_test_1},
    {"PLAN TEST #2", test_plan_de_test_2},
    {"PLAN TEST #3", test_plan_de_test_3},
    {"PLAN TEST #4", test_plan_de_test_4},
    {"PLAN TEST #5", test_plan_de_test_5},
    {"PLAN TEST #6", test_plan_de_test_6},
    {"PLAN TEST #7", test_plan_de_test_7},
    {"PLAN TEST #8", test_plan_de_test_8},
    {"PLAN TEST #9", test_plan_de_test_9},
    {"PLAN TEST #10", test_plan_de_test_10},
    {"PLAN TEST #11", test_plan_de_test_11},
    {"PLAN TEST #12", test_plan_de_test_12},
    {"PLAN TEST #13", test_plan_de_test_13},
    {"PLAN TEST #14", test_plan_de_test_14},
    {"PLAN TEST #15", test_plan_de_test_15},
    {"PLAN TEST #16", test_plan_de_test_16},
    {"PLAN TEST #17", test_plan_de_test_17},
    {"PLAN TEST #18", test_plan_de_test_18},
    {"PLAN TEST #19", test_plan_de_test_19},
    {"PLAN TEST #20", test_plan_de_test_20},
    {"PLAN TEST #21", test_plan_de_test_21},
    {"PLAN TEST #22", test_plan_de_test_22},
    {"PLAN TEST #23", test_plan_de_test_23},
    {"PLAN TEST #24", test_plan_de_test_24},
};

int main() {
    // Exécute tous les tests
    for (const auto& test : tests) {
        execute_test(test);
    }
    return 0;
}

/////////////////////////////////////////////

bool test_plan_de_test_1()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("12345");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("65");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("12 410");

    std::vector<int> r = addition(nbr1, nbr2);

    return resultat == r;
}

bool test_plan_de_test_2()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("762");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("83");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("679");

    std::vector<int> r = soustraction(nbr1, nbr2);

    return resultat == r;
}

bool test_plan_de_test_3()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("123");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("45");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("5 535");

    std::vector<int> r = multiplication(nbr1, nbr2);

    return resultat == r;
}

bool test_plan_de_test_4()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("35 887");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("43");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("834");

    std::vector<int> r = divisionModulo(nbr1, nbr2, true);

    return resultat == r;
}

bool test_plan_de_test_5()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("35 887");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("43");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("25");

    std::vector<int> r = divisionModulo(nbr1, nbr2, false);

    return resultat == r;
}

bool test_plan_de_test_6()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("65");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("247");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("0");

    std::vector<int> r = divisionModulo(nbr1, nbr2, true);

    return resultat == r;
}

bool test_plan_de_test_7()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("65");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("247");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("65");

    std::vector<int> r = divisionModulo(nbr1, nbr2, false);

    return resultat == r;
}

bool test_plan_de_test_8()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("100000");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("1");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("99 999");

    std::vector<int> r = soustraction(nbr1, nbr2);

    return resultat == r;
}

bool test_plan_de_test_9()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("100000");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("99999");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("1");

    std::vector<int> r = soustraction(nbr1, nbr2);

    return resultat == r;
}

bool test_plan_de_test_10()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("12");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("832");

    egaliser_taille_vecteur(nbr1, nbr2);

    afficher_vecteur_int(nbr1);
    afficher_vecteur_int(nbr2);

    std::vector<int> resultat = {-8, 2, 0};

    std::vector<int> r = soustraction(nbr1, nbr2);

    return resultat == r;
}

bool test_plan_de_test_11()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("000123");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("2");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("125");

    std::vector<int> r = addition(nbr1, nbr2);

    return resultat == r;
}

bool test_plan_de_test_12()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("874 352 856 028 174 562 185 472 745 391 173 958");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("981 265 376 163 475 361 805 761 216 632");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("874 353 837 293 550 725 660 834 551 152 390 590");

    std::vector<int> r = addition(nbr1, nbr2);

    return resultat == r;
}

bool test_plan_de_test_13()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("31 251 734 872 345 763 284 967 873");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("7 237 352 184 572 295 723 456 208 174 532");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("7 237 383 436 307 168 069 219 493 142 405");

    std::vector<int> r = addition(nbr1, nbr2);

    return resultat == r;
}

bool test_plan_de_test_14()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("877 264 375 906 813 234 872 164 372 358 276 145 475 167 345");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("965 163 456 723 216 490 005 375 481 274 573 184 336 232 186");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("1 842 427 832 630 029 724 877 539 853 632 849 329 811 399 531");

    std::vector<int> r = addition(nbr1, nbr2);

    return resultat == r;
}

bool test_plan_de_test_15()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("874 352 856 028 174 562 185 472 745 391 173 958");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("981 265 376 163 475 361 805 761 216 632");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("874 351 874 762 798 398 710 110 939 629 957 326");

    std::vector<int> r = soustraction(nbr1, nbr2);

    return resultat == r;
}

bool test_plan_de_test_16()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("31 251 734 872 345 763 284 967 873");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("7 237 352 184 572 295 723 456 208 174 532");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = {-7, 2, 3, 7, 3, 2, 0, 9, 3, 2, 8, 3, 7, 4, 2, 3, 3, 7, 7, 6, 9, 2, 9, 2, 3, 2, 0, 6, 6, 5, 9};

    std::vector<int> r = soustraction(nbr1, nbr2);

    return resultat == r;
}

bool test_plan_de_test_17()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("3 487 129 462 480 843 275 683 264 273 126");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("3 487 129 462 480 843 275 683 264 273 125");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("1");

    std::vector<int> r = soustraction(nbr1, nbr2);

    return resultat == r;
}

bool test_plan_de_test_18()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("3 487 129 462 480 843 275 683 264 273 126");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("3 487 129 462 480 843 275 683 264 273 126");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("0");

    std::vector<int> r = soustraction(nbr1, nbr2);

    return resultat == r;
}

bool test_plan_de_test_19()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("63 465 093 821 740 214 032 619 486 321 948 632 198 463 219 864 921");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("4 023 917 463 921 864 982 146 982 164 398 216 498 321 649 832 164 983 216 498 321");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("255 378 299 378 740 103 878 150 293 116 490 905 795 078 593 966 331 282 996 230 447 017 892 313 079 334 430 764 732 278 960 072 142 352 243 297 641");

    std::vector<int> r = multiplication(nbr1, nbr2);

    return resultat == r;
}

bool test_plan_de_test_20()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("5 538 235 709 310 384 756 291 017 465 376 920 334 850");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("645 274 315 409 685 746 391 375 864 177 614 874");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("8 582");

    std::vector<int> r = divisionModulo(nbr1, nbr2, true);

    return resultat == r;
}

bool test_plan_de_test_21()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("5 538 235 709 310 384 756 291 017 465 376 920 334 850");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("645 274 315 409 685 746 391 375 864 177 614 874");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("491 534 464 461 680 760 229 799 004 629 486 182");

    std::vector<int> r = divisionModulo(nbr1, nbr2, false);

    return resultat == r;
}

bool test_plan_de_test_22()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("2");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("3");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("8");

    std::vector<int> r = exposant(nbr1, nbr2);

    return resultat == r;
}

bool test_plan_de_test_23()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("2");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("128");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("340 282 366 920 938 463 463 374 607 431 768 211 456");

    std::vector<int> r = exposant(nbr1, nbr2);

    return resultat == r;
}

bool test_plan_de_test_24()
{
    std::vector<int> nbr1 = convertire_nombre_string_en_vecteur("10");
    std::vector<int> nbr2 = convertire_nombre_string_en_vecteur("100");

    egaliser_taille_vecteur(nbr1, nbr2);

    std::vector<int> resultat = convertire_nombre_string_en_vecteur("10 000 000 000 000 000 000 000 000 000 000 000 000 000 000 000 000 000 000 000 000 000 000 000 000 000 000 000 000 000 000 000 000 000");

    std::vector<int> r = exposant(nbr1, nbr2);

    return resultat == r;
}

/////

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

bool test_vecteur_plus_grand_7()
{
    std::vector<int> nbr1 = {1, 7};
    std::vector<int> nbr2 = {1, 7};

    bool resultat = true;

    bool r = premier_vecteur_plus_grand_que_deuxieme(nbr1, nbr2, true);

    return resultat == r;
}

bool test_vecteur_plus_grand_8()
{
    std::vector<int> nbr1 = {1, 7};
    std::vector<int> nbr2 = {1, 7};

    bool resultat = false;

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
