#ifndef PAPEL_HPP_INCLUDED
#define PAPEL_HPP_INCLUDED
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Papel {
    private:
        std::string papel = "Papel em branco.";
        bool validarPapel(std::string papel);
    public:
        std::string get() const { return papel; }
        void set(std::string papel);
};


#endif // PAPEL_HPP_INCLUDED
