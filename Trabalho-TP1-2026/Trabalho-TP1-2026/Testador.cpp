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
