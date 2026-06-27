#include "../include/Senha.hpp"
using namespace std;

bool Senha::validarSenha(string senha) {
    // 1. Verificar tamanho exato de 6 caracteres
    if (senha.length() != 6) { return false; }

    bool possui_maiuscula = false;
    bool possui_minuscula = false;
    bool possui_digito = false;

    for (char c : senha) {
        if (std::isupper(c)) { possui_maiuscula = true; }
        else if (std::islower(c)) { possui_minuscula = true; }
        else if (std::isdigit(c)) { possui_digito = true; }
        else { return false; } // Se não for letra nem número, é inválido (ex: @, #)
    }

    if (!possui_maiuscula || !possui_minuscula || !possui_digito) { return false; }

    for (size_t i = 0; i < senha.length() - 1; i++) {
        // Se o caractere atual E o próximo forem letras -> ERRO
        if (std::isalpha(senha[i]) && std::isalpha(senha[i + 1])) { return false; }
        
        // Se o caractere atual E o próximo forem dígitos -> ERRO
        if (std::isdigit(senha[i]) && std::isdigit(senha[i + 1])) { return false; }
    }

    return true;
}

void Senha::set(string senha) {
    if (validarSenha(senha)){
        this->senha = senha;
        cout << "A senha " << senha << " foi salva." << endl;}
else {
    throw invalid_argument("Senha invalida! O formato nao atende aos requisitos.");
}}
