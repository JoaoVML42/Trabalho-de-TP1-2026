#include "../include/Codigo.hpp"
#include <cctype>
#include <iostream>
using namespace std;

bool Codigo::validarCodigo(string codigo) {

    char caractere01;
    char caractere02;
    char digito01;
    char digito02;
    char digito03;
    stringstream valores(codigo);

    if (codigo.length() != 5) { return false;}
    if (!(valores >> caractere01 >> caractere02 >> digito01 >> digito02 >> digito03)) {
    return false;}
    if (!isupper(caractere01) || !isupper(caractere02)) { return false;}
    if (!((digito01 >= 48 && digito01 <= 57) && (digito02 >= 48 && digito02 <= 57) &&
    (digito03 >= 48 && digito03 <= 57))) { return false;}

    return true;
}

void Codigo::set(string codigo) {
    if (validarCodigo(codigo)) {
        this->codigo = codigo;
        cout << "Codigo armazenado com sucesso. " << codigo << endl;}
    else {
    cout << "Valores invalidos. Tente novamente. " << codigo << endl;}
}
