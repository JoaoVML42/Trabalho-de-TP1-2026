#ifndef TESTADOR_HPP_INCLUDED
#define TESTADOR_HPP_INCLUDED
#include "Codigo.hpp"
#include "Data.hpp"
#include "Senha.hpp"
#include "Tempo.hpp"
#include "Testador.hpp"
#include <fstream>
using namespace std;

class Teste {
    public:
        bool teste(Codigo codigo); // codigo = 5 caracteres, 2 letras maiusculas, 3 digitos.
        bool teste(Data data); // data = dd/mm/aaaa
        bool teste(Senha senha); // 6 digitos, deve ter 1 maiuscula, 1 minuscula, 1 numero. numeros e letras devem alternar. Apenas alfanumericos.
        bool teste(Tempo tempo); // valor de 1 a 365
};
#endif // TESTADOR_HPP_INCLUDED
