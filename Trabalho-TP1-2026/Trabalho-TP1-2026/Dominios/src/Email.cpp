#include "../include/Email.hpp"
#include <algorithm>
#include <cctype>
#include <stdexcept>

using namespace std;

bool Email::validarEmail(string email) {
    if (email.empty()) { return false;}

    int count = std::count(email.begin(), email.end(), '@');
    if (count != 1) { return false;}

    int at = email.find('@', 0);
    string parte_local = email.substr(0, at);
    string dominio = email.substr(at + 1);

    if (parte_local.empty() || dominio.empty()) { return false; }
    if (parte_local.length() > 64 || dominio.length() > 255) { return false; }

    if (parte_local.front() == '.' || parte_local.front() == '-' || 
        parte_local.back() == '.' || parte_local.back() == '-') { 
        return false; 
    }
    
    if (dominio.front() == '-' || dominio.front() == '.' || 
        dominio.back() == '-' || dominio.back() == '.') { 
        return false; 
    }
    

    for (size_t i = 0; i < dominio.length(); i++) {
        char c = dominio[i];
        if (!std::isalnum(c) && c != '-' && c != '.') { return false; }

        // Ponto ou hífen no domínio também devem ser seguidos por letra ou dígito
        if (c == '.' || c == '-') {
            if (i + 1 < dominio.length() && !std::isalnum(dominio[i + 1])) {
                return false;
            }
        }
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
