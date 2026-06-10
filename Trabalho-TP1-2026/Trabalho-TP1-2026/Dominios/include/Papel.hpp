#ifndef PAPEL_HPP_INCLUDED
#define PAPEL_HPP_INCLUDED
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Papel {
    private:
        string papel = "Papel em branco.";
        bool validarPapel(string papel);
    public:
        string get() { return papel;}
        void set(string papel);
};


#endif // PAPEL_HPP_INCLUDED
