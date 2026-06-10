#ifndef TESTADOR_HPP_INCLUDED
#define TESTADOR_HPP_INCLUDED
#include "Codigo.hpp"
#include "Data.hpp"
#include "Estado.hpp"
#include "Email.hpp"
#include "Senha.hpp"
#include "Tempo.hpp"
#include "Testador.hpp"
#include "Texto.hpp"
#include "Papel.hpp"
#include "Prioridade.hpp"
#include <fstream>
using namespace std;

class Teste {
    public:
        bool teste(Codigo codigo); // codigo = 5 caracteres, 2 letras maiusculas, 3 digitos.
        bool teste(Data data); // data = dd/mm/aaaa
        bool teste(Estado estado); // A FAZER, FAZENDO, FEITO.
        bool teste(Senha senha); // 6 digitos, deve ter 1 maiuscula, 1 minuscula, 1 numero. numeros e letras devem alternar. Apenas alfanumericos.
        bool teste(Tempo tempo); // valor de 1 a 365
        bool teste(Papel papel); // DESENVOLVEDOR, MESTRE SCRUM, PROPRIETARIO DE PRODUTO.
        bool teste(Prioridade prioridade); // ALTA, MEDIA, BAIXA.
        bool teste(Email email); // parte1 = 64chars, alphanum, . & -; parte2 = @... 255chars, alphanum, . & -; char[0] != . & -;
        bool teste(Texto texto); // 40char, deve comecar e terminar com alphanum, '.' & ',' nao podem se repetir ou vir depois de ' ';
};
#endif // TESTADOR_HPP_INCLUDED
