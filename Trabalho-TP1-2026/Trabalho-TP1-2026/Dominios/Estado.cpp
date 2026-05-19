#include "../Estado.hpp"
using namespace std;

bool Estado::validarEstado(string estado) {
    vector<string> respostas {"a fazer", "fazendo", "feito", "fazer"};
    std::transform(estado.begin(), estado.end(), estado.begin(), [](unsigned char c) {
    return std::tolower(c);});
    if (std::find(respostas.begin(), respostas.end(), estado) != respostas.end()) {return true;}
    else { return false;}
}

void Estado::set(string estado) {
    if (validarEstado(estado)) {
        std::transform(estado.begin(), estado.end(), estado.begin(), [](unsigned char c) {
        return std::tolower(c);});
        if (estado == "a fazer" || estado == "fazer") {
            this->estado = "A FAZER";
            cout << "O estado " << estado << " foi salvo como " << "A FAZER" << endl;}
        else if (estado == "fazendo") {
            this->estado = "FAZENDO";
            cout << "O estado " << estado << " foi salvo como " << "FAZENDO" << endl;}
        else {
            this->estado = "FEITO";
            cout << "O estado " << estado << " foi salvo como " << "FEITO" << endl;}
    }
    else {
        cout << "O estado " << estado << " é inválido." << endl;}
}
