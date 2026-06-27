#include "../include/Texto.hpp"
#include <iostream>
#include <cctype>
#include <stdexcept>

using namespace std;

bool Texto::validarTexto(string texto) {
    if (texto.length() > 40 || texto.empty()) { return false;}
    if (texto[0] == ' ' || texto[0] == '.' || texto[0] == ',') { return false;}
    if (texto.back() == ' ' || texto.back() == '.' || texto.back() == ',') { return false;}

    int iterador = 0;
    int iterador2 = 0;
    for (char c : texto) {
        if (c != '.' && c != ',' && c != ' ' && !(std::isalnum(c))) { return false;}
        if (c == '.' || c == ',') { iterador++;}
        else if (c == ' ' || std::isalnum(c)) { iterador = 0;}
        if (iterador > 1) { return false;}

        if (c == ' ') { iterador2++;}
        else if (std::isalnum(c)) { iterador2 = 0;}
        else if (c == '.' || c == ',') { 
            // Se um espaço for seguido por pontuação, a regra do PDF quebra
            if (iterador2 == 1) return false; 
        }
        if (iterador2 > 1) { return false;}
    }
    if (iterador == 1 || iterador2 == 1) { return false;}

    return true;
}

void Texto::set(string texto) {
    if (validarTexto(texto)) {
        this->texto = texto;
        cout << "O comentário ''" << endl << texto << endl << "'' Foi salvo." << endl;}
    else {
        throw invalid_argument("Texto invalido! Nao atende aos criterios de pontuacao ou tamanho.");
}
}