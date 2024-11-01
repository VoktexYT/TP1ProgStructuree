# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Set the project name and specify C++ as the language
project(TP1ProgStructuree VERSION 1.0 LANGUAGES CXX)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable and specify all source files
add_executable(out 
    ./sources/TP1.cpp
    ./sources/Calculatrice.cpp
    ./sources/LectureEtAffichage.cpp
    ./sources/UtilitairesVecteur.cpp
    ./fonctions/addition.cpp
    ./fonctions/divisionModulo.cpp
    ./fonctions/multiplication.cpp
    ./fonctions/soustraction.cpp
    ./fonctions/convertions.cpp
)

add_executable(test
    ./sources/UtilitairesVecteur.cpp
    ./test/testUtilitaireVecteur.cpp
)

# Add include directory for header files
target_include_directories(
    out PRIVATE ./includes
)

target_include_directories(
    test PRIVATE ./includes
)
