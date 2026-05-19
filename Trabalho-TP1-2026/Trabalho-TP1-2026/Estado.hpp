#ifndef ESTADO_HPP_INCLUDED
#define ESTADO_HPP_INCLUDED
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class Estado {
    private:
        string estado = "Estado em branco.";
        bool validarEstado(string estado);
    public:
        void set(string estado);
        string get() { return estado;}
};

#endif // ESTADO_HPP_INCLUDED
