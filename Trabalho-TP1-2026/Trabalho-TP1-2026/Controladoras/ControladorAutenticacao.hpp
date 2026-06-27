#ifndef CONTROLADORAUTENTICACAO_HPP
#define CONTROLADORAUTENTICACAO_HPP

#include "../Interfaces/IServicoAutenticacao.hpp"

#include "../Dominios/include/Email.hpp"
#include "../Dominios/include/Senha.hpp"
#include "../Entidades/Pessoa.hpp"

class ControladorAutenticacao : public IServicoAutenticacao {
public:
    bool autenticar(const Email& email, const Senha& senha) override {
        if (email.get() == "admin@unb.br" && senha.get() == "Senha123") {
            return true;
        }
        return false;
    }

    bool cadastrarPessoa(const Pessoa& pessoa) override {
        return true; 
    }
};

#endif