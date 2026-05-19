#include "../Prioridade.hpp"
using namespace std;

bool Prioridade::validarPrioridade(string prioridade) {
    vector<string> respostas {"alta", "media", "baixa", "alto", "medio", "baixo", "a", "m", "b", "média", "médio"};
    std::transform(prioridade.begin(), prioridade.end(), prioridade.begin(), [](unsigned char c) {
    return std::tolower(c);});

    if (std::find(respostas.begin(), respostas.end(), prioridade) != respostas.end()) {return true;}
    else { return false;}
}

void Prioridade::set(string prioridade) {
    if (validarPrioridade(prioridade)) {
        std::transform(prioridade.begin(), prioridade.end(), prioridade.begin(), [](unsigned char c) {
        return std::tolower(c);});

        if (prioridade == "alta" || prioridade == "alto" || prioridade == "a") {
            this->prioridade = "ALTA";
            cout << "a prioridade " << prioridade << " foi definida como " << "ALTA" << endl;}
        else if (prioridade == "baixa" || prioridade == "baixo" || prioridade == "b") {
            this->prioridade = "BAIXA";
            cout << "a prioridade " << prioridade << " foi definida como " << "BAIXA" << endl;}
        else {
        this->prioridade = "MÉDIA";
        cout << "a prioridade " << prioridade << " foi definida como " << "MÉDIA" << endl;}
    }
    else {
        cout << "a prioridade " << prioridade << " é inválida." << endl;}
}
