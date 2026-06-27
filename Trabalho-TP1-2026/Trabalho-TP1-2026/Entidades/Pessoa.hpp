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
    void setEmail(const Email& email) { this->email = email; }
    Email getEmail() const { return email; }

    void setNome(const Texto& nome) { this->nome = nome; }
    Texto getNome() const { return nome; }

    void setSenha(const Senha& senha) { this->senha = senha; }
    Senha getSenha() const { return senha; }

    void setPapel(const Papel& papel) { this->papel = papel; }
    Papel getPapel() const { return papel; }
};

#endif