#pragma once

#include <iostream>
#include <vector>


// Tous les chiffres possibles
const std::string CHIFFRES = "0123456789";

// Tous les opérateurs séparés
const char ADDITION = '+';
const char SOUSTRACTION = '-';
const char MULTIPLICATION = '*';
const char MULTIPLICATION_2 = 'x';
const char MULTIPLICATION_3 = 'X';
const char DIVISION = '/';
const char MODULO = '%';
const char EXPOSANT = '^';
const char EGALE = '=';

// Tous les opérateurs enssembles
const std::vector<char> OPERATEURS = {
    ADDITION, 
    SOUSTRACTION, 
    MULTIPLICATION, 
    MULTIPLICATION_2, 
    MULTIPLICATION_3,
    DIVISION, 
    MODULO, 
    EXPOSANT
};

// Les codes d'erreur
const int CODE_ERREUR = -1;
const std::vector<int> CODE_ERREUR_DIV_MOD = {CODE_ERREUR};

// Les cas qui revient souvent
const std::vector<int> VECTEUR_ZERO = {0};
const std::vector<int> VECTEUR_UN = {1};

// la fréeuence d'espacement entre chaque chiffre
const int FREQUENCE_ESPACEMENT = 3;

// Les signes
const int POSITIF = 1;
const int NEGATIF = -1;

// La base
const int BASE = 10;

