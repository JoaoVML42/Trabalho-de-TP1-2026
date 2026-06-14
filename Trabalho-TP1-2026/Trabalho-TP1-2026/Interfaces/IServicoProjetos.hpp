#ifndef ISERVICOPROJETOS_HPP
#define ISERVICOPROJETOS_HPP

#include "../Entidades/Projeto.hpp"
#include "../Dominios/include/Codigo.hpp"

class IServicoProjetos {
public:
    virtual ~IServicoProjetos() {}

    virtual bool salvarProjeto(const Projeto& projeto) = 0;

    virtual bool excluirProjeto(const Codigo& projetoId) = 0;

    virtual Projeto buscarProjeto(const Codigo& projetoId) = 0;
};

#endif