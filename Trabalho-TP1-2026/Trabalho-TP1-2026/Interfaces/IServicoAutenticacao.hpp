#ifndef ISERVICOAUTENTICACAO_HPP
#define ISERVICOAUTENTICACAO_HPP

#include "../Entidades/Pessoa.hpp"
#include "../Dominios/include/Email.hpp"
#include "../Dominios/include/Senha.hpp"

class IServicoAutenticacao {
public:
    virtual ~IServicoAutenticacao() {}

    virtual bool autenticar(const Email& email, const Senha& senha) = 0;

    virtual bool cadastrarPessoa(const Pessoa& pessoa) = 0;
};

#endif