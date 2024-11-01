#pragma once

#include <vector>


const std::vector<char> CHIFFRES = {
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'
};

const std::vector<char> OPERATEURS = {
    '+', '-', '*', 'x', 'X', '/', '%', '^'
};

const char ADDITION = '+';
const char SOUSTRACTION = '-';
const char MULTIPLICATION = '*';
const char MULTIPLICATION_2 = 'x';
const char MULTIPLICATION_3 = 'X';
const char DIVISION = '/';
const char MODULO = '%';
const char EXPOSANT = '^';

const char EGALE = '=';

const int CODE_ERREUR = -1;
