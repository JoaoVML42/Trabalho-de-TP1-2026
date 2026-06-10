#ifndef TEMPO_HPP_INCLUDED
#define TEMPO_HPP_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Tempo {
    private:
        unsigned short int tempo = 0;
        bool validarTempo(string tempo);
    public:
        void set (string tempo);
        unsigned short int get() {
        return tempo;}
};



#endif // TEMPO_HPP_INCLUDED
