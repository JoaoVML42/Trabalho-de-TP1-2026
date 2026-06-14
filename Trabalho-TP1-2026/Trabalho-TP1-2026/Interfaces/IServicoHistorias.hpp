#ifndef ISERVICOHISTORIAS_HPP
#define ISERVICOHISTORIAS_HPP

#include "../Entidades/HistoriaUsuario.hpp"
#include "../Dominios/include/Codigo.hpp"

class IServicoHistorias {
public:
    virtual ~IServicoHistorias() {}

    virtual bool salvarHistoria(const Codigo& ) = 0;
};

#endif