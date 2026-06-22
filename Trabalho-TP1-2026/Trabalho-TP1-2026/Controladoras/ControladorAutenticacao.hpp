#ifndef CONTROLADORAUTENTICACAO_HPP
#define CONTROLADORAUTENTICACAO_HPP

#include "../Interfaces/IServicoAutenticacao.hpp"

class ControladorAutenticacao : public IServicoAutenticacao {
public:
    bool autenticar(const Email& email, const Senha& senha) override {
        if (email.get() == "admin@unb.br" && senha.get() == "Senha123") {
            return true;
        }
        return false;
    }
};

#endif