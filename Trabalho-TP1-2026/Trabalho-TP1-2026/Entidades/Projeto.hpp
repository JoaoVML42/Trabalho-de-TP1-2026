#ifndef PROJETO_HPP
#define PROJETO_HPP


#include "../Dominios/include/Codigo.hpp"
#include "../Dominios/include/Texto.hpp"
#include "../Dominios/include/Email.hpp"
#include "../Dominios/include/Data.hpp"

class Projeto {
private:
    Codigo codigo;
    Texto nomeProj;
    Email email;
    Data dataInicio;
    Data dataFim;

public:
    void setEmail(const Email& email) { this->email = email; }
    Email getEmail() const { return email; }

    void setCodigo(const Codigo& codigo) { this->codigo = codigo; }
    Codigo getCodigo() const { return codigo; }

    void setNome(const Texto& nome) { this->nomeProj = nome; }
    Texto getNome() const { return nomeProj; }

    void setDataInicio(const Data& data) { this->dataInicio = data; }
    Data getDataInicio() const { return dataInicio; }

    void setDataFim(const Data& data) { this->dataFim = data; }
    Data getDataFim() const { return dataFim; }
};

#endif