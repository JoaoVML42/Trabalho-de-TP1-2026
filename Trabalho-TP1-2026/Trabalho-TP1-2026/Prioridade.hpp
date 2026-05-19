#ifndef PRIORIDADE_HPP_INCLUDED
#define PRIORIDADE_HPP_INCLUDED
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Prioridade {
    private:
        string prioridade = "prioridade nula.";
        bool validarPrioridade(string prioridade);
    public:
        string get() { return prioridade;}
        void set(string prioridade);
};

#endif // PRIORIDADE_HPP_INCLUDED
