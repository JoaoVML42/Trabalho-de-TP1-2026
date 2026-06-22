#ifndef SENHA_HPP_INCLUDED
#define SENHA_HPP_INCLUDED
#include <string>
#include <cctype>
#include <iostream>
using namespace std;

class Senha {
    private:
        string senha = "Senha em branco.";
        bool validarSenha(string senha);
    public:
        void set(string senha);
        string get() const { return senha;}
        };

#endif // SENHA_HPP_INCLUDED
