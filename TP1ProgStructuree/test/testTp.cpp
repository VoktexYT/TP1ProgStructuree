#include <iostream>
#include <vector>
#include <string>
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

// Fonction pour exécuter un test générique
bool execute_test(const TestCase& testCase) {
    std::cout << "Executing: " << testCase.nom << std::endl;
    bool resultat = testCase.fonctionTest();
    if (resultat) {
        std::cout << "Test " << testCase.nom << " passed!" << std::endl;
    } else {
        std::cout << "Test " << testCase.nom << " failed." << std::endl;
    }
    return resultat;
}

// Liste de tests avec les fonctions associées
std::vector<TestCase> tests = {
    {"Test Egaliser Taille 1", test_egaliser_taille_vecteur_1},
    {"Test Egaliser Taille 2", test_egaliser_taille_vecteur_2},
    {"Test Egaliser Taille 3", test_egaliser_taille_vecteur_3},
    {"Test Vecteur Plus Grand 1", test_vecteur_plus_grand_1},
    {"Test Vecteur Plus Grand 2", test_vecteur_plus_grand_2},
    {"Test Vecteur Plus Grand 3", test_vecteur_plus_grand_3},
    {"Test Vecteur Plus Grand 4", test_vecteur_plus_grand_4},
    {"Test Vecteur Plus Grand 5", test_vecteur_plus_grand_5},
    {"Test Vecteur Plus Grand 6", test_vecteur_plus_grand_6},
    {"Test Vecteur Plus Grand 7", test_vecteur_plus_grand_7},
    {"Test Vecteur Plus Grand 8", test_vecteur_plus_grand_8},
    {"Test Addition 1", test_addition_1},
    {"Test Addition 2", test_addition_2},
    {"Test Addition 3", test_addition_3},
    {"Test Addition 4", test_addition_4},
    {"Test Soustraction 1", test_soustraction_1},
    {"Test Soustraction 2", test_soustraction_2},
    {"Test Soustraction 3", test_soustraction_3},
    {"Test Soustraction 4", test_soustraction_4},
    {"Test Soustraction 5", test_soustraction_5},
    // Ajoute d'autres tests ici...
};

int main() {
    // Exécute tous les tests
    for (const auto& test : tests) {
        execute_test(test);
    }
    return 0;
}
