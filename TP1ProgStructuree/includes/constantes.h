#pragma once

#include <vector>
#include <iostream>


const std::string CHIFFRES = "0123456789";

const char ADDITION = '+';
const char SOUSTRACTION = '-';
const char MULTIPLICATION = '*';
const char MULTIPLICATION_2 = 'x';
const char MULTIPLICATION_3 = 'X';
const char DIVISION = '/';
const char MODULO = '%';
const char EXPOSANT = '^';

const std::vector<char> OPERATEURS = {
    ADDITION, SOUSTRACTION, MULTIPLICATION, MULTIPLICATION_2, MULTIPLICATION_3,
    DIVISION, MODULO, EXPOSANT
};

const char EGALE = '=';

const int CODE_ERREUR = -1;
const std::vector<int> CODE_ERREUR_DIV_MOD = { -1 };
