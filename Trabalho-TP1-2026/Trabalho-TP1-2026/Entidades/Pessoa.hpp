#ifndef PESSOA_HPP
#define PESSOA_HPP

#include "../Dominios/include/Email.hpp"
#include "../Dominios/include/Texto.hpp"
#include "../Dominios/include/Senha.hpp"
#include "../Dominios/include/Papel.hpp"

class Pessoa {
private:
    Email email;
    Texto nome;
    Senha senha;
    Papel papel;

public:
    void setEmail(const Email& email);
    Email getEmail() const;

    void setNome(const Texto& nome);
    Texto getNome() const;

    void setSenha(const Senha& senha);
    Senha getSenha() const;

    void setPapel(const Papel& papel);
    Papel getPapel() const;
};

#endif