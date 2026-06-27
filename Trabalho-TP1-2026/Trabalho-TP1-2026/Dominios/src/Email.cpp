#include "../include/Email.hpp"
using namespace std;

bool Email::validarEmail(string email) {
    if (email.empty()) { return false;}
    int count = std::count(email.begin(), email.end(), '@');
    if (count != 1) { return false;}

    int at = email.find('@', 0);
    string parte_local, dominio;
    parte_local.append(email.substr(0, at));
    dominio.append(email.substr(at + 1, email.length()));

    if (parte_local.empty() || dominio.empty()) { return false; }
    if (parte_local.front() == '.' || parte_local.front() == '-' || parte_local.back() == '.' || parte_local.back() == '-') {
        return false;
    }
    if (dominio.front() == '-' || dominio.back() == '-') { return false; }
    if (parte_local.length() > 64 || dominio.length() > 255) { return false;}

    int repeticao = 0;
    for (char c : email) {
        if (!std::isalnum(c) && c != '-' && c != '.' && c != '@') { return false;}

        if (c == '.' || c == '-') { repeticao += 1;}
        else if (std::isalnum(c) || c == '@'){ repeticao = 0;}
        if (repeticao > 1) { return false;}
    }
    return true;
}

void Email::set(string email) {
    if (validarEmail(email)) {
        this->email = email;
        cout << "O email " << email << " foi registrado com sucesso." << endl;
    }
    else {
        throw invalid_argument("Email invalido! O formato nao atende aos requisitos.");
    }   
}
