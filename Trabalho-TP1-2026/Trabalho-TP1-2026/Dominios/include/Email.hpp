#ifndef EMAIL_HPP_INCLUDED
#define EMAIL_HPP_INCLUDED
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

class Email {
    private:
        string email = "email em branco.";
        bool validarEmail(string email);
    public:
        void set(string email);
        string get() const { return email;}
};


#endif // EMAIL_HPP_INCLUDED
