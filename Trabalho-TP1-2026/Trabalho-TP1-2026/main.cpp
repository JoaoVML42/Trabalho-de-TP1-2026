#include <iostream>
#include <string>
#include "Data.hpp"
#include "Codigo.hpp"
#include "Tempo.hpp"
#include "Senha.hpp"
#include "Testador.hpp"
using namespace std;

int main()
{
    Teste testeCodigo;
    Codigo codigo;
    testeCodigo.teste(codigo);
    cout << endl << endl;

    Teste testeData;
    Data data;
    testeData.teste(data);
    cout << endl << endl;

    Teste testeSenha;
    Senha senha;
    testeSenha.teste(senha);
    cout << endl << endl;

    Teste testeTempo;
    Tempo tempo;
    testeTempo.teste(tempo);


    return 0;
}
