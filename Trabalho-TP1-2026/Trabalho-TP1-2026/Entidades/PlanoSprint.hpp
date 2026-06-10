#ifndef PLANOSPRINT_HPP
#define PLANOSPRINT_HPP

#include "../Dominios/include/Codigo.hpp"
#include "../Dominios/include/Tempo.hpp"

class PlanoSprint {
private:
    Codigo codigo;
    Codigo ProjetoId;
    Tempo tempo;

public: 
    void setCodigo(const Codigo& codigo) { this->codigo = codigo; }
    Codigo getCodigo() const { return codigo; }

    void setProjetoId(const Codigo& ProjetoId) { this->ProjetoId = ProjetoId; }
    Codigo getProjetoId() const { return ProjetoId; }

    void setTempo(const Tempo& tempo) { this->tempo = tempo; }
    Tempo getTempo() const { return tempo; }
};

#endif