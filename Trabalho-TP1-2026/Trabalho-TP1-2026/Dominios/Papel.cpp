#include "../Papel.hpp"
using namespace std;

bool Papel::validarPapel(string papel) {
    vector<string> respostas {"dev", "scrum", "mestre", "produto", "proprietario", "desenvolvedor", "mestre scrum",
    "proprietario de produto", "proprietario do produto", "proprietário de produto", "proprietário do produto", "proprietário"};
    std::transform(papel.begin(), papel.end(), papel.begin(), [](unsigned char c) {
    return std::tolower(c);});

    if (std::find(respostas.begin(), respostas.end(), papel) != respostas.end()) {return true;}
    else { return false;}
}

void Papel::set(string papel) {
    std::transform(papel.begin(), papel.end(), papel.begin(), [](unsigned char c) {
    return std::tolower(c);});
    if (validarPapel(papel)) {
        if (papel == "dev" || papel == "desenvolvedor") {
            this->papel = "DESENVOLVEDOR";
            cout << "papel " << papel << " cadastrado como " << "DESENVOLVEDOR" << endl;
        }
        else if (papel == "scrum" || papel == "mestre" || papel == "mestre scrum") {
            this->papel = "MESTRE SCRUM";
            cout << "papel " << papel << " cadastrado como " << "MESTRE SCRUM" << endl;
        }
        else {
        this->papel = "PROPRIETÁRIO DE PRODUTO";
        cout << "papel " << papel << " cadastrado como " << "PROPRIETÁRIO DE PRODUTO" << endl;
        }
    }
    else {
        cout << "papel " << papel << " Não é um valor válido." << endl;}
}
