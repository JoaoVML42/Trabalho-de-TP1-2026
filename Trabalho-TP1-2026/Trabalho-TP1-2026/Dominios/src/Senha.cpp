#include "../include/Senha.hpp"
using namespace std;

bool Senha::validarSenha(string senha) {
    unsigned short int alpha = 0;
    unsigned short int numerical = 0;

    unsigned short int uppercase = 0;
    unsigned short int lowercase = 0;
    unsigned short int number = 0;

    if (senha.length() != 6) { return false;}
    for (char i : senha) {
        if (std::isupper(i)) {
        uppercase += 1;} //dica avancada gemini
        else if (std::islower(i)) {
        lowercase += 1;}
        else if (std::isdigit(i)) {
        number += 1;}
        else { return false;}
    }
    if (uppercase == 0 || lowercase == 0 || number == 0) { return false;}

    for (char i : senha) {
        if (std::isalpha(i)) {
            alpha += 1;
            if (numerical >= 1){ numerical--;}
        }
        if (std::isdigit(i)) {
            numerical +=1;
            if (alpha >= 1) { alpha--;}
        }
    }
    if (alpha > 1 || numerical > 1 || alpha == numerical) { return false;}
    else { return true;}
}

void Senha::set(string senha) {
    if (validarSenha(senha)){
        this->senha = senha;
        cout << "A senha " << senha << " foi salva." << endl;}
    // No seu Senha.cpp, mude o else do seu método set para:
else {
    throw invalid_argument("Senha invalida! O formato nao atende aos requisitos.");
}}
