#ifndef CONTROLADORHISTORIAS_HPP
#define CONTROLADORHISTORIAS_HPP

#include "../Interfaces/IServicoHistorias.hpp"

class ControladorHistoria : public IServicoHistorias {
public:
    bool salvarHistoria(const HistoriaUsuario& historia) override {
        if (historia.getCodigoProj().get() == "123456"){
            return true;
        }
        return false;
    }

    bool excluirHistoria(const Codigo& historiaId) override {
        if (historiaId.get() == "123456"){
            return true;
        }
        return false;
    }

    HistoriaUsuario buscarHistoria(const Codigo& historiaId) override {
        HistoriaUsuario historiaFicticia;
        historiaFicticia.setCodigo(historiaId);

        Texto nomeFicticio;
        nomeFicticio.set("Implementar Login do Usuario");
    
        Tempo estimativaFicticia;
        estimativaFicticia.set("8");
        
        historiaFicticia.setNome(nomeFicticio);
        historiaFicticia.setEstimativa(estimativaFicticia);

        return historiaFicticia;
}
};

#endif