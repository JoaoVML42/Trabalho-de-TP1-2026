#ifndef HISTORIAUSUARIO_HPP
#define HISTORIAUSUARIO_HPP

#include "../Dominios/include/Codigo.hpp"
#include "../Dominios/include/Tempo.hpp"
#include "../Dominios/include/Prioridade.hpp"
#include "../Dominios/include/Estado.hpp"
#include "../Dominios/include/Papel.hpp"
#include "../Dominios/include/Texto.hpp"
#include "../Dominios/include/Email.hpp"

class HistoriaUsuario {
private:

    Codigo codigo;
    Codigo codigoProj;
    Codigo codigoPlanoSprint;
    Texto nome;
    Texto descricaoPapel;
    Texto descricaoAcao;
    Texto descricaoValor;
    Tempo estimativa;
    Prioridade prioridade;
    Estado estado;
    Email email;

public:
    void setCodigo(const Codigo& codigo) { this->codigo = codigo; }
    Codigo getCodigo() const { return codigo; }

    void setCodigoProj(const Codigo& codigoProj) { this->codigoProj = codigoProj; }
    Codigo getCodigoProj() const { return codigoProj; }

    void setCodigoPlanoSprint(const Codigo& codigoPlanoSprint) { this->codigoPlanoSprint = codigoPlanoSprint; }
    Codigo getCodigoPlanoSprint() const { return codigoPlanoSprint; }

    void setNome(const Texto& nome) { this->nome = nome; }
    Texto getNome() const { return nome; }

    void setDescricaoPapel(const Texto& papel) { this->descricaoPapel = papel; }
    Texto getDescricaoPapel() const { return descricaoPapel; }

    void setDescricaoAcao(const Texto& acao) { this->descricaoAcao = acao; }
    Texto getDescricaoAcao() const { return descricaoAcao; }

    void setDescricaoValor(const Texto& valor) { this->descricaoValor = valor; }
    Texto getDescricaoValor() const { return descricaoValor; }

    void setEstimativa(const Tempo& estimativa) { this->estimativa = estimativa; }
    Tempo getEstimativa() const { return estimativa; }

    void setPrioridade(const Prioridade& prioridade) { this->prioridade = prioridade; }
    Prioridade getPrioridade() const { return prioridade; }

    void setEstado(const Estado& estado) { this->estado = estado; }
    Estado getEstado() const { return estado; }
};

#endif