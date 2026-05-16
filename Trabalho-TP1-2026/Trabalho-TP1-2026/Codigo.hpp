#ifndef CODIGO_HPP_INCLUDED
#define CODIGO_HPP_INCLUDED

#include <string>
#include <sstream>
using namespace std;

class Codigo{
    private:
        string codigo = "Codigo em branco. ";
        bool validarCodigo(string codigo);
    public:
        void set(string codigo);
        string get() {return codigo;}
};



#endif // CODIGO_HPP_INCLUDED
