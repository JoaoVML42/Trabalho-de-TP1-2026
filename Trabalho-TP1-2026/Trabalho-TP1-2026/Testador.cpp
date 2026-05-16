#include "Testador.hpp"
using namespace std;

bool Teste::teste(Codigo codigo) {
    ifstream codigos("testadores/codigos.txt");
    string linha;
    while(getline(codigos, linha)) {
        codigo.set(linha);}
    codigos.close();
    return 1;
}

bool Teste::teste(Data data) {
    ifstream datas("testadores/datas.txt");
    string linha;
    while(getline(datas, linha)) {
        data.set(linha);}
    datas.close();
    return 1;
}

bool Teste::teste(Senha senha) {
    ifstream senhas("testadores/senhas.txt");
    string linha;
    while(getline(senhas, linha)) {
        senha.set(linha);}
    senhas.close();
    return 1;
}

bool Teste::teste(Tempo tempo) {
    ifstream tempos("testadores/tempos.txt");
    string linha;
    while(getline(tempos, linha)) {
        tempo.set(linha);}
    tempos.close();
    return 1;
}

bool Teste::teste(Papel papel) {
    ifstream papeis("testadores/papeis.txt");
    string linha;
    while(getline(papeis, linha)) {
        papel.set(linha);}
    papeis.close();
    return 1;
}

bool Teste::teste(Prioridade prioridade) {
    ifstream prioridades("testadores/prioridades.txt");
    string linha;
    while(getline(prioridades, linha)) {
        prioridade.set(linha);}
    prioridades.close();
    return 1;
}

bool Teste::teste(Estado estado) {
    ifstream estados("testadores/estados.txt");
    string linha;
    while(getline(estados, linha)) {
        estado.set(linha);}
    estados.close();
    return 1;
}
