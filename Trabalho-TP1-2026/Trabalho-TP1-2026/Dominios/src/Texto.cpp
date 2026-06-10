#include "../include/Texto.hpp"
using namespace std;

bool Texto::validarTexto(string texto) {
    if (texto.length() > 40 || texto.empty()) { return false;}
    if (texto[0] == ' ' || texto[0] == '.' || texto[0] == ',') { return false;}
    int iterador = 0;
    int iterador2 = 0;
    for (char c : texto) {
        if (c != '.' && c != ',' && c != ' ' && !(std::isalnum(c))) { return false;}
        if (c == '.' || c == ',') { iterador++;}
        else if (c == ' ' || std::isalnum(c)) { iterador = 0;}
        if (iterador > 1) { return false;}

        if (c == ' ') { iterador2++;}
        else if (std::isalnum(c)) { iterador2 = 0;}
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
        cout << "O comentário ''" << endl << texto << endl << "'' É inválido." << endl;}
}
