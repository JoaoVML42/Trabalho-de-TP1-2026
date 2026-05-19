#include <iostream>
#include <string>
#include "Data.hpp"
#include "Codigo.hpp"
#include "Tempo.hpp"
#include "Senha.hpp"
#include "Papel.hpp"
#include "Prioridade.hpp"
#include "Estado.hpp"
#include "Email.hpp"
#include "Texto.hpp"
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
    cout << endl << endl;

    Teste testePapel;
    Papel papel;
    testePapel.teste(papel);
    cout << endl << endl;

    Teste testePrioridade;
    Prioridade prioridade;
    testePrioridade.teste(prioridade);
    cout << endl << endl;

    Teste testeEstado;
    Estado estado;
    testeEstado.teste(estado);
    cout << endl << endl;

    Teste testeEmail;
    Email email;
    testeEmail.teste(email);
    cout << endl << endl;

    Teste testeTexto;
    Texto texto;
    testeTexto.teste(texto);
    cout << endl << endl;

    return 0;
}
