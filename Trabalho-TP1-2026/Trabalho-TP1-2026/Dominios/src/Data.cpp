#include "../include/Data.hpp"
#include <sstream>
#include <stdexcept>

bool Data::validarData(string data) {
    stringstream valores(data);
    int dia, mes, ano;
    char barra1, barra2;
    if (!(valores >> dia >> barra1 >> mes >> barra2 >> ano)){
        return false;
    }
    if (barra1 != '/' || barra2 != '/') {return false;}

    int diasMes[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    bool bissexto = (ano % 4 == 0);
    if (bissexto) {
    diasMes[1] += 1;}

    if (dia < 1 || dia > diasMes[mes -1]) {return false;}
    if (mes < 1 || mes > 12) {return false;}
    if (ano < 2000 || ano > 2999) {return false;}
    return true;
}

void Data::set(string data){
    if (validarData(data)) {
        this->data = data;
        cout << "Data salva com sucesso. " << data << endl;
    }
    else {cout << "Valor invalido. " << data << endl;}
}
