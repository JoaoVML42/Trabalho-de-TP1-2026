#ifndef TEXTO_HPP_INCLUDED
#define TEXTO_HPP_INCLUDED
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Texto {
    private:
        string texto = "texto vazio";
        bool validarTexto(std::string texto);
    public:
        void set(std::string texto);
        string get() { return texto;}
};



#endif // TEXTO_HPP_INCLUDED
