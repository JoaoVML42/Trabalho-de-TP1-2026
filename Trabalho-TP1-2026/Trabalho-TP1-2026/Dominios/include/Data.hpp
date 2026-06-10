#ifndef DATA_HPP_INCLUDED
#define DATA_HPP_INCLUDED
#include <iostream>
#include <string>
using namespace std;


class Data {
    private:
        string data = "valor vazio";
        bool validarData(string valor);
    public:
        string get() {return data;}
        void set(string valor);
};

#endif // DATA_HPP_INCLUDED
