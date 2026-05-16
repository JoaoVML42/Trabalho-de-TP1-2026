#include "../Tempo.hpp"

bool Tempo::validarTempo(string tempo) {
    unsigned short int dias;
    for (char i : tempo) {
        if (!(std::isdigit(i)) && !(std::isblank(i))) { return false;}
    }
    try { dias = stoi(tempo); }
    catch (...) {return false;}

    if (dias < 1 || dias > 365) { return false;}
    return true;
}

void Tempo::set(string tempo) {
    if (validarTempo(tempo)){
        this->tempo = stoi(tempo);
        cout << "Tempo configurado com sucesso. " << stoi(tempo) << endl;}
    else {
        cout << "O tempo informado e invalido. " << tempo << endl;}
}
