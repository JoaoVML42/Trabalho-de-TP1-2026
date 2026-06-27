#include "../include/Papel.hpp"
#include <vector>
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <cctype>

using namespace std;

bool Papel::validarPapel(string papel) {
    vector<string> respostas {"dev", "scrum", "mestre", "produto", "proprietario", "desenvolvedor", "mestre scrum",
    "proprietario de produto", "proprietario do produto", "proprietário de produto", "proprietário do produto", "proprietário"};
    std::transform(papel.begin(), papel.end(), papel.begin(), [](unsigned char c) {
    return std::tolower(c);});

    std::transform(papel.begin(), papel.end(), papel.begin(), [](unsigned char c) {
        return std::tolower(c);
    });

    if (std::find(respostas.begin(), respostas.end(), papel) != respostas.end()) {
        return true;
    }
    return false;

}

    

void Papel::set(string papel) {
    string papel_aux = papel;
    std::transform(papel_aux.begin(), papel_aux.end(), papel_aux.begin(), [](unsigned char c) {
    return std::tolower(c);});
    if (validarPapel(papel_aux)) {
        if (papel_aux == "dev" || papel_aux == "desenvolvedor") {
            this->papel = "DESENVOLVEDOR";
            cout << "papel " << papel << " cadastrado como " << "DESENVOLVEDOR" << endl;
        }
        else if (papel_aux == "scrum" || papel_aux == "mestre" || papel_aux == "mestre scrum") {
            this->papel = "MESTRE SCRUM";
        }
        else {
        this->papel = "PROPRIETARIO DE PRODUTO";
        }
        cout << "Papel \"" << papel << "\" cadastrado com sucesso como: " << this->papel << endl;
    }
    else {
        throw invalid_argument("Papel invalido! Digite algo como Desenvolvedor, Scrum Master ou Proprietario de Produto.");
}
}