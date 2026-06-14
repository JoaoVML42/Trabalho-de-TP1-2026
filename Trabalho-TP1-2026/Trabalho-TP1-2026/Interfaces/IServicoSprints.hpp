#ifndef ISERVICOSPRINTS_HPP
#define ISERVICOSPRINTS_HPP

#include "../Entidades/PlanoSprint.hpp"
#include "../Dominios/include/Codigo.hpp"

class IServicoSprints {
public:
    virtual ~IServicoSprints() {}

    virtual bool salvarSprint(const PlanoSprint& planoSprint) = 0;

    virtual bool excluirSprint(const Codigo& sprintId) = 0;

    virtual PlanoSprint buscarSprint(const Codigo& sprintId) = 0;
};

#endif