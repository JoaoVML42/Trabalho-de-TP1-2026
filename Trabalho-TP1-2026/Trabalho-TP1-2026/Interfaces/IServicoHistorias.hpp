#ifndef ISERVICOHISTORIAS_HPP
#define ISERVICOHISTORIAS_HPP

#include "../Entidades/HistoriaUsuario.hpp"
#include "../Dominios/include/Codigo.hpp"

class IServicoHistorias {
public:
    virtual ~IServicoHistorias() {}

    virtual bool salvarHistoria(const HistoriaUsuario& historia) = 0;

    virtual bool excluirHistoria(const Codigo& historiaId) = 0;

    virtual HistoriaUsuario buscarHistoria(const Codigo& historiaId) = 0;
};

#endif